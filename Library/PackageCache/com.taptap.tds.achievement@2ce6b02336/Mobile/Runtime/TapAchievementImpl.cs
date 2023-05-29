using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using TapTap.Bootstrap;
using TapTap.Common;
using UnityEngine;
using LC.Newtonsoft.Json;

namespace TapTap.Achievement.Mobile
{
    public class TapAchievementImpl : ITapAchievement
    {
        public TapAchievementImpl()
        {
            EngineBridge.GetInstance()
                .Register(TapAchievementConstants.TapAchievementClz, TapAchievementConstants.TapAchievementImpl);
        }

        private static volatile TapAchievementImpl _sInstance;

        private static readonly object Locker = new object();

        public static TapAchievementImpl GetInstance()
        {
            lock (Locker)
            {
                if (_sInstance == null)
                {
                    _sInstance = new TapAchievementImpl();
                }
            }

            return _sInstance;
        }

        public void Init(TapConfig tapConfig)
        {
            Dictionary<string, object> config = tapConfig.ToDict();
            EngineBridge.GetInstance().CallHandler(
                new Command.Builder()
                    .Service(TapAchievementConstants.TapAchievementService)
                    .Method("init")
                    .Args("initWithConfig", JsonConvert.SerializeObject(config))
                    .CommandBuilder());
        }

        public void InitData()
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(TapAchievementConstants.TapAchievementService)
                .Method("initData")
                .CommandBuilder());
        }

        public void RegisterCallback(IAchievementCallback callback)
        {
            var command = new Command.Builder()
                .Service(TapAchievementConstants.TapAchievementService)
                .Method("registerBridgeCallback")
                .OnceTime(false)
                .Callback(true)
                .CommandBuilder();

            EngineBridge.GetInstance().CallHandler(command, result =>
            {
                if (!CheckResult(result))
                {
                    callback.OnAchievementSDKInitFail(new TapError(80080,
                        "Bridge Execute Register Achievement Callback Error"));
                    return;
                }

                Debug.Log("TapAchievement registerCallback:" + result.content);

                var achievementWrapper = new AchievementWrapperBean(result.content);

                if (achievementWrapper.initCallback)
                {
                    if (achievementWrapper.error == null)
                    {
                        callback.OnAchievementSDKInitSuccess();
                    }
                    else
                    {
                        callback.OnAchievementSDKInitFail(achievementWrapper.error);
                    }

                    return;
                }

                callback.OnAchievementStatusUpdate(achievementWrapper.achievementModel, achievementWrapper.error);
            });
        }

        public void FetchAllAchievementList(Action<List<TapAchievementBean>, TapError> action)
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(TapAchievementConstants.TapAchievementService)
                .Method("fetchAllAchievementList")
                .Callback(true)
                .OnceTime(true)
                .CommandBuilder(), result => { HandlerAchievementResult(action, result); });
        }

        public void GetLocalAllAchievementList(Action<List<TapAchievementBean>, TapError> action)
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(TapAchievementConstants.TapAchievementService)
                .Method("getLocalAllAchievementList")
                .Callback(true)
                .OnceTime(true)
                .CommandBuilder(), result => { HandlerAchievementResult(action, result); });
        }

        public void GetLocalUserAchievementList(Action<List<TapAchievementBean>, TapError> action)
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(TapAchievementConstants.TapAchievementService)
                .Method("getLocalUserAchievementList")
                .Callback(true)
                .OnceTime(true)
                .CommandBuilder(), result => { HandlerAchievementResult(action, result); });
        }

        public void FetchUserAchievementList(Action<List<TapAchievementBean>, TapError> action)
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(TapAchievementConstants.TapAchievementService)
                .Method("fetchUserAchievementList")
                .Callback(true)
                .OnceTime(true)
                .CommandBuilder(), result => { HandlerAchievementResult(action, result); });
        }

        public async Task<List<TapAchievementBean>> FetchAllAchievementList()
        {
            var tcs = new TaskCompletionSource<List<TapAchievementBean>>();
            FetchAllAchievementList((list, error) =>
            {
                if (error != null)
                {
                    tcs.TrySetException(new TapException(error.code, error.errorDescription));
                }
                else if (list != null)
                {
                    tcs.TrySetResult(list);
                }
            });
            return await tcs.Task;
        }

        public async Task<List<TapAchievementBean>> GetLocalAllAchievementList()
        {
            var tcs = new TaskCompletionSource<List<TapAchievementBean>>();
            GetLocalAllAchievementList((list, error) =>
            {
                if (error != null)
                {
                    tcs.TrySetException(new TapException(error.code, error.errorDescription));
                }
                else if (list != null)
                {
                    tcs.TrySetResult(list);
                }
            });
            return await tcs.Task;
        }

        public async Task<List<TapAchievementBean>> GetLocalUserAchievementList()
        {
            var tcs = new TaskCompletionSource<List<TapAchievementBean>>();
            GetLocalUserAchievementList((list, error) =>
            {
                if (error != null)
                {
                    tcs.TrySetException(new TapException(error.code, error.errorDescription));
                }
                else if (list != null)
                {
                    tcs.TrySetResult(list);
                }
            });
            return await tcs.Task;
        }

        public async Task<List<TapAchievementBean>> FetchUserAchievementList()
        {
            var tcs = new TaskCompletionSource<List<TapAchievementBean>>();
            FetchUserAchievementList((list, error) =>
            {
                if (error != null)
                {
                    tcs.TrySetException(new TapException(error.code, error.errorDescription));
                }
                else if (list != null)
                {
                    tcs.TrySetResult(list);
                }
            });
            return await tcs.Task;
        }

        public void Reach(string id)
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(TapAchievementConstants.TapAchievementService)
                .Method("reach")
                .Args("displayId", id)
                .CommandBuilder());
        }

        public void GrowSteps(string id, int step)
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(TapAchievementConstants.TapAchievementService)
                .Method("growSteps")
                .Args("displayId", id)
                .Args("growStep", step)
                .CommandBuilder());
        }

        public void MakeSteps(string id, int step)
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(TapAchievementConstants.TapAchievementService)
                .Method("makeSteps")
                .Args("displayId", id)
                .Args("numStep", step)
                .CommandBuilder());
        }

        public void ShowAchievementPage()
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(TapAchievementConstants.TapAchievementService)
                .Method("showAchievementPage")
                .CommandBuilder()
            );
        }

        public void SetShowToast(bool showToast)
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(TapAchievementConstants.TapAchievementService)
                .Method("setShowToast")
                .Args("showToast", showToast)
                .CommandBuilder());
        }
        
        public void SetApplicationName(string name)
        {
            throw new NotImplementedException("TapAchievement::SetApplicationName Only Support On Standalone");
        }
        
        public void SetApplicationIcon(Texture2D iconTexuture)
        {
            throw new NotImplementedException("TapAchievement::SetApplicationIcon Only Support On Standalone");
        }

        private static bool CheckResult(Result result)
        {
            if (result.code != Result.RESULT_SUCCESS)
            {
                return false;
            }

            return !string.IsNullOrEmpty(result.content);
        }

        private static void HandlerAchievementResult(Action<List<TapAchievementBean>, TapError> action, Result result)
        {
            if (!CheckResult(result))
            {
                action(null, new TapError(80080, "Bridge execute Achievement Error"));
                return;
            }

            var listWrapperBean = new AchievementListWrapperBean(result.content);
            action(listWrapperBean.list, listWrapperBean.error);
        }
    }
}