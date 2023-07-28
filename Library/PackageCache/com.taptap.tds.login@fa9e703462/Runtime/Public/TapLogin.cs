using System.Threading.Tasks;
using TapTap.Login.Internal;
using TapTap.Common.Internal.Utils;

namespace TapTap.Login
{
    public class TapLogin
    {
        public const string TAP_LOGIN_SCOPE_BASIC_INFO = "basic_info";
        public const string TAP_LOGIN_SCOPE_PUBLIC_PROFILE = "public_profile";
        public const string TAP_LOGIN_SCOPE_USER_FRIENDS = "user_friends";
        public const string TAP_LOGIN_SCOPE_EMAIL = "email";

        private static ITapLoginPlatform platformWrapper;

        static TapLogin() {
            platformWrapper = BridgeUtils.CreateBridgeImplementation(typeof(ITapLoginPlatform),
                "TapTap.Login") as ITapLoginPlatform;
        }

        public static void Init(string clientID) {
            platformWrapper.Init(clientID);
            TapTapSdk.SDKInitialize(clientID, true);
        }

        public static void Init(string clientID, bool isCn, bool roundCorner) {
            platformWrapper.Init(clientID, isCn, roundCorner);
            TapTapSdk.SDKInitialize(clientID, isCn);
        }

        public static void ChangeConfig(bool roundCorner, bool isPortrait) {
            platformWrapper.ChangeConfig(roundCorner, isPortrait);
        }

        public static Task<Profile> FetchProfile() {
            return platformWrapper.FetchProfile();
        }

        public static Task<Profile> GetProfile() {
            return platformWrapper.GetProfile();
        }

        public static Task<AccessToken> GetAccessToken() {
            return platformWrapper.GetAccessToken();
        }

        public static Task<AccessToken> Login() {
            return platformWrapper.Login();
        }

        public static Task<AccessToken> Login(string[] permissions) {
            return platformWrapper.Login(permissions);
        }

        public static void Logout() {
            platformWrapper.Logout();
        }

        public static Task<bool> GetTestQualification() {
            return platformWrapper.GetTestQualification();
        }
    }
}