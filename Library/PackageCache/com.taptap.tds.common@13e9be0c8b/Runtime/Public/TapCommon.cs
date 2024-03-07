using System;
using System.Threading.Tasks;
using com.taptap.tapsdk.bindings.csharp;
using TapTap.Common.Internal;
using TapTap.UI;
using UnityEngine;

namespace TapTap.Common {
    public class TapCommon {
        public static readonly string SDKVersion = "3.28.0";
        public static readonly int SDKVersionCode = 32800001;

        private static TapConfig config;

        public static TapConfig Config => config;

        private static ITapCommonPlatform platformWrapper;

        private static bool disableDurationStatistics;

        public static bool DisableDurationStatistics {
            get => disableDurationStatistics;
            set {
                disableDurationStatistics = value;
            }
        }

        static TapCommon() {
            platformWrapper = PlatformTypeUtils.CreatePlatformImplementationObject(typeof(ITapCommonPlatform),
                "TapTap.Common") as ITapCommonPlatform;
        }

        public static void Init(TapConfig config) {
            if (config == null)
                throw new ArgumentException("[TapSDK] config is null!");
            if (string.IsNullOrEmpty(config.ClientID))
                throw new ArgumentException("[TapSDK] clientID is null or empty!");
            if (string.IsNullOrEmpty(config.ClientToken))
                throw new ArgumentException("[TapSDK] clientToken is null or empty!");
            TapCommon.config = config;
            platformWrapper?.Init(config);
            TapDuration.Init(config.ClientID, config.RegionType == RegionType.CN);
            SetXua();
        }

        public static string DeiveId {
            get {
                TapLogger.Debug($"Device Id: {platformWrapper?.DeviceId}");
                return platformWrapper?.DeviceId;
            }
        }
        public static int DeviceType {
            get {
                TapLogger.Debug($"Device Type: {platformWrapper.DeviceType}");
                return platformWrapper.DeviceType;
            }
        }

        public static void GetRegionCode(Action<bool> callback) {
            platformWrapper?.GetRegionCode(callback);
        }

        public static void IsTapTapInstalled(Action<bool> callback) {
            platformWrapper?.IsTapTapInstalled(callback);
        }

        public static void IsTapTapGlobalInstalled(Action<bool> callback) {
            platformWrapper?.IsTapTapGlobalInstalled(callback);
        }

        public static void UpdateGameInTapTap(string appId, Action<bool> callback) {
            platformWrapper?.UpdateGameInTapTap(appId, callback);
        }

        public static void UpdateGameInTapGlobal(string appId, Action<bool> callback) {
            platformWrapper?.UpdateGameInTapGlobal(appId, callback);
        }

        public static void OpenReviewInTapTap(string appId, Action<bool> callback) {
            platformWrapper?.OpenReviewInTapTap(appId, callback);
        }

        public static void OpenReviewInTapGlobal(string appId, Action<bool> callback) {
            platformWrapper?.OpenReviewInTapGlobal(appId, callback);
        }

        public static void SetXua() {
            platformWrapper?.SetXua();
        }

        public static void SetLanguage(TapLanguage language) {
            TapLocalizeManager.SetCurrentLanguage(language);
            platformWrapper?.SetLanguage(language);
        }

        public static void RegisterProperties(string key, ITapPropertiesProxy proxy) {
            platformWrapper?.RegisterProperties(key, proxy);
        }

        public static void AddHost(string host, string replaceHost) {
            platformWrapper?.AddHost(host, replaceHost);
        }

        public static void UseNativeDataInCore(bool enable) {
            platformWrapper?.UseNativeDataInCore(enable);
        }

        public static Task<bool> UpdateGameAndFailToWebInTapTap(string appId) {
            return platformWrapper?.UpdateGameAndFailToWebInTapTap(appId);
        }

        public static Task<bool> UpdateGameAndFailToWebInTapGlobal(string appId) {
            return platformWrapper?.UpdateGameAndFailToWebInTapGlobal(appId);
        }

        public static Task<bool> UpdateGameAndFailToWebInTapTap(string appId, string webUrl) {
            return platformWrapper?.UpdateGameAndFailToWebInTapTap(appId, webUrl);
        }

        public static Task<bool> UpdateGameAndFailToWebInTapGlobal(string appId, string webUrl) {
            return platformWrapper?.UpdateGameAndFailToWebInTapGlobal(appId, webUrl);
        }

        public static Task<bool> OpenWebDownloadUrlOfTapTap(string appId) {
            return platformWrapper?.OpenWebDownloadUrlOfTapTap(appId);
        }

        public static Task<bool> OpenWebDownloadUrlOfTapGlobal(string appId) {
            return platformWrapper?.OpenWebDownloadUrlOfTapGlobal(appId);
        }

        public static Task<bool> OpenWebDownloadUrl(string url) {
            return platformWrapper?.OpenWebDownloadUrl(url);
        }

        public static void SetDurationStatisticsEnabled(bool enable) {
            platformWrapper?.SetDurationStatisticsEnabled(enable);
        }
    }
}
