using System;
using System.Linq;
using System.Collections.Generic;
using System.IO;
using System.Security.Cryptography;
using System.Text;
using System.Threading.Tasks;
using LeanCloud;
using LeanCloud.Common;
using TapTap.Common;
using TapTap.Bootstrap;
using TapTap.UI;
using UnityEngine;

namespace TapTap.Achievement.Standalone {
    public class TapAchievementController : ITapAchievement
    {
        private const int ERROR_CODE = 80080;
        private static Dictionary<string, TapAchievementBean> localAllAchievements;
        private static Dictionary<string, TapAchievementBean> localUserAchievements;

        private static HashSet<string> changedAchievementIds = new HashSet<string>();

        private static bool hasInit;

        private static string SERVER_URL = "https://tds-tapsdk.cn.tapapis.com";

        private static TapAchievementHttpClient httpClient;

        private static Persistence allAchievementsPersistence;
        private static Persistence userAchievementsPersistence;

        private static TapAchievementHttpClient HttpClient =>
            httpClient ??
            (httpClient = new TapAchievementHttpClient(LCCore.AppId, LCCore.AppKey, SERVER_URL));

        private static IAchievementCallback AchievementCallback {
            get; set;
        }

        private static bool showToast = true;

        private static bool isShowingToast;

        private static List<TapAchievementBean> toastingAchievements = new List<TapAchievementBean>();

        private static async Task InitData() {
            ClearIconCache();
            TDSUser user = await GetCurrentUser();
            var filename = EncryptString(user.ObjectId);
            allAchievementsPersistence = new Persistence(Path.Combine(Application.persistentDataPath,
                TapAchievement.ACHIEVEMENT_DIR,
                TapAchievement.ALL_ACHIEVEMENT_DATA,
                filename));
            userAchievementsPersistence = new Persistence(Path.Combine(Application.persistentDataPath,
                TapAchievement.ACHIEVEMENT_DIR,
                TapAchievement.USER_ACHIEVEMENT_DATA,
                filename));
            try {
                try
                {
                    await FetchAllAchievements();
                }
                catch (Exception ie)
                {
                    await OnFetchAllAchievementsError(ie);
                }
                try
                {
                    await FetchUserAchievements();
                }
                catch (Exception ie)
                {
                    await OnFetchUserAchievementsError(ie);
                }

                hasInit = true;
                AchievementCallback?.OnAchievementSDKInitSuccess();
            } catch (Exception e) {
                hasInit = false;
                AchievementCallback?.OnAchievementSDKInitFail(new TapError {
                    code = 80080,
                    errorDescription = e.Message
                });
            }
        }

        private static void ResetData()
        {
            if (allAchievementsPersistence != null) allAchievementsPersistence.Delete();
            if (userAchievementsPersistence != null) userAchievementsPersistence.Delete();
        }

        private static async Task<List<TapAchievementBean>> FetchAllAchievements()
        {
            string path = $"achievement/api/v1/clients/{LCCore.AppId}/achievements/languages/{TapLocalizeManager.GetCurrentLanguageString()}";
            Dictionary<string, object> result = await HttpClient.Get<Dictionary<string, object>>(path);
            if (result.TryGetValue("success", out object successObj) &&
                successObj is bool success) {
                if (success) {
                    if (result.TryGetValue("data", out object dataObj) &&
                        dataObj is Dictionary<string, object> data &&
                        data.TryGetValue("list", out object listObj) &&
                        listObj is List<object> list) {
                        List<TapAchievementBean> achievements = list.Cast<Dictionary<string, object>>()
                            .Select(item => TapAchievementBean.Parse(item))
                            .ToList();
                        SaveAllAchievementsToLocal(achievements);
                        return achievements;
                    }
                } else {
                    if (result.TryGetValue("data", out object dataObj) &&
                        dataObj is Dictionary<string, object> data) {
                        int code = (int)data["code"];
                        string message = data["error"] as string;
                        throw new LCException(code, message);
                    }
                }
            }
            return null;
        }

