using System;
using System.Collections.Generic;
using LeanCloud.Storage;

namespace TapTap.Friends {
    /// <summary>
    /// The delegate for friend module.
    /// </summary>
    public class TDSFriendStatusChangedDelegate {
        /// <summary>
        /// Occurs when somebody adds you.
        /// </summary>
        public Action<TDSFriendshipRequest> OnNewRequestComing { get; set; }
        /// <summary>
        /// Occurs when somebody accepts your request.
        /// </summary>
        public Action<TDSFriendshipRequest> OnRequestAccepted { get; set; }
        /// <summary>
        /// Occurs when somebody declines your request.
        /// </summary>
        public Action<TDSFriendshipRequest> OnRequestDeclined { get; set; }
        /// <summary>
        /// Occurs when somebody becomes your friend.
        /// </summary>
        public Action<TDSFriendInfo> OnFriendAdd { get; set; }
        /// <summary>
        /// Occurs when your friend is online.
        /// </summary>
        public Action<string> OnFriendOnline { get; set; }
        /// <summary>
        /// Occurs when your friend is offline.
        /// </summary>
        public Action<string> OnFriendOffline { get; set; }
        /// <summary>
        /// Occurs when the rich presences of your friend changes.
        /// </summary>
        public Action<string, Dictionary<string, string>> OnRichPresenceChanged { get; set; }
        /// <summary>
        /// Occurs when the connection receives error.
        /// </summary>
        public Action<int, string> OnConnectionError { get; set; }
        /// <summary>
        /// Occurs when the connection is connected.
        /// </summary>
        public Action OnConnected { get; set; }
        /// <summary>
        /// Occurs when the connection is disconnected and SDK will reconnect.
        /// </summary>
        public Action OnDisconnected { get; set; }
    }
}
