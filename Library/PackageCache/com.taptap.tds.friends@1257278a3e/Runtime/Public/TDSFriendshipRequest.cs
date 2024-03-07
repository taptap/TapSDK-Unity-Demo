using LeanCloud.Storage;

namespace TapTap.Friends {
    /// <summary>
    /// TDSFriendshipRequest contains the request of Leancloud friendship and friend information.
    /// </summary>
    public class TDSFriendshipRequest {
        public LCFriendshipRequest FriendshipRequest {
            get; internal set;
        }

        public TDSFriendInfo FriendInfo {
            get; internal set;
        }
    }
}