        private static async Task OnFetchAllAchievementsError(Exception e)
        {
            TapLogger.Error(e);
            localAllAchievements = await allAchievementsPersistence.Load<Dictionary<string, TapAchievementBean>>();
            if (localAllAchievements == null)
            {
                throw e;
            }
        }

        private static async Task<List<TapAchievementBean>> FetchUserAchievements() 
        {
            TDSUser user = await GetCurrentUser();
            string path = $"achievement/api/v1/clients/{LCCore.AppId}/users/{user.ObjectId}/achievements/languages/{TapLocalizeManager.GetCurrentLanguageString()}";
            Dictionary<string, object> result = await HttpClient.Get<Dictionary<string, object>>(path);
            if (result.TryGetValue("data", out object dataObj) &&
                dataObj is Dictionary<string, object> data &&
                data.TryGetValue("list", out object listObj) &&
                listObj is List<object> list) {
                List<TapAchievementBean> achievements = list.Cast<Dictionary<string, object>>()
                    .Select(item => TapAchievementBean.Parse(item))
                    .ToList();
                SaveUserAchievementsToLocal(achievements);
                return achievements;
            }
            return null;
        }
        
        private static async Task OnFetchUserAchievementsError(Exception e)
        {
            TapLogger.Error(e);
            localUserAchievements = await userAchievementsPersistence.Load<Dictionary<string, TapAchievementBean>>();
            if (localAllAchievements == null)
            {
                throw e;
            }
        }

        private static async void SaveAllAchievementsToLocal(List<TapAchievementBean> achievements) {
            localAllAchievements = new Dictionary<string, TapAchievementBean>(
                achievements.ToDictionary(item => item.displayId));
            await allAchievementsPersistence.Save(localAllAchievements);
        }

        private static async void SaveUserAchievementsToLocal(List<TapAchievementBean> achievements) {
            localUserAchievements = new Dictionary<string, TapAchievementBean>(
                achievements.ToDictionary(item => item.displayId));
            await userAchievementsPersistence.Save(localUserAchievements);
        }

        private static List<TapAchievementBean> GetLocalAllAchievements() {
            return localAllAchievements?.Values.ToList();
        }

        private static List<TapAchievementBean> GetLocalUserAchievements() {
            return localUserAchievements?.Values
                .OrderBy(item => item.reachedTime)
                .ToList();
        }

        private static void Reach(string id) {
            if (!hasInit) {
                AchievementCallback?.OnAchievementStatusUpdate(null,
                    new TapError {
                        code = 80080,
                        errorDescription = "sdk not init"
                    });
            }
            TapAchievementBean achievement = null;
            try
            {
                achievement = GetAchievement(id);
            }
            catch (ArgumentException ae)
            {
                achievement = new TapAchievementBean(); 
                achievement.displayId = id;
                AchievementCallback?.OnAchievementStatusUpdate(achievement,
                    new TapError {
                        code = 9002,
                        errorDescription = $"Achievement not found! id: {id}"
                    });
            }
            
            bool hasReached = achievement.IsFullReached();
            
            if (achievement.Reach())
            {
                UpdateAchievementStatus(hasReached, achievement);
            }
        }

        private static void UpdateAchievementStatus(bool hasReachedBefore, TapAchievementBean data)
        {
            UpdateAchievementStatus(data);
        
            if (!hasReachedBefore && data.IsFullReached() && showToast)
            {
                ShowAchievementToast(data);
            }
        }

        private static void ShowAchievementToast(TapAchievementBean achievement)
        {
            if (isShowingToast)
            {
                toastingAchievements.Add(achievement);
            }
            else
            {
                InternalShowAchievementToast(achievement);
            }
        }

