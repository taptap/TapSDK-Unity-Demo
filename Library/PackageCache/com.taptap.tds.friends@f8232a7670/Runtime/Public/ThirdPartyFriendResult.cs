using System.Collections.ObjectModel;

namespace TapTap.Friends {
    /// <summary>
    /// Result of third party friend.
    /// </summary>
    public class ThirdPartyFriendResult {
        public ReadOnlyCollection<ThirdPartyFriend> FriendList {
            get; internal set;
        }

        public string Cursor {
            get; internal set;
        }

        public ThirdPartyFriendResult() {
        }
    }
}
