using System;
using System.Threading.Tasks;

namespace TapTap.Login.Mobile
{
    public class TapLoginMobile : Internal.ITapLoginPlatform
    {
        public void Init(string clientID)
        {
            TapLoginImpl.GetInstance().Init(clientID);
        }

        public void Init(string clientID, bool isCn, bool roundCorner)
        {
            TapLoginImpl.GetInstance().Init(clientID, isCn, roundCorner);
        }

        public void ChangeConfig(bool roundCorner, bool isPortrait)
        {
            TapLoginImpl.GetInstance().ChangeConfig(roundCorner, isPortrait);
        }

        public Task<Profile> FetchProfile()
        {
            return TapLoginImpl.GetInstance().FetchProfile();
        }

        public Task<Profile> GetProfile()
        {
            return TapLoginImpl.GetInstance().GetProfile();
        }

        public Task<AccessToken> GetAccessToken()
        {
            return TapLoginImpl.GetInstance().GetAccessToken();
        }

        public void AppendPermission(string permission) {
            TapLoginImpl.GetInstance().AppendPermission(permission);
        }

        public Task<AccessToken> Login()
        {
            return TapLoginImpl.GetInstance().Login();
        }

        public Task<AccessToken> Login(string[] permissions)
        {
            return TapLoginImpl.GetInstance().Login(permissions);
        }

        public Task<AccessToken> Authorize(string[] permissions = null)  {
            throw new NotImplementedException(nameof(Authorize));
        }

        public async Task<AccessToken> Login(TapLoginPermissionConfig _) { 
            throw new NotImplementedException(nameof(Login));
        }

        public void Logout()
        {
            TapLoginImpl.GetInstance().Logout();
        }

        public Task<bool> GetTestQualification()
        {
            return TapLoginImpl.GetInstance().GetTestQualification();
        }
    }
}