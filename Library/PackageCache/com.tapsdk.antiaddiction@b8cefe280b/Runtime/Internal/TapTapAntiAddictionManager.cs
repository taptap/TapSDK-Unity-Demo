using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Threading.Tasks;
using TapTap.AntiAddiction.Internal;
using TapTap.AntiAddiction.Localization;
using TapTap.UI;
using TapTap.AntiAddiction.Model;
using TapTap.Common;
using UnityEngine;
using TapTap.Login;
using Network = TapTap.AntiAddiction.Internal.Network;

namespace TapTap.AntiAddiction 
{
    public class TapTapAntiAddictionManager
    {
        public static string UserId;

        private static AntiAddictionConfig config;
        
        private static bool needResumePoll;

        public static AntiAddictionConfig AntiAddictionConfig => config == null ? config = new AntiAddictionConfig() : config;

        internal static string GetRsaPublicKey() => Worker.RsaPublicKey;

        public static AntiAddictionLocalizationItems LocalizationItems
        {
            get
            {
                if (_antiAddictionLocalizationItems == null)
                {
                    var textAsset = Resources.Load<TextAsset>(AntiAddictionLocalizationItems.PATH);
                    _antiAddictionLocalizationItems = AntiAddictionLocalizationItems.FromJson(textAsset.text);
                }
                return _antiAddictionLocalizationItems;
            }
        }
        private static AntiAddictionLocalizationItems _antiAddictionLocalizationItems;

        private static PlayableResult _currentPlayableResult;
        internal static PlayableResult CurrentPlayableResult
        {
            get => _currentPlayableResult;
            set
            {
                if (CurrentRemainSeconds == null)
                {
                    AntiAddictionPoll.StartCountdownRemainTime();
                }

                if (value != null)
                {
                    CurrentRemainSeconds = value.RemainTime;
                }
                _currentPlayableResult = value;
            }
        }

        internal static int? CurrentRemainSeconds {get; set; }

        private static BaseAntiAddictionWorker worker;

        /// <summary>
        /// 初始化, 建议使用这个接口,因为默认调用了 SetRegion,如果使用另一个 Init 接口,需要在 Init 之后,手动调用 SetRegion
        /// </summary>
        /// <param name="config"></param>
        public static void Init(AntiAddictionConfig config) 
        {
            if (config == null)
            {
                throw new ArgumentNullException(nameof(config));
            }

            TapTapAntiAddictionManager.config = config;
            Init(config.gameId, config.showSwitchAccount);
            SetRegion(config.region);
        }
        
        /// <summary>
        /// 初始化
        /// </summary>
        /// <param name="gameId"></param>
        /// <param name="showSwitchAccount"></param>
        public static void Init(string gameId,
            bool showSwitchAccount = true) 
        {
            if (string.IsNullOrEmpty(gameId)) 
            {
                throw new ArgumentNullException(nameof(gameId));
            }

            AntiAddictionConfig.showSwitchAccount = showSwitchAccount;
            
            Network.SetGameId(gameId);
        }
        
        /// <summary>
        /// 设置地区 (在启动之前设置)
        /// </summary>
        /// <param name="region"></param>
        public static void SetRegion(Region region)
        {
            Network.ChangeRegion(region);
            Network.ChangeHost();
            
            if (region == AntiAddictionConfig.region) return;
            
            AntiAddictionConfig.region = region;
            
            var textAsset = Resources.Load<TextAsset>(AntiAddictionLocalizationItems.PATH);
            _antiAddictionLocalizationItems = AntiAddictionLocalizationItems.FromJson(textAsset.text);
        }
        
        public static void SetTestEnvironment(bool enable) {
            Network.SetTestEnvironment(enable);
            if (enable)
                UIManager.Instance.OpenTip("当前处于防沉迷调试模式", Color.red, TextAnchor.UpperRight);
            else {
                UIManager.Instance.CloseTip();
            }
        }
        /// <summary>
        /// 启动
        /// </summary>
        /// <param name="userId">用户名</param>
        /// <param name="isTapUser">是否使用快速登录,已 deprecated </param>
        /// <returns></returns>
        public static async Task<int> StartUp(string userId, bool isTapUser) {
            if (string.IsNullOrEmpty(userId)) 
            {
                throw new ArgumentNullException(nameof(userId));
            }
            
            UserId = Uri.EscapeDataString(userId);
            UIManager.Instance.OpenLoading();
            InitWorker();
            await UpdateConfig();
            
            return await Worker.StartUp(UserId, isTapUser);
        }
        
