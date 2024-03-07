using System;
using System.Collections.Generic;
using TapTap.Common;
using TapTap.Common.Internal.Utils;

using ITapBillboard = TapTap.Billboard.Internal.Platform.ITapBillboard;

namespace TapTap.Billboard {
    public static class TapBillboard {
        static readonly ITapBillboard billboard;

        private static readonly List<MarqueeListener> marqueeListeners = new List<MarqueeListener>();

        static TapBillboard() {
            if (BridgeUtils.IsSupportMobilePlatform) {
                billboard = BridgeUtils.CreateBridgeImplementation(typeof(ITapBillboard), "TapTap.Billboard")
                    as ITapBillboard;
            } else {
                billboard = BridgeUtils.CreateBridgeImplementation(typeof(ITapBillboard), string.Empty)
                    as ITapBillboard;
            }
        }

        public static void Init(TapConfig config) {
            if (config.RegionType == RegionType.IO && string.IsNullOrEmpty(TapBillboardConfig.Config.ServerUrl)) {
                // 缺省值
                TapBillboardConfig.Config.ServerUrl = $"https://{config.ClientID.Substring(0, 8)}.billboard.ap-sg.tapapis.com";
            }
            if (string.IsNullOrEmpty(TapBillboardConfig.Config.ServerUrl)) {
                throw new ArgumentNullException("billboardServerUrl", "Billboard server url is NULL.");
            }
            billboard?.Init(config);
        }

        public static void QueryBadgeDetails(Action<BadgeDetails, TapError> action) {
            billboard?.QueryBadgeDetails(action);
        }

        public static void OpenPanel(Action<bool, TapError> action) {
            billboard?.OpenPanel(action);
        }

        public static void OpenPanel(Action<bool, TapError> action, Action closeAction) {
            billboard?.OpenPanel(action, closeAction);
        }

        public static void ClosePanel() {
            billboard?.ClosePanel();
        }

        public static void RegisterCustomLinkListener(Action<string> action) {
            billboard?.RegisterCustomLinkListener(action);
        }

        public static void UnRegisterCustomLinkListener(Action<string> action) {
            billboard?.UnRegisterCustomLinkListener(action);
        }

        public static void OpenSplashPanel(Action<bool, TapError> action, Action closeAction) {
            billboard?.OpenSplashPanel(action, closeAction);
        }

        public static void CloseSplashPanel() {
            billboard?.CloseSplashPanel();
        }

        public static void StartFetchMarqueeData() {
            billboard?.StartFetchMarqueeData();
        }

        public static void StopFetchMarqueeData(bool closeNow) {
            billboard?.StopFetchMarqueeData(closeNow);
        }

        public static void RegisterOutputStateListener(OutputStateListener listener) {
            billboard?.RegisterOutputStateListener(listener);
        }

        public static void UnregisterOutputStateListener() {
            billboard?.UnRegisterOutputStateListener();
        }

        public static void RegisterMarqueeListener(MarqueeListener listener) {
            if (listener == null) {
                return;
            }

            marqueeListeners.Add(listener);
        }

        public static void UnregisterMarqueeListener(MarqueeListener listener) {
            if (listener == null) {
                return;
            }

            marqueeListeners.Remove(listener);
        }

        public static void UnregisterAllMarqueeListeners() {
            marqueeListeners.Clear();
        }

        public static void OnMarqueeShow(Marquee marquee, MarqueeConfig marqueeConfig) {
            foreach (MarqueeListener listener in marqueeListeners) {
                listener.OnShow(marquee, marqueeConfig);
            }
        }

        public static void OnMarqueeClose() {
            foreach (MarqueeListener listener in marqueeListeners) {
                listener.OnClose();
            }
        }
    }
}
