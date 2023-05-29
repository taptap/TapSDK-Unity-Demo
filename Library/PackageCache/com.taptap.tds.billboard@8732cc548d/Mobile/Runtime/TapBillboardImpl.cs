using System;
using System.Collections.Generic;
using System.Linq;
using TapTap.Common;
using LC.Newtonsoft.Json;

namespace TapTap.Billboard.Mobile
{
    public class TapBillboardImpl : ITapBillboard
    {

        private TapBillboardImpl()
        {
            EngineBridge.GetInstance()
                .Register(TapBillboardConstants.TapBillboardClz, TapBillboardConstants.TapBillboardImpl);
        }

        private class PlatformNotSupportedException : Exception
        {
            public PlatformNotSupportedException() : base()
            {

            }
        }

        private static volatile TapBillboardImpl _sInstance;

        private static readonly object Locker = new object();

        public static TapBillboardImpl GetInstance()
        {
            lock (Locker)
            {
                if (_sInstance == null)
                {
                    _sInstance = new TapBillboardImpl();
                }
            }

            return _sInstance;
        }

        public void Init(TapConfig tapConfig)
        {
            Dictionary<string, object> config = tapConfig.ToDict();
            if (TapBillboardConfig.Config != null) {
                config["billboardConfig"] = TapBillboardConfig.Config.ToDict();
            }
            EngineBridge.GetInstance().CallHandler(
                new Command.Builder()
                    .Service(TapBillboardConstants.TapBillboardService)
                    .Method("init")
                    .Args("initWithConfig", JsonConvert.SerializeObject(config))
                    .CommandBuilder());
        }

        public void OpenPanel(Action<bool, TapError> action) {
            EngineBridge.GetInstance().CallHandler(
               new Command.Builder()
               .Service(TapBillboardConstants.TapBillboardService)
               .Method("openPanel")
               .Callback(true)
               .OnceTime(true)
               .CommandBuilder(), result => { HandlerOpenPanelResult(action, result); });           
        }

        public void OpenPanel(Action<bool, TapError> action, Action closeAction) {
            EngineBridge.GetInstance().CallHandler(
              new Command.Builder()
              .Service(TapBillboardConstants.TapBillboardService)
              .Method("openPanel")
              .Callback(true)
              .OnceTime(false)
              .CommandBuilder(), result => { HandlerOpenPanelResultWithUserInteraction(action, closeAction, result); });
        }

        public void OpenSplashPanel(Action<bool, TapError> action, Action closeAction)
        {
            EngineBridge.GetInstance().CallHandler(
             new Command.Builder()
             .Service(TapBillboardConstants.TapBillboardService)
             .Method("openSplashPanel")
             .Callback(true)
             .OnceTime(true)
             .CommandBuilder(), result => { HandlerOpenPanelResultWithUserInteraction(action, closeAction, result); });
        }

        public void CloseSplashPanel()
        {
            EngineBridge.GetInstance().CallHandler(
                new Command.Builder()
                    .Service(TapBillboardConstants.TapBillboardService)
                    .Method("closeSplashPanel")
                    .CommandBuilder());
        }

        public void QueryBadgeDetails(Action<BadgeDetails, TapError> action)
        {
            EngineBridge.GetInstance().CallHandler(
                new Command.Builder()
                .Service(TapBillboardConstants.TapBillboardService)
                .Method("queryBadgeDetails")
                .Callback(true)
                .OnceTime(true)
                .CommandBuilder(), result => { HandlerBadgeDetailsResult(action, result); });
        }

        public void StartFetchMarqueeData()
        {
            EngineBridge.GetInstance().CallHandler(
               new Command.Builder()
                   .Service(TapBillboardConstants.TapBillboardService)
                   .Method("startFetchMarqueeData")
                   .CommandBuilder());
        }

        public void StopFetchMarqueeData(bool closeNow)
        {
            EngineBridge.GetInstance().CallHandler(
               new Command.Builder()
                   .Service(TapBillboardConstants.TapBillboardService)
                   .Method("stopFetchMarqueeData")
                   .Args("stopFetchMarqueeData", closeNow)
                   .CommandBuilder());
        }


