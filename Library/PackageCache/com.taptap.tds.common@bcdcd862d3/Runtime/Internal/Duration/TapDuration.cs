using System;
using System.Collections.Generic;
using System.IO;
using com.taptap.tapsdk.bindings.csharp;
using UnityEngine;
using DeviceType = com.taptap.tapsdk.bindings.csharp.DeviceType;

namespace TapTap.Common.Internal {
    internal static class TapDuration {
        
        private static bool isRndEnvironment;
        static TapDuration() {
            EventManager.AddListener(EventConst.SetRND, (_) => isRndEnvironment = true);
        }
        internal static void Init(TapConfig config) {
            if (TapCommon.DisableDurationStatistics == false && !isRndEnvironment) {
                DurationInit();
            }
        }
        
        
        private static void DurationInit() {
            try {
                if (SupportDurationStatistics())
                    DurationBindingInit();
            }
            catch (Exception e) {
                TapLogger.Error("[Duration] DurationInit Error: " + e.ToString() + "\n" + e.StackTrace);
            }
            
        }
        
        private static bool SupportDurationStatistics() {
#if ((UNITY_ANDROID || UNITY_IOS ) && !UNITY_EDITOR)
            return true;
#endif
            return false;
        }

        private static void DurationBindingInit() {
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
            bridgeConfig.device_id = SystemInfo.deviceUniqueIdentifier;
            bridgeConfig.enable_duration_statistics = true;
            bridgeConfig.device_type = (int)DeviceType.Local;
            Bindings.InitSDK(bridgeConfig);
            // Set Game
            var bridgeGame = new BridgeGame();
            bridgeGame.client_id = TapCommon.Config.ClientID;
            bridgeGame.identify = Application.identifier;
            Bindings.SetCurrentGame(bridgeGame);
        }

        private static UnityTDSUser unityTdsUser;
        private static BridgeUser bridgeUser;
        private static void BindUserInfo() {
            unityTdsUser = new UnityTDSUser();
            
            EventManager.AddListener(EventConst.OnTapLogin, (loginParameter) => {
                var kv = loginParameter is KeyValuePair<string, string> ? (KeyValuePair<string, string>)loginParameter : default;
                if (!string.IsNullOrEmpty(kv.Key)) {
                    if (unityTdsUser.IsEmpty) {
                        bridgeUser = new BridgeUser();
                        Bindings.SetCurrentUser(bridgeUser);
                    }
                    unityTdsUser.UpdateUserInfo(kv.Key, kv.Value);
                    bridgeUser.user_id = unityTdsUser.GetUserId();
                    bridgeUser.contain_tap_info = unityTdsUser.ContainTapInfo();
                }
                TapLogger.Debug("[Duration] Update UserId: {0} Bindings.CurrentUser Is Null: {1}", bridgeUser.user_id, bridgeUser == null);
            });
            EventManager.AddListener(EventConst.OnTapLogout, (logoutChannel) => {
                if (logoutChannel is string channel && !string.IsNullOrEmpty(channel)) {
                    unityTdsUser.Logout();
                    Bindings.SetCurrentUser(null);
                }
                TapLogger.Debug("[Duration] Update UserId: {0} Bindings.CurrentUser Is Null: {1}", unityTdsUser.ToString(), bridgeUser == null);
            });
            
            EventManager.AddListener(EventConst.OnBind, (kv) => {
                if (!(kv is KeyValuePair<string, string>)) return;
                if (unityTdsUser.IsEmpty) return;
                var bindInfo = (KeyValuePair<string, string>)kv;
                if (!string.IsNullOrEmpty(bindInfo.Key)) {
                    unityTdsUser.UpdateUserInfo(bindInfo.Key, bindInfo.Value);
                    bridgeUser.user_id = unityTdsUser.GetUserId();
                    bridgeUser.contain_tap_info = unityTdsUser.ContainTapInfo();
                }
                TapLogger.Debug("[Duration] Update UserId: {0}", bridgeUser.user_id);
            });
        }
        private static void BindWindowChange() {
            EventManager.AddListener(EventConst.OnApplicationPause, (isPause) => {
                var isPauseBool = (bool)isPause;
                if (isPauseBool) {
                    Bindings.OnWindowBackground();
                }
                else {
                    Bindings.OnWindowForeground();
                }
            });
        }
    }
}