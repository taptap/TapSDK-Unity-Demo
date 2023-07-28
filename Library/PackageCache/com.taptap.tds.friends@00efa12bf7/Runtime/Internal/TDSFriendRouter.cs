using System.Threading.Tasks;
using LeanCloud.Common;

namespace TapTap.Friends.Internal {
    public class TDSFriendRouter {
        private TDSFriendsConfig config;

        public async Task<TDSFriendsConfig> GetConfig() {
            if (config != null) {
                return config;
            }
            config = await FetchFriendsConfig();
            return config;
        }

        private async Task<TDSFriendsConfig> FetchFriendsConfig() {
            string path = "friend/v1/rich-presence/config";
            TDSFriendsConfig config = await LCCore.HttpClient.Get<TDSFriendsConfig>(path,
                withAPIVersion: false);
            return config;
        }
    }
}
