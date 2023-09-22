using System;
using TapTap.Common;

#if (UNITY_ANDROID || UNITY_IOS) && !UNITY_EDITOR

namespace TapTap.Billboard.Mobile
{
    public class TapBillboardMobile : Internal.Platform.ITapBillboard
    {
        public void Init(TapConfig config)
        {
            TapBillboardImpl.GetInstance().Init(config);
        }

        public void QueryBadgeDetails(Action<BadgeDetails, TapError> action)
        {
            TapBillboardImpl.GetInstance().QueryBadgeDetails(action);
        }

        public void OpenPanel(Action<bool, TapError> action)
        {
            TapBillboardImpl.GetInstance().OpenPanel(action);
        }

        public void OpenPanel(Action<bool, TapError> action, Action closeAction) {
            TapBillboardImpl.GetInstance().OpenPanel(action, closeAction);
        }

        public void RegisterCustomLinkListener(Action<string> action) {
            TapBillboardImpl.GetInstance().RegisterCustomLinkListener(action);
        }

        public void UnRegisterCustomLinkListener(Action<string> action) {
            TapBillboardImpl.GetInstance().UnRegisterCustomLinkListener(action);
        }

        public void OpenSplashPanel(Action<bool, TapError> action, Action closeAction) {
            TapBillboardImpl.GetInstance().OpenSplashPanel(action, closeAction);
        }

        public void CloseSplashPanel() {
            TapBillboardImpl.GetInstance().CloseSplashPanel();
        }

        public void StartFetchMarqueeData() {
            TapBillboardImpl.GetInstance().StartFetchMarqueeData();
        }

        public void StopFetchMarqueeData(bool closeNow) {
            TapBillboardImpl.GetInstance().StopFetchMarqueeData(closeNow);
        }

        public void RegisterOutputStateListener(OutputStateListener listener) {
            TapBillboardImpl.GetInstance().RegisterOutputStateListener(listener);
        }

        public void UnRegisterOutputStateListener() {
            TapBillboardImpl.GetInstance().UnRegisterOutputStateListener();
        }
    }
}

#endif