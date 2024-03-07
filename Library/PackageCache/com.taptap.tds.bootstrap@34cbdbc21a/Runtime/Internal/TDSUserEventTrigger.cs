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
            if (tdsUserLogin || tdsUser == null || string.IsNullOrEmpty(tdsUser.ObjectId)) return;
            EventManager.TriggerEvent(EventConst.OnTapLogin, new KeyValuePair<string, string>(UnityTDSUser.TDS_CHANNEL, tdsUser.ObjectId));
            // 检查是否同时绑定了 taptap
            if (tdsUser.AuthData != null && tdsUser.AuthData.TryGetValue("taptap", out var value)) {
                if (value is Dictionary<string, object> dic && dic.TryGetValue("openid", out var value1)) {
                    EventManager.TriggerEvent(EventConst.OnTapLogin, new KeyValuePair<string, string>(UnityTDSUser.TAP_AUTH_CHANNEL, value1.ToString()));
                }
            }
            tdsUserLogin = true;
        }
        
        public static void TriggerLogoutInfo(string platform) {
            EventManager.TriggerEvent(EventConst.OnTapLogout, platform);
            tdsUserLogin = false;
        }
        
        public static void TriggerBindInfo(Dictionary<string, object> authData, string platform, string userId) {
            if (string.IsNullOrEmpty(userId)) return;
            if (!platform.Equals("taptap")) return;
            if (authData.TryGetValue("openid", out var value1)) {
                EventManager.TriggerEvent(EventConst.OnBind, new KeyValuePair<string, string>(UnityTDSUser.TAP_AUTH_CHANNEL, value1.ToString()));
            }
        }
        
        public static void TriggerUnbindInfo(string platform) {
            if (string.IsNullOrEmpty(platform)) return;
            if (platform.Equals("taptap")) platform = UnityTDSUser.TAP_AUTH_CHANNEL;
            EventManager.TriggerEvent(EventConst.OnUnbind, platform);
        }
    }
}