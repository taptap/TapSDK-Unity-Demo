using System.Threading.Tasks;
using TapTap.Login.Internal;

namespace TapTap.Login.Standalone {
    public class TapLoginStandalone : ITapLoginPlatform {
        public void Init(string clientID) {
        }

        public void Init(string clientID, bool isCn, bool roundCorner) {
        }

        public void ChangeConfig(bool roundCorner, bool isPortrait) {
        }

        public Task<Profile> FetchProfile() {
            return LoginHelper.GetProfile();
        }

        public Task<Profile> GetProfile() {
            return LoginHelper.GetProfile();
        }

        public Task<AccessToken> GetAccessToken() {
            return LoginHelper.GetAccessToken();
        }

        public Task<AccessToken> Login() {
            return LoginHelper.Login();
        }

        public Task<AccessToken> Login(string[] permissions) {
            return LoginHelper.Login(permissions);
        }

        public void Logout() {
            LoginHelper.Logout();
        }

        public Task<bool> GetTestQualification() {
            return Task.FromResult(false);
        }
    }
}
