using System;
using System.Collections.Generic;
using System.IO;
using System.Threading.Tasks;
using com.taptap.tapsdk.bindings.csharp;
using UnityEngine;
using DeviceType = com.taptap.tapsdk.bindings.csharp.DeviceType;

namespace TapTap.Common.Internal {
    public static class TapDuration {
        
        private static bool isRndEnvironment;
        private static bool initialized;
        private static UnityTDSUser unityTdsUser;
        private static BridgeUser bridgeUser;

        private static string deviceId;
        private static int? deviceType;

        public static bool isCn;

        private static string clientId;
        
        public static void RndInit() {
            EventManager.AddListener(EventConst.SetRND, (_) => {
                isRndEnvironment = true;
                TapLogger.Debug($"[TapSDK::Duration] 设置 RND 环境 Application.identifier: {Application.identifier} Application.productName: {Application.productName} Application.installerName: {Application.installerName}");
            });
        }
        
        public static void Init(string clientId, bool isCn) {
            deviceType = null;
            TapDuration.clientId = clientId;
            if (!TapCommon.DisableDurationStatistics && !initialized) {
                deviceId = TapCommon.DeiveId;
                deviceType = TapCommon.DeviceType;
                TapDuration.isCn = isCn;
                DurationInit();
                initialized = true;
            }   
        }

        public static void TapLoginInfoInit(string platform, string userId) {
            // 已经登录内建账号了,则不再监听 Tap 登录结果
            if (platform.Equals(UnityTDSUser.TAP_AUTH_CHANNEL) && unityTdsUser.TryGetChannelValue(UnityTDSUser.TDS_CHANNEL, out string value) &&!string.IsNullOrEmpty(value)) return;
            InternalLogin(platform, userId);
            TapLogger.Debug($"[TapSDK::Duration] TapLoginInfoInit channel: {platform} userId: {userId} user_id: {unityTdsUser.GetUserInfo()} contain_tap_info: {unityTdsUser.ContainTapInfo()}");
        }
        
        private static void DurationInit() {
            try {
                if (SupportDurationStatistics()) {
                    DurationBindingInit();
                    TapLogger.Debug($"[TapSDK::Duration] Init Success!");
                }
                   
            }
            catch (Exception e) {
                while (e.InnerException != null) {
                    e = e.InnerException;
                }
                TapLogger.Error("[TapSDK::Duration] Init Error Won't statistic duration info! Error info: " + e.ToString() + "\n" + e.StackTrace);
            }
        }
        
        public static bool SupportDurationStatistics() {
    #if UNITY_EDITOR
            return false;
    #elif UNITY_STANDALONE
            return false;
    #else
            return true;
    #endif
        }

        private static async void DurationBindingInit() {
            BindGameConfig();
            BindUserInfo();
            BindWindowChange();
        }

        private static void BindGameConfig() {
            var bridgeConfig = new BridgeConfig();
            var dir = new DirectoryInfo(Path.Combine(Application.persistentDataPath, "tapsdk"));
            if (!dir.Exists)
                dir.Create();
            bridgeConfig.cache_dir = dir.FullName;
            bridgeConfig.ca_dir = "";
            bridgeConfig.device_id = string.IsNullOrEmpty(deviceId) ? "unity_device_id_error" : deviceId;
            bridgeConfig.enable_duration_statistics = true;
            bridgeConfig.device_type = deviceType.Value;
            bridgeConfig.region = isRndEnvironment ? (int)Region.RND : (isCn ? (int)Region.CN : (int)Region.Global);
            bridgeConfig.model = SystemInfo.deviceModel;
        #if UNITY_ANDROID
            bridgeConfig.platform = "android";
        #elif UNITY_IOS
            bridgeConfig.platform = "ios";
        #elif UNITY_STANDALONE_WIN
            bridgeConfig.platform = "windows";
        #endif
            bridgeConfig.engine = $@"unity";
            bridgeConfig.sdk_version = TapCommon.SDKVersion;
            Bindings.InitSDK(bridgeConfig);
            // Set Game
            var bridgeGame = new BridgeGame();
            bridgeGame.client_id = clientId;
            bridgeGame.identify = GetIdentifier();
            Bindings.SetCurrentGame(bridgeGame);
            TapLogger.Debug($"[TapSDK::Duration] cache_dir: {bridgeConfig.cache_dir} device_id: {bridgeConfig.device_id} " +
                                          $"device_type: {bridgeConfig.device_type} region: {bridgeConfig.region} model: {bridgeConfig.model} " +
                                          $"platform: {bridgeConfig.platform} engine: {bridgeConfig.engine} sdk_version: {bridgeConfig.sdk_version} " +
                                          $"client_id: {bridgeGame.client_id} identify: {bridgeGame.identify}");
        }