        public void RegisterCustomLinkListener(Action<String> action) {
            EngineBridge.GetInstance().CallHandler(
                new Command.Builder()
                .Service(TapBillboardConstants.TapBillboardService)
                .Method("registerCustomLinkListener")
                .Callback(true)
                .OnceTime(false)
                .CommandBuilder(), result => { HandlerRegisterResult(action, result); });
        }

    
        public void UnRegisterCustomLinkListener(Action<String> action) {
            EngineBridge.GetInstance().CallHandler(
                new Command.Builder()
                .Service(TapBillboardConstants.TapBillboardService)
                .Method("unRegisterCustomLinkListener")
                .Callback(true)
                .OnceTime(true)
                .CommandBuilder());
        }

        public void RegisterOutputStateListener(OutputStateListener listener)
        {
            EngineBridge.GetInstance().CallHandler(
                new Command.Builder()
                .Service(TapBillboardConstants.TapBillboardService)
                .Method("registerOutputStateListener")
                .Callback(true)
                .OnceTime(false)
                .CommandBuilder(), result => { HandleOutputState(listener,result); });
        }

        public void UnRegisterOutputStateListener()
        {
            EngineBridge.GetInstance().CallHandler(
                new Command.Builder()
                .Service(TapBillboardConstants.TapBillboardService)
                .Method("unRegisterOutputStateListener")
                .CommandBuilder());
        }

        private static bool CheckResult(Result result)
        {
            if (result.code != Result.RESULT_SUCCESS)
            {
                return false;
            }

            return !string.IsNullOrEmpty(result.content);
        }

        private static void HandlerOpenPanelResult(Action<bool, TapError> action, Result result) {
            if (action == null) return;
            if (!CheckResult(result))
            {
                action(false, new TapError(19999, "Bridge execute Billboard Error"));
                return;
            }       

            var openPanelResultWrapper = new OpenPanelResultWrapper(result.content);
            if (openPanelResultWrapper.error != null)
            {
                action(false, openPanelResultWrapper.error);
            } else {
                action(openPanelResultWrapper.openResult, null);
            }
        }

        private static void HandlerOpenPanelResultWithUserInteraction(Action<bool, TapError> action, Action closeAction, Result result)
        {
            if (!CheckResult(result))
            {
                if(action != null){
                    action(false, new TapError(19999, "Bridge execute Billboard Error"));
                }
                return;
            }
            var openPanelResultWrapper = new OpenPanelResultWrapper(result.content);
            if (openPanelResultWrapper.userInteractionType != -1) {
                if(closeAction != null){
                    closeAction();
                }
            }
            else if (openPanelResultWrapper.error != null)
            {
                if(action != null){
                    action(false, openPanelResultWrapper.error);
                }
            }
            else
            {
                if(action != null){
                    action(openPanelResultWrapper.openResult, null);
                }
            }
        }

        private static void HandlerBadgeDetailsResult(Action<BadgeDetails, TapError> action, Result result)
        {
            if (action == null) return;
            if (!CheckResult(result))
            {
                action(null, new TapError(19999, "Bridge execute Billboard Error"));
                return;
            }

            var badgeDetailsWrapper = new BadgeDetailsWrapper(result.content);
            if (badgeDetailsWrapper.error != null)
            {
                action(null, badgeDetailsWrapper.error);
            }
            else
            {
                if (badgeDetailsWrapper.badgeDetails != null)
                {
                    action(badgeDetailsWrapper.badgeDetails, null);
                }
                else
                {
                    action(null, null);
                }
            }
        }
  
        private static void HandlerRegisterResult(Action<string> action, Result result)
        {
            if (action == null) return;
            if (!CheckResult(result))
            {
                action("");
                return;
            }
            var customLink = "";
            if (result != null && result.content != null && result.content.Length > 0)
            {
                customLink = result.content;
            }
            action(customLink);
        }

        private static void HandleOutputState(OutputStateListener listener,Result result)
        {
            if (listener == null) return;
            if (!CheckResult(result)) return;
            var resutlWrapper = new OutputStateResultWrapper(result.content);
            if (resutlWrapper.error != null) return;
            if (resutlWrapper.IsVoiceState())
            {
                if (resutlWrapper.IsPlaying())
                {
                    listener.OnPlayVoice();
                }
                else
                {
                    listener.OnStopVoice();
                }
            }

        }
    }
}