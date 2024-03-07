using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using LC.Newtonsoft.Json;
using TapTap.Common;
using TapTap.Common.Internal.Utils;
using UnityEngine;

namespace TapTap.Login.Internal
{
    internal class LoginHelper
    {
        private static readonly string _accessToken = "taptapsdk_accesstoken";

        private static readonly string _profile = "taptapsdk_profile";

        public static Task<AccessToken> Login()
        {
            return Login(new[] { TapLogin.TAP_LOGIN_SCOPE_PUBLIC_PROFILE });
        }
        
        public static Task<Tuple<AccessToken, Profile>> Authorize(string[] permissions) {
            return InternalAuthorize(permissions, false);
        }

        public static Task<AccessToken> Login(string[] permissions) {
            var pl = permissions.ToList();

            // // 如果是海外版，移除合规权限
            // bool isCn = !TapLoginStandalone.IsOverseas;
            // if (!isCn) {
            //     pl.Remove(TapLogin.TAP_LOGIN_SCOPE_COMPLIANCE);
            // }
            permissions = pl.ToArray();
            var task = InternalAuthorize(permissions, true);
            return task.ContinueWith(t => {
                
                if (t.IsFaulted) {
                    throw t.Exception;
                }

                var result = t.Result;
                return result.Item1;
            });
        }

        private static async void ShowLoginToast(Profile profile, bool isLogin) {
            if (!isLogin) return;
            var content = LoginLanguage.GetCurrentLang().LoginNotice();
            var str = string.Format(content, profile.name);
            Texture userAvatar = null;
            try {
                userAvatar = await ImageUtils.LoadImage(profile.avatar);
            }
            finally {
                if (userAvatar == null){
                    userAvatar = UI.UIManager.TapTapToastIcon;
                }
                string message = string.Format(LoginLanguage.GetCurrentLang().LoginNotice(), profile.name);
                UI.UIManager.Instance.OpenToast(false, str, 3, icon: userAvatar);
            }
        }

        private static Task<Tuple<AccessToken, Profile>> InternalAuthorize(string[] permissions, bool isLogin) {
            var tcs = new TaskCompletionSource<Tuple<AccessToken, Profile>>();

            LoginManager.AuthorizeWithReadPermissions(permissions, isLogin,result =>
            {
                if (result == null)
                {
                    tcs.TrySetException(new TapException((int) TapErrorCode.ERROR_CODE_UNDEFINED, "UnKnow Error"));
                    return;
                }

                if (result.IsCanceled)
                {
                    tcs.TrySetException(
                        new TapException((int) TapErrorCode.ERROR_CODE_LOGIN_CANCEL, "Login Cancel"));
                    return;
                }

                if (result.IsFaulted)
                {
                    var str = result.Exception.Message;
                    if (str == "unknown")
                    {
                        tcs.TrySetException(new TapException((int) TapErrorCode.ERROR_CODE_UNDEFINED,
                            "UnKnow Error"));
                    }
                    else
                    {
                        var dict = Json.Deserialize(str) as Dictionary<string, object>;
                        var data = SafeDictionary.GetValue<object>(dict, "data") as Dictionary<string, object>;
                        tcs.TrySetException(new TapException(SafeDictionary.GetValue<int>(data, "code"),
                            SafeDictionary.GetValue<string>(data, "error_description")));
                    }

                    return;
                }
                ShowLoginToast(result.Profile, isLogin);
                tcs.TrySetResult(new Tuple<AccessToken, Profile>(result.Token, result.Profile));
            });
            return tcs.Task;
        }

        public static Task<Profile> GetProfile()
        {
            var tcs = new TaskCompletionSource<Profile>();
            try
            {
                var profileStr = DataStorage.LoadString(_profile);
                if (!string.IsNullOrEmpty(profileStr))
                {
                    var profile = JsonConvert.DeserializeObject<Profile>(profileStr);
                    tcs.TrySetResult(profile);
                }
                else {
                    tcs.TrySetResult(null);
                }
            }
            catch (Exception e)
            {
                tcs.TrySetException(e);
            }

            return tcs.Task;
        }
        
        public static Task<AccessToken> GetAccessToken()
        {
            var tcs = new TaskCompletionSource<AccessToken>();
            try
            {
                var accessTokenStr = DataStorage.LoadString(_accessToken);
                if (accessTokenStr != null)
                {
                    var accessToken = JsonConvert.DeserializeObject<AccessToken>(accessTokenStr);
                    tcs.TrySetResult(accessToken);
                } else {
                    tcs.TrySetResult(null);
                }
            }
            catch (Exception e)
            {
                tcs.TrySetException(e);
            }

            return tcs.Task;
        }

        public static void Logout()
        {
            DataStorage.SaveString(_profile, null);
            DataStorage.SaveString(_accessToken, null);
        }
    }
}