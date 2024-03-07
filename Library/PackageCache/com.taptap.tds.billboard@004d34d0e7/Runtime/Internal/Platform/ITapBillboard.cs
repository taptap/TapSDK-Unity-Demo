using System;
using TapTap.Common;

namespace TapTap.Billboard.Internal.Platform {
    public interface ITapBillboard {
        void Init(TapConfig config);

        void QueryBadgeDetails(Action<BadgeDetails, TapError> action);

        void OpenPanel(Action<bool, TapError> action);

        void OpenPanel(Action<bool, TapError> action, Action closeAction);

        void ClosePanel();

        void RegisterCustomLinkListener(Action<string> action);

        void UnRegisterCustomLinkListener(Action<string> action);

        /// 二期
        void OpenSplashPanel(Action<bool, TapError> action, Action closeAction);

        void CloseSplashPanel();

        void StartFetchMarqueeData();

        void StopFetchMarqueeData(bool closeNow);

        void RegisterOutputStateListener(OutputStateListener listener);

        void UnRegisterOutputStateListener();
    }
}
