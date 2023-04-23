using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using TapTap.Common;

namespace TapTap.Billboard.Mobile
{
    public interface ITapBillboard
    {
        void Init(TapConfig tapConfig);

        void QueryBadgeDetails(Action<BadgeDetails, TapError> action);

        void OpenPanel(Action<Boolean, TapError> action);

        void OpenSplashPanel(Action<bool, TapError> action, Action closeAction);

        void CloseSplashPanel();

        void StartFetchMarqueeData();

        void StopFetchMarqueeData(bool closeNow);

        void RegisterCustomLinkListener(Action<String> action);

        void UnRegisterCustomLinkListener(Action<String> action);

        void RegisterOutputStateListener(OutputStateListener listener);

        void UnRegisterOutputStateListener();
    }

    public static class TapBillboardConstants
    {
        public static readonly string TapBillboardService = "TDSBillboardService";

        public static readonly string TapBillboardClz = "com.tapsdk.billboard.wrapper.TDSBillboardService";

        public static readonly string TapBillboardImpl = "com.tapsdk.billboard.wrapper.TDSBillboardServiceImpl";
    }
}