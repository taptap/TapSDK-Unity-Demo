namespace TapTap.Friends {
    /// <summary>
    /// Presents the info of third party friend.
    /// </summary>
    public class ThirdPartyFriend {
        public string Id {
            get; internal set;
        }

        public string Name {
            get; internal set;
        }

        public string Avatar {
            get; internal set;
        }

        public TDSFriendInfo FriendInfo {
            get; internal set;
        }

        public ThirdPartyFriend() {
        }
    }
}