        private static void InitWorker() {
            var worker = Worker;
            if (worker == null) {
                throw new ArgumentException($"Region {AntiAddictionConfig.region} is out of range!");
            }
            TapTapAntiAddictionManager.worker = worker;
        }
        
        private static async Task UpdateConfig() {
            await worker.FetchConfigAsync();
            worker.OnConfigFetched();
        }

        /// <summary>
        /// 登出
        /// </summary>
        public static void Logout() 
        {
            CurrentRemainSeconds = null;
            CurrentPlayableResult = null;
            Worker.Logout();
        }

        /// <summary>
        /// 检查支付
        /// </summary>
        /// <param name="amount"></param>
        /// <returns></returns>
        public static async Task<PayableResult> CheckPayLimit(long amount)
        {
            return await Worker.CheckPayableAsync(amount);
        }

        /// <summary>
        /// 上报支付
        /// </summary>
        /// <param name="amount"></param>
        /// <returns></returns>
        public static Task SubmitPayResult(long amount) 
        {
            return Worker.SubmitPayResult(amount);
        }
        
        /// <summary>
        /// 轮询时,检查可玩性
        /// </summary>
        /// <returns></returns>
        internal static async Task<PlayableResult> CheckPlayableOnPolling()
        {
            CurrentPlayableResult = await Worker.CheckPlayableOnPollingAsync();
            return CurrentPlayableResult;
        }

        internal static async Task<bool> IsStandaloneEnabled()
        {
            return await Worker.IsStandaloneEnabled();
        }
        
        public static void EnterGame()
        {
            if (needResumePoll)
            {
                AntiAddictionPoll.StartUp();
                needResumePoll = false;
            }
        }

        public static void LeaveGame()
        {
            if (AntiAddictionPoll.StartPoll)
            {
                AntiAddictionPoll.Logout();
                needResumePoll = true;
            }
        }

        /// <summary>
        /// 是否使用移动版 UI,否则就是用 Standalone 版本 UI
        /// </summary>
        /// <returns></returns>
        public static bool IsUseMobileUI()
        {
            if (useMobileUI != null)
                return useMobileUI.Value;
            #if UNITY_ANDROID || UNITY_IOS
            return true;
            #else
            return false;
            #endif
        }
        
        public static bool? useMobileUI;
        
        #region Worker
        
        private static readonly Dictionary<Region, BaseAntiAddictionWorker>
            Workers = new Dictionary<Region, BaseAntiAddictionWorker>();

        private static BaseAntiAddictionWorker GetWorker(Region region)
        {
            if (Workers.TryGetValue(region, out BaseAntiAddictionWorker worker) && worker != null)
                return worker;
            BaseAntiAddictionWorker newWorker = null;
            switch (region)
            {
                case Region.China:
                    // TODO
                    newWorker = GetChinaWorker();
                    break;
                case Region.Vietnam:
                    newWorker = new VietnamAntiAddictionWorker();
                    break;
            }

            Workers[region] = newWorker;
            
            TapLogger.Debug($"Get New Worker! region: {region.ToString()} newWorker: {(newWorker != null ? newWorker.GetType().ToString() : "NULL")} worker In Dic: {(Workers[region] != null ? Workers[region].GetType().ToString() : "NULL")}");
            return newWorker;
        }

        private static BaseAntiAddictionWorker Worker => GetWorker(AntiAddictionConfig.region);

        private static BaseAntiAddictionWorker GetChinaWorker() {
            // get ChinaAntiAddictionWorker from TapTap.AntiAddiction.Standalone.Runtime dll
            Type baseWorkerType = typeof(BaseAntiAddictionWorker);
            Type[] chinaWorkerType = AppDomain.CurrentDomain.GetAssemblies()
                .Where(asssembly => asssembly.GetName().FullName.StartsWith("TapTap.AntiAddiction.Standalone.Runtime"))
                .SelectMany(assembly => assembly.GetTypes())
                .Where(clazz => baseWorkerType.IsAssignableFrom(clazz) && clazz.IsClass)
                .ToArray();
            if (chinaWorkerType != null && chinaWorkerType.Length > 0) {
                return Activator.CreateInstance(chinaWorkerType[0]) as BaseAntiAddictionWorker;
            }

            return null;
        }

        #endregion
    }
}
