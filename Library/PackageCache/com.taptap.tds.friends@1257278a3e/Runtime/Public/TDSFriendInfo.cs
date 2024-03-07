using System.Collections.Generic;
using TapTap.Bootstrap;

namespace TapTap.Friends {
    /// <summary>
    /// The info of friend.
    /// </summary>
    public class TDSFriendInfo {
        /// <summary>
        /// The friend.
        /// </summary>
        public TDSUser User {
            get; internal set;
        }

        /// <summary>
        /// Whether is online.
        /// </summary>
        public bool Online {
            get; internal set;
        }

        /// <summary>
        /// The rich presences of the friend.
        /// </summary>
        public Dictionary<string, string> RichPresence {
            get; internal set;
        }

        public TDSFriendInfo() {
        }
    }
}
