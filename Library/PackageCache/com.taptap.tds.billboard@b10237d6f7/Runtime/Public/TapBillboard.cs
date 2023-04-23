using System;
using System.Linq;
using TapTap.Common;

using ITapBillboard = TapTap.Billboard.Internal.Platform.ITapBillboard;

namespace TapTap.Billboard {
    public static class TapBillboard {
        static ITapBillboard billboard;

        static TapBillboard() {
            Type interfaceType = typeof(ITapBillboard);
            Type platformBillboardType = AppDomain.CurrentDomain.GetAssemblies()
                .SelectMany(assembly => assembly.GetTypes())
                .FirstOrDefault(clazz => interfaceType.IsAssignableFrom(clazz) && clazz.IsClass);
            if (platformBillboardType != null) {
                billboard = Activator.CreateInstance(platformBillboardType) as ITapBillboard;
            } else {
                TapLogger.Error("No class implements ITapBillboard.");
            }
        }

        public static void Init(TapConfig config) {
            TapLogger.Debug($"Billboard init");
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
    }
}
