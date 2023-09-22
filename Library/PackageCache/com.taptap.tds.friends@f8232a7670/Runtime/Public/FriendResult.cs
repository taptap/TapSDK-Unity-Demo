using System.Collections.ObjectModel;

namespace TapTap.Friends {
    public class FriendResult {
        public ReadOnlyCollection<TDSFriendInfo> FriendList {
            get; internal set;
        }

        public string Cursor {
            get; internal set;
        }
    }
}
