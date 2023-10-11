using System.Threading.Tasks;

namespace TapTap.Login.Internal {
    public interface ITapLoginPlatform {
        void Init(string clientID);

        void Init(string clientID, bool isCn, bool roundCorner);

        void ChangeConfig(bool roundCorner, bool isPortrait);

        Task<Profile> FetchProfile();

        Task<Profile> GetProfile();

        Task<AccessToken> GetAccessToken();

        Task<AccessToken> Login();

        Task<AccessToken> Login(string[] permissions);

        void Logout();

        Task<bool> GetTestQualification();
    }
}