        private static void InternalShowAchievementToast(TapAchievementBean achievement)
        {
            isShowingToast = true;
            var openParams = new TapAchievementToast.OpenParams() { data = achievement};
            UIManager.Instance
                .OpenUI<TapAchievementToast>("Prefabs/TapAchievementToast", openParams);
        }
        
        internal static void OnAchievementToastEnded()
        {
            isShowingToast = false;
            if (toastingAchievements.Count > 0)
            {
                var toastingData = toastingAchievements[0];
                toastingAchievements.RemoveAt(0);
                ShowAchievementToast(toastingData);
            }
        }

        private static void GrowStep(string id, int step) {
            if (!hasInit) {
                AchievementCallback?.OnAchievementStatusUpdate(null,
                    new TapError {
                        code = 80080,
                        errorDescription = "sdk not init"
                    });
            }

            TapAchievementBean achievement = null;
            try
            {
                achievement = GetAchievement(id);
            }
            catch (ArgumentException ae)
            {
                achievement = new TapAchievementBean(); 
                achievement.displayId = id;
                AchievementCallback?.OnAchievementStatusUpdate(achievement,
                    new TapError {
                        code = 9002,
                        errorDescription = $"Achievement not found! id: {id}"
                    });
            }

            bool hasReached = achievement.IsFullReached();
            
            if (achievement.Grow(step)) {
                UpdateAchievementStatus(hasReached, achievement);
            }
        }

        private static void MakeSteps(string id, int step) {
            if (!hasInit) {
                AchievementCallback?.OnAchievementStatusUpdate(null,
                    new TapError {
                        code = 80080,
                        errorDescription = "sdk not init"
                    });
            }

            TapAchievementBean achievement = null;
            try
            {
                achievement = GetAchievement(id);
            }
            catch (ArgumentException ae)
            {
                achievement = new TapAchievementBean(); 
                achievement.displayId = id;
                AchievementCallback?.OnAchievementStatusUpdate(achievement,
                    new TapError {
                        code = 9002,
                        errorDescription = $"Achievement not found! id: {id}"
                    });
            }
            bool hasReached = achievement.IsFullReached();
            if (achievement.Make(step)) {
                UpdateAchievementStatus(hasReached, achievement);
            }
        }

        private static void UpdateAchievementStatus(TapAchievementBean achievement) {
            AchievementCallback?.OnAchievementStatusUpdate(achievement, null);

            changedAchievementIds.Add(achievement.displayId);

            _ = Upload();
        }

        private static async Task<TDSUser> GetCurrentUser() {
            TDSUser user = await TDSUser.GetCurrent();
            if (user == null) {
                throw new InvalidOperationException("Not logged in.");
            }
            return user;
        }

        private static TapAchievementBean GetAchievement(string id) {
            if (localUserAchievements.TryGetValue(id, out TapAchievementBean achievement)) {
                return achievement;
            }

            if (localAllAchievements.TryGetValue(id, out achievement)) {
                TapAchievementBean ach = achievement.Clone() as TapAchievementBean;
                localUserAchievements[id] = ach;
                return ach;
            }

            throw new ArgumentException($"Invalid achievement id: {id}");
        }

