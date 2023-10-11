using System.Threading.Tasks;
using System.Collections.Generic;
using LeanCloud.Common;
using System.Collections.ObjectModel;
using System.Linq;
using TapTap.Common;
using TapTap.Login;

namespace TapTap.Bootstrap.@internal
{
    public class TDSUserEventTrigger
    {
        private static bool tdsUserLogin;

        public static void TriggerLoginInfo(TDSUser tdsUser) {
            if (!tdsUserLogin && tdsUser != null && !string.IsNullOrEmpty(tdsUser.ObjectId)) {
                TriggerLoginInfo(UnityTDSUser.TDS_CHANNEL, tdsUser.ObjectId);
                tdsUserLogin = true;
                if (tdsUser?.AuthData != null && tdsUser.AuthData.ContainsKey("taptap")) {
                    var dic = tdsUser.AuthData["taptap"] as Dictionary<string, object>;
                    if (dic != null && dic.TryGetValue("unionid", out var unionId)) {
                        TriggerLoginInfo(UnityTDSUser.TAP_AUTH_CHANNEL, unionId as string);
                    }
                }
            }
        }
        
        private static void TriggerLoginInfo(string platform, string userId) {
            if (string.IsNullOrEmpty(platform) || string.IsNullOrEmpty(userId)) return;
            if (platform.Equals("taptap".ToLower())) platform = UnityTDSUser.TDS_CHANNEL;
            EventManager.TriggerEvent(EventConst.OnTapLogin, new KeyValuePair<string, string>(platform, userId));
        }

        
        public static void TriggerLogoutInfo(string platform) {
            EventManager.TriggerEvent(EventConst.OnTapLogout, platform);
            tdsUserLogin = false;
        }
        
        public static void TriggerBindInfo(string platform, string userId) {
            if (string.IsNullOrEmpty(platform) || string.IsNullOrEmpty(userId)) return;
            if (platform.Equals("taptap".ToLower())) platform = UnityTDSUser.TDS_CHANNEL;
            EventManager.TriggerEvent(EventConst.OnBind, new KeyValuePair<string, string>(platform, userId));
        }
        
        public static void TriggerUnbindInfo(string platform) {
            if (string.IsNullOrEmpty(platform)) return;
            if (platform.Equals("taptap".ToLower())) platform = UnityTDSUser.TDS_CHANNEL;
            EventManager.TriggerEvent(EventConst.OnUnbind, platform);
        }
    }
}