        private static string GetIdentifier() {
            var result = Application.identifier;
            if (string.IsNullOrEmpty(result)) {
                result = Application.productName;
            }
            if (string.IsNullOrEmpty(result)) {
                result = Application.installerName;
            }
            if (string.IsNullOrEmpty(result)) {
                result = "UNITY_NULL_IDENTIFIER";
            }

            return result;
        }

        private static void InternalLogin(string platform, string id) {
            bridgeUser = new BridgeUser();
            if (unityTdsUser.TryGetChannelValue(platform, out string value) && value.Equals(id)) {
                return;
            }
            unityTdsUser.UpdateUserInfo(platform, id);
            bridgeUser.user_id = unityTdsUser.GetUserInfo();
            bridgeUser.contain_tap_info = unityTdsUser.ContainTapInfo();
            if (string.IsNullOrEmpty(bridgeUser.user_id)){
                return;
            }
            Bindings.SetCurrentUser(bridgeUser);
        }
        
        private static void BindUserInfo() {
            unityTdsUser = new UnityTDSUser();
            EventManager.AddListener(EventConst.OnTapLogin, (loginParameter) => {
                var kv = loginParameter is KeyValuePair<string, string> ? (KeyValuePair<string, string>)loginParameter : default;
                if (!string.IsNullOrEmpty(kv.Key)) {
                    // 已经登录内建账号了,则不再监听 Tap 登录结果
                    if (kv.Key.Equals(UnityTDSUser.TAP_AUTH_CHANNEL) && unityTdsUser.TryGetChannelValue(UnityTDSUser.TDS_CHANNEL, out string value) &&!string.IsNullOrEmpty(value)) return;
                    InternalLogin(kv.Key, kv.Value);
                    TapLogger.Debug($"[TapSDK::Duration] OnTapLogin. channel: {kv.Key} userId: {kv.Value} user_id: {unityTdsUser.GetUserInfo()} contain_tap_info: {unityTdsUser.ContainTapInfo()}");
                }
            });
            EventManager.AddListener(EventConst.OnTapLogout, (logoutChannel) => {
                if (logoutChannel is string channel && !string.IsNullOrEmpty(channel)) {
                    if (!unityTdsUser.TryGetChannelValue(channel, out _)) return;
                    unityTdsUser.Logout();
                    Bindings.SetCurrentUser(null);
                    TapLogger.Debug($"[TapSDK::Duration] OnTapLogout channel: {channel} {unityTdsUser.GetUserInfo()} contain_tap_info: {unityTdsUser.ContainTapInfo()}");
                }
            });
            
            EventManager.AddListener(EventConst.OnBind, (kv) => {
                if (!(kv is KeyValuePair<string, string>)) return;
                var bindInfo = (KeyValuePair<string, string>)kv;
                if (!string.IsNullOrEmpty(bindInfo.Key)) {
                    InternalLogin(bindInfo.Key, bindInfo.Value);
                    TapLogger.Debug($"[TapSDK::Duration] OnBind. channel: {bindInfo.Key} userId: {bindInfo.Value} user_id: {unityTdsUser.GetUserInfo()} contain_tap_info: {unityTdsUser.ContainTapInfo()}");
                }
            });
            
            EventManager.AddListener(EventConst.OnUnbind, (unbindChannel) => {
                if (unbindChannel is string channel && !string.IsNullOrEmpty(channel)) {
                    bridgeUser = new BridgeUser();
                    if (!unityTdsUser.TryGetChannelValue(channel, out _)) return;
                    unityTdsUser.UpdateUserInfo(channel, null);
                    bridgeUser.user_id = unityTdsUser.GetUserInfo();
                    bridgeUser.contain_tap_info = unityTdsUser.ContainTapInfo();
                    if (string.IsNullOrEmpty(bridgeUser.user_id))
                        return;
                    Bindings.SetCurrentUser(bridgeUser);
                    TapLogger.Debug($"[TapSDK::Duration] OnUnbind. channel: {channel} user_id: {unityTdsUser.GetUserInfo()} contain_tap_info: {unityTdsUser.ContainTapInfo()}");
                }
            });
        }
        
        private static void BindWindowChange() {
            EventManager.AddListener(EventConst.OnApplicationPause, (isPause) => {
                var isPauseBool = (bool)isPause;
                if (isPauseBool) {
                    Bindings.OnWindowBackground();
                    TapLogger.Debug($"[TapSDK::Duration] OnWindowBackground");
                }
                else {
                    Bindings.OnWindowForeground();
                    TapLogger.Debug($"[TapSDK::Duration] OnWindowBackground");
                }
            });
        }
    }
}