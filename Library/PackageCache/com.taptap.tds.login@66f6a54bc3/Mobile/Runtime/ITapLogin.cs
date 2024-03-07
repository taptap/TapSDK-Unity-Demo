using System.Threading.Tasks;
using TapTap.Common;

namespace TapTap.Login.Mobile
{
    public interface ITapLogin
    {
        void Init(string clientID);

        void Init(string clientID, bool isCn, bool roundCorner);

        void ChangeConfig(bool roundCorner, bool isPortrait);

        Task<Profile> FetchProfile();

        Task<Profile> GetProfile();

        Task<AccessToken> GetAccessToken();

        Task<AccessToken> Login();

        Task<AccessToken> Login(string[] permissions);

        Task<bool> GetTestQualification();

        void Logout();
    }

    public interface ITapLoginResultListener
    {
        void LoginCancel();

        void LoginError(TapError error);

        void LoginSuccess(AccessToken token);
    }

    public static class TapLoginConstants
    {
        public static string TAP_LOGIN_SERVICE = "TDSLoginService";

        public static string TAP_LOGIN_SERVICE_CLZ = "com.taptap.sdk.wrapper.TDSLoginService";

        public static string TAP_LOGIN_SERVICE_IMPL = "com.taptap.sdk.wrapper.TDSLoginServiceImpl";
    }
}