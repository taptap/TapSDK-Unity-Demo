using System.Collections.ObjectModel;

namespace TapTap.Friends {
    public class TapFriendResult {
        public ReadOnlyCollection<TapFriendInfo> FriendList {
            get; internal set;
        }

        public string Cursor {
            get; internal set;
        }
    }
}