        private static async Task Upload() {
            if (changedAchievementIds.Count == 0) {
                return;
            }

            HashSet<string> uploadAchievementIds = changedAchievementIds;
            changedAchievementIds = new HashSet<string>();

            try {
                // 同步到服务器
                TDSUser user = await GetCurrentUser();
                string path = $"achievement/api/v1/clients/{LCCore.AppId}/users/{user.ObjectId}/achievements";
                List<Dictionary<string, object>> uploadAchievements = uploadAchievementIds
                    .Select(id => {
                        TapAchievementBean item = localUserAchievements[id];
                        return new Dictionary<string, object> {
                            { "achievement_id", item.id },
                            { "achievement_open_id", item.displayId },
                            { "complete_time", item.reachedTime },
                            { "completed_step", item.reachedStep }
                        };
                    })
                    .ToList();
                Dictionary<string, object> body = new Dictionary<string, object> {
                    { "list", uploadAchievements }
                };
                Dictionary<string, object> result = await HttpClient.Post<Dictionary<string, object>>(path, data: body);

                // 判断同步结果
                if (result.TryGetValue("success", out object successObj) &&
                    successObj is bool success &&
                    success) {
                    if (result.TryGetValue("data", out object dataObj) &&
                        dataObj is Dictionary<string, object> data &&
                        data.TryGetValue("platinum", out object platinumObj) &&
                        platinumObj is Dictionary<string, object> platinum)
                    {
                        ProcessPlatinumAchievement(platinum);
                    }
                } else {
                    changedAchievementIds.UnionWith(uploadAchievementIds);
                }
                
                _ = allAchievementsPersistence.Save(localAllAchievements);
                _ = userAchievementsPersistence.Save(localUserAchievements);
            } catch (Exception e) {
                LCLogger.Error(e.Message);
                changedAchievementIds.UnionWith(uploadAchievementIds);
                AchievementCallback?.OnAchievementStatusUpdate(null, new TapError {
                    code = 80080,
                    errorDescription = e.Message
                });
            }
        }

        private static void ProcessPlatinumAchievement(Dictionary<string, object> platinum)
        {
            TapAchievementBean achievement = TapAchievementBean.Parse(platinum);
            TapAchievementBean lastPlatinumAchievement = null;
            localUserAchievements.TryGetValue(achievement.displayId, out lastPlatinumAchievement);
            bool isReached = lastPlatinumAchievement != null && lastPlatinumAchievement.IsFullReached();
            localUserAchievements[achievement.displayId] = achievement;
            AchievementCallback?.OnAchievementStatusUpdate(achievement, null);
            if (!isReached && achievement.IsFullReached() && showToast)
            {
                ShowAchievementToast(achievement);
            }
        }

        private void ShowAchievementPage()
        {
            var allAchievements = GetLocalAllAchievements();
            var allUserAchievements = GetLocalUserAchievements();
            MergeAchievementsInto(allAchievements, allUserAchievements);
            
            var lockAchievements = allAchievements.Where((ach) => !ach.IsFullReached())
                .ToList();
            
            var unlockAchievements = allUserAchievements.Where((ach) => ach.IsFullReached())
                .OrderBy((x)=>x.reachedTime)
                .Reverse()
                .ToList();

            var openParams = new TapAchievementPanel.OpenParams()
                { unlockAchievements = unlockAchievements, lockAchievements = lockAchievements };
            UIManager.Instance
                .OpenUI<TapAchievementPanel>("Prefabs/TapAchievementPanel", openParams);
        }
        
        private void SetShowToast(bool showToast)
        {
            TapAchievementController.showToast = showToast;
        }

        private void MergeAchievementsInto(List<TapAchievementBean> dstList, List<TapAchievementBean> srcList)
        {
            if (dstList == null || dstList.Count == 0 || srcList == null || srcList.Count == 0) return;
            foreach (var srcItem in srcList)
            {
                for (int i = 0; i < dstList.Count; i++)
                {
                    var dstItem = dstList[i];
                    if (dstItem.displayId == srcItem.displayId && dstItem.id == srcItem.id)
                    {
                        dstList[i] = srcItem.Clone() as TapAchievementBean;
                        break;
                    }
                }
            }
        }
        
        public static void ClearIconCache()
        {
            TapAchievementUtil.ClearIconCache();
        }

        #region Interface
        void ITapAchievement.Init(TapConfig tapConfig)
        {
   
        }

        async void ITapAchievement.InitData()
        {
            await InitData();
        }

        void ITapAchievement.RegisterCallback(IAchievementCallback callback)
        {
            AchievementCallback = callback;
        }

        async Task<List<TapAchievementBean>> ITapAchievement.FetchAllAchievementList()
        {
            try {
                List<TapAchievementBean> allAchievements = await FetchAllAchievements();
                return allAchievements;
            } catch (Exception e)
            {
                throw e;
            }
        }

