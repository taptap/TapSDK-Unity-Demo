using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using TapTap.Common;

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

        public static Task<AccessToken> Login(string[] permissions)
        {
            var tcs = new TaskCompletionSource<AccessToken>();

            LoginManager.Instance.LogInWithReadPermissions(permissions, result =>
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

                tcs.TrySetResult(result.Token);
            });
            return tcs.Task;
        }

        public static Task<Profile> GetProfile()
        {
            var tcs = new TaskCompletionSource<Profile>();
            try
            {
                var profileStr = DataStorage.LoadString(_profile);
                if (profileStr != null)
                {
                    var profile = new Profile(profileStr);
                    tcs.TrySetResult(profile);
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
                    var accessToken = new AccessToken(accessTokenStr);
                    tcs.TrySetResult(accessToken);
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