        Task<List<TapAchievementBean>> ITapAchievement.GetLocalAllAchievementList()
        {
            try {
                List<TapAchievementBean> allAchievements = GetLocalAllAchievements();
                return Task.FromResult(allAchievements);
            } catch (Exception e) {
                throw e;
            }
            return null;
        }

        Task<List<TapAchievementBean>> ITapAchievement.GetLocalUserAchievementList()
        {
            try {
                List<TapAchievementBean> allAchievements = GetLocalUserAchievements();
                return Task.FromResult(allAchievements);
            } catch (Exception e) {
                throw e;
            }
            return null;
        }

        async Task<List<TapAchievementBean>> ITapAchievement.FetchUserAchievementList()
        {
            try {
                List<TapAchievementBean> userAchievements = await FetchUserAchievements();
                return userAchievements;
            } catch (Exception e)
            {
                throw e;
            }
        }

        async void ITapAchievement.FetchAllAchievementList(Action<List<TapAchievementBean>, TapError> action)
        {
            try {
                List<TapAchievementBean> allAchievements = await FetchAllAchievements();
                action?.Invoke(allAchievements, null);
            } catch (Exception e) {
                action?.Invoke(null, new TapError(ERROR_CODE, e.Message));
            }
        }

        void ITapAchievement.GetLocalAllAchievementList(Action<List<TapAchievementBean>, TapError> action)
        {
            try {
                List<TapAchievementBean> allAchievements = GetLocalAllAchievements();
                action?.Invoke(allAchievements, null);
            } catch (Exception e) {
                action?.Invoke(null, new TapError(ERROR_CODE, e.Message));
            }
        }

        void ITapAchievement.GetLocalUserAchievementList(Action<List<TapAchievementBean>, TapError> action)
        {
            try {
                List<TapAchievementBean> allAchievements = GetLocalUserAchievements();
                action?.Invoke(allAchievements, null);
            } catch (Exception e) {
                action?.Invoke(null, new TapError(ERROR_CODE, e.Message));
            }
        }

        async void ITapAchievement.FetchUserAchievementList(Action<List<TapAchievementBean>, TapError> action)
        {
            try {
                List<TapAchievementBean> userAchievements = await FetchUserAchievements();
                action?.Invoke(userAchievements, null);
            } catch (Exception e) {
                action?.Invoke(null, new TapError(ERROR_CODE, e.Message));
            }
        }

        void ITapAchievement.Reach(string id)
        {
            Reach(id);
        }

        void ITapAchievement.GrowSteps(string id, int step)
        {
            GrowStep(id, step);
        }

        void ITapAchievement.MakeSteps(string id, int step)
        {
            MakeSteps(id, step);
        }

        void ITapAchievement.ShowAchievementPage()
        {
            ShowAchievementPage();
        }

        void ITapAchievement.SetShowToast(bool showToast)
        {
            SetShowToast(showToast);
        }
        
        void ITapAchievement.SetApplicationName(string name)
        {
            TapAchievementUtil.applicationName = name;
        }
        
        void ITapAchievement.SetApplicationIcon(Texture2D iconTexuture)
        {
            TapAchievementUtil.gameIcon = iconTexuture;
        }
        
        #endregion
        
        private static string EncryptString(string str)
        {
            var md5 = MD5.Create();
            // 将字符串转换成字节数组
            byte[] byteOld = Encoding.UTF8.GetBytes(str);
            // 调用加密方法
            byte[] byteNew = md5.ComputeHash(byteOld);
            // 将加密结果转换为字符串
            var sb = new StringBuilder();
            foreach (byte b in byteNew)
            {
                // 将字节转换成16进制表示的字符串，
                sb.Append(b.ToString("x2"));
            }

            // 返回加密的字符串
            return sb.ToString();
        }
    }
}
