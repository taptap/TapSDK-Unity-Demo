using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Threading.Tasks;
using System.Collections.Specialized;
using System.Web;
using LeanCloud;
using LeanCloud.Common;
using LeanCloud.Storage;
using TapTap.Bootstrap;
using LC.Newtonsoft.Json;

namespace TapTap.Friends.Internal {
    

    public class TDSFriendCore {
        /// <summary>
        /// Cache policy of querying third party friends.
        /// </summary>
        public enum ThirdPartyFriendRequestCachePolicy {
            CacheElseNetwork,
            OnlyNetwork
        }

        public static class TrackEvent
        {
            public const string TYPE_FOLLOW = "follow";
            public const string TYPE_SEND_FRIEND_REQUEST = "sendFriendRequest";

            public const string NAME_FRIEND_SHARE_LINK_CLICK = "tds/friendShareLinkClick";
            public const string NAME_FOLLOW = "tds/friendFollow";
            public const string NAME_SEND_FRIEND_REQUEST = "tds/friendSendFriendRequest";
     
        }

        /// <summary>
        /// Conditions of sort.
        /// </summary>
        public class SortCondition {
            public const string ONLINE = "online";

            private const string RICH_PREFERENCE_PREFIX = "rich_presence_";

            private List<string> conditions;

            public static SortCondition OnlineCondition => new SortCondition(ONLINE);

            public SortCondition(string condition) {
                conditions = new List<string>();
                conditions.Add(condition);
            }

            public SortCondition Append(string richPresence) {
                conditions.Add($"{RICH_PREFERENCE_PREFIX}{richPresence}");
                return this;
            }

            public override string ToString() {
                return string.Join(",", conditions);
            }
        }

        private static string shareLink;
        private static Dictionary<string, string> trackShareUriCache;

        internal class TDSRichPresence {
            internal bool Online { get; set; }
            internal Dictionary<string, object> RichPresence { get; set; }
        }

        public const string NOT_LOGGED_IN_ERROR = "Not logged in.";
        public const string NO_USER_FOUND = "No user was found.";

        internal const string NOTIFICATION_APPLY = "friendship/request/apply";
        internal const string NOTIFICATION_ACCEPT = "friendship/request/accept";
        internal const string NOTIFICATION_DECLINE = "friendship/request/refund";
        internal const string NOTIFICATION_ONLINE = "friendship/friend/online";
        internal const string NOTIFICATION_RICH_PRESENCE_CHANGED = "friendship/rich_presence/update";
        internal const string NOTIFICATION_SESSION_KICK = "/session/kick";
        internal const string NOTIFICATION_SESSION_ERROR = "/session/error";

        internal const int CONNECTION_ERROR_CODE = 9004;

        internal const string USER_ID_KEY = "userId";
        internal const string REQUEST_ID_KEY = "requestId";
        internal const string ONLINE_KEY = "online";

        public static TDSFriendStatusChangedDelegate FriendStatusChangedDelegate { get; set; }

        private static TDSFriendConnection connection;

        #region Public API

        /// <summary>
        /// Be online, will notify friends and receive rich presences of your firends changes.
        /// </summary>
        /// <returns></returns>
        public static async Task Online() {
            if (connection != null) {
                LCLogger.Warn("Connection is connected or connecting.");
                return;
            }
            try {
                connection = new TDSFriendConnection();
                bool needConnection = await connection.Connect();
                if (!needConnection) {
                    return;
                }

                FriendStatusChangedDelegate?.OnConnected?.Invoke();

                connection.OnNotification = notification => {
                    if (notification.TryGetValue("header", out object headerObj) &&
                        headerObj is Dictionary<string, object> header &&
                        header.TryGetValue("path", out object path)) {
                        switch (path) {
                            case NOTIFICATION_APPLY:
                                OnApplyNotification(notification["body"] as Dictionary<string, object>);
                                break;
                            case NOTIFICATION_ACCEPT:
                                OnAcceptNotication(notification["body"] as Dictionary<string, object>);
                                break;
                            case NOTIFICATION_DECLINE:
                                OnDeclineNotification(notification["body"] as Dictionary<string, object>);
                                break;
                            case NOTIFICATION_ONLINE:
                                OnFriendOnlineNotification(notification["body"] as Dictionary<string, object>);
                                break;
                            case NOTIFICATION_RICH_PRESENCE_CHANGED:
                                OnFriendRichPresenceChangedNotification(notification["body"] as Dictionary<string, object>);
                                break;
                            case NOTIFICATION_SESSION_KICK:
                                OnSessionKicked();
                                break;
                            case NOTIFICATION_SESSION_ERROR:
                                OnSessionError(notification["body"] as string);
                                break;
                            default:
                                break;
                        }
                    }
                };
                connection.OnReconnected = () => {
                    FriendStatusChangedDelegate?.OnConnected?.Invoke();
                };
                connection.OnDisconnected = () => {
                    FriendStatusChangedDelegate?.OnDisconnected?.Invoke();
                };
            } catch (Exception e) {
                LCLogger.Error(e);
                _ = connection.Close();
                connection = null;
                throw e;
            }
        }

        /// <summary>
        /// Be offline, will notify your friends.
        /// </summary>
        /// <returns></returns>
        public static void Offline() {
            if (connection != null) {
                _ = connection.Close();
                connection = null;
            }
            ThirdPartyFriendCache.Clear();
        }

        /// <summary>
        /// Seaches users by nickname.
        /// </summary>
        /// <param name="username"></param>
        /// <returns></returns>
        public static Task<ReadOnlyCollection<TDSFriendInfo>> SearchUserByName(string nickname) {
            LCUserQueryCondition condition = new LCUserQueryCondition();
            condition.WhereEqualTo("nickname", nickname);
            return SearchUsers(condition);
        }

        /// <summary>
        /// Searches user by code.
        /// </summary>
        /// <param name="code"></param>
        /// <returns></returns>
        public static async Task<TDSFriendInfo> SearchUserByShortCode(string code) {
            if (string.IsNullOrEmpty(code)) {
                throw new ArgumentNullException(nameof(code));
            }

            LCUserQueryCondition condition = new LCUserQueryCondition();
            condition.WhereEqualTo("shortId", code);
            ReadOnlyCollection<TDSFriendInfo> users = await SearchUsers(condition);
            if (users == null || users.Count == 0) {
                return null;
            }

            return users.First();
        }

        /// <summary>
        /// Searches user by id.
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        public static async Task<TDSFriendInfo> SearchUserById(string id) {
            if (string.IsNullOrEmpty(id)) {
                throw new ArgumentNullException(nameof(id));
            }

            LCUserQueryCondition condition = new LCUserQueryCondition();
            condition.WhereEqualTo("objectId", id);
            ReadOnlyCollection<TDSFriendInfo> users = await SearchUsers(condition);
            if (users == null || users.Count == 0) {
                return null;
            }

            return users.First();
        }

        /// <summary>
        /// Sets rich presence.
        /// </summary>
        /// <param name="key"></param>
        /// <param name="value"></param>
        /// <returns></returns>
        public static Task SetRichPresence(string key, string value) {
            if (string.IsNullOrEmpty(key)) {
                throw new ArgumentNullException(nameof(key));
            }
            if (value == null) {
                throw new ArgumentNullException(nameof(value));
            }

            string path = "friend/v1/rich-presence/users/me";
            Dictionary<string, object> data = new Dictionary<string, object> {
                { "config", new List<object> {
                    new Dictionary<string, object> {
                        { "key", key },
                        { "value", value }
                    }
                } }
            };
            return LCCore.HttpClient.Post<Dictionary<string, object>>(path,
                data: data,
                withAPIVersion: false);
        }

        /// <summary>
        /// Clears rich presence.
        /// </summary>
        /// <param name="key"></param>
        /// <returns></returns>
        public static Task ClearRichPresence(string key) {
            return SetRichPresence(key, string.Empty);
        }

        /// <summary>
        /// Sets rich presences.
        /// </summary>
        /// <param name="richPresences"></param>
        /// <returns></returns>
        public static Task SetRichPresences(Dictionary<string, string> richPresences) {
            if (richPresences == null || richPresences.Count == 0) {
                throw new ArgumentNullException(nameof(richPresences));
            }

            string path = "friend/v1/rich-presence/users/me";
            List<object> presences = richPresences.Select(kv => new Dictionary<string, string> {
                { "key", kv.Key },
                { "value", kv.Value }
            }).ToList<object>();
            Dictionary<string, object> data = new Dictionary<string, object> {
                { "config", presences }
            };
            return LCCore.HttpClient.Post<Dictionary<string, object>>(path,
                data: data,
                withAPIVersion: false);
        }

        /// <summary>
        /// Clears rich presences.
        /// </summary>
        /// <param name="keys"></param>
        /// <returns></returns>
        public static Task ClearRichPresences(IEnumerable<string> keys) {
            if (keys == null || keys.Count() == 0) {
                throw new ArgumentNullException(nameof(keys));
            }

            Dictionary<string, string> richPresences = keys.ToDictionary(k => k, k => string.Empty);
            return SetRichPresences(richPresences);
        }

        /// <summary>
        /// Sets share url.
        /// </summary>
        /// <param name="url"></param>
        public static void SetShareLink(string url) {
            shareLink = url;
        }

        /// <summary>
        /// Generates the url of friend invitation.
        /// </summary>
        /// <returns></returns>
        public static async Task<string> GenerateFriendInvitationLink(string roleName = null, Dictionary<string, object> queries = null) {
            if (string.IsNullOrEmpty(shareLink)) {
                throw new ArgumentNullException(nameof(shareLink));
            }

            TDSUser current = await GetCurrentUser();
            if (current == null) {
                throw new ArgumentNullException(nameof(current));
            }

            return GenerateShareLink(roleName != null ? roleName : current["nickname"] as string,
                    "invitation", current.ObjectId, queries);
        }

        /// <summary>
        /// Parses the url of friend invitation.
        /// </summary>
        /// <param name="url"></param>
        /// <returns></returns>
        public static TDSFriendLinkInfo ParseFriendInvitationLink(string url) {
            Uri uri = new Uri(url);
            NameValueCollection query = Common.Internal.Http.TapHttpUtils.ParseQueryString(uri.Query);
            string extJson = Encoding.UTF8.GetString(Convert.FromBase64String(query["ext"]));
            Dictionary<string, object> ext = JsonConvert.DeserializeObject<Dictionary<string, object>>(extJson,
                LCJsonConverter.Default);

            TDSFriendLinkInfo info = new TDSFriendLinkInfo(ext);

            if (query.Keys.Count > 1) {
                Dictionary<string, string> queries = new Dictionary<string, string>(); 
                foreach (string key in query.Keys) {
                    if (key == "ext") {
                        continue;
                    }
                    queries[key] = query[key];
                }
                info["query"] = queries;
            }
            
            return info;
        }

        private static Task SetFriendNotificationEnabled(bool enabled) {
            string path = "friend/v2/rich-presence/config/remote-message";
            Dictionary<string, object> data = new Dictionary<string, object> {
                { "enablePush", enabled }
            };
            return LCCore.HttpClient.Post<object>(path, data: data, withAPIVersion: false);
        }

        /// <summary>
        /// Enable push notifications
        /// </summary>
        /// <returns></returns>
        public static Task EnableFriendNotification() {
            return SetFriendNotificationEnabled(true);
        }

        /// <summary>
        /// Disable push notifications
        /// </summary>
        /// <returns></returns>
        public static Task DisableFriendNotification() {
            return SetFriendNotificationEnabled(false);
        }

        #endregion

        private static async Task<ReadOnlyCollection<TDSFriendInfo>> SearchUsers(LCUserQueryCondition condition) {
            ReadOnlyCollection<LCUser> lcUsers = await LCUser.StrictlyFind(condition);
            if (lcUsers == null || lcUsers.Count == 0) {
                return new List<TDSFriendInfo>().AsReadOnly();
            }

            ReadOnlyCollection<TDSUser> users = lcUsers.Cast<TDSUser>()
                .ToList()
                .AsReadOnly();

            if (users == null || users.Count == 0) {
                return new List<TDSFriendInfo>().AsReadOnly();
            }

            return await QueryFriendInfos(users.ToList());
        }

        private static void OnSessionError(string message) {
            LCLogger.Debug("On Session Error");
            _ = connection.Close();
            connection = null;
            FriendStatusChangedDelegate?.OnConnectionError?.Invoke(CONNECTION_ERROR_CODE, message);
        }

        private static void OnSessionKicked() {
            LCLogger.Debug("On Session Kicked");
            _ = connection.Close();
            connection = null;
            FriendStatusChangedDelegate?.OnConnectionError?.Invoke(CONNECTION_ERROR_CODE, "Disconnect by kick.");
        }

        private static async void OnApplyNotification(Dictionary<string, object> data) {
            TDSFriendshipRequest request = await GetTDSFriendshipRequest(data);
            request.FriendInfo.User = request.FriendshipRequest.User as TDSUser;
            if (request != null) {
                FriendStatusChangedDelegate?.OnNewRequestComing?.Invoke(request);
            }
        }

        private static async void OnAcceptNotication(Dictionary<string, object> data) {
            TDSFriendshipRequest request = await GetTDSFriendshipRequest(data);
            request.FriendInfo.User = request.FriendshipRequest.Friend as TDSUser;
            if (request != null) {
                FriendStatusChangedDelegate?.OnRequestAccepted?.Invoke(request);
            }

            ReadOnlyCollection<TDSFriendInfo> friendInfos = await QueryFriendInfos(new List<TDSUser> {
                request.FriendshipRequest.Friend as TDSUser
            });
            if (friendInfos == null || friendInfos.Count == 0) {
                return;
            }
            FriendStatusChangedDelegate?.OnFriendAdd?.Invoke(friendInfos.First());
        }

        private static async void OnDeclineNotification(Dictionary<string, object> data) {
            TDSFriendshipRequest request = await GetTDSFriendshipRequest(data);
            request.FriendInfo.User = request.FriendshipRequest.Friend as TDSUser;
            if (request != null) {
                FriendStatusChangedDelegate?.OnRequestDeclined?.Invoke(request);
            }
        }

        private static void OnFriendOnlineNotification(Dictionary<string, object> data) {
            if (data.TryGetValue(ONLINE_KEY, out object onlineObj) &&
                data.TryGetValue(USER_ID_KEY, out object userIdObj) &&
                userIdObj is string userId) {
                bool online = (bool)onlineObj;
                if (online) {
                    FriendStatusChangedDelegate?.OnFriendOnline?.Invoke(userId);
                } else {
                    FriendStatusChangedDelegate?.OnFriendOffline?.Invoke(userId);
                }
            }
        }

        private static async void OnFriendRichPresenceChangedNotification(Dictionary<string, object> data) {
            if (data.TryGetValue(USER_ID_KEY, out object userIdObj) &&
                userIdObj is string userId) {
                LCQuery<TDSUser> query = TDSUser.GetQuery();
                query.Include("richPresence");
                TDSUser user = await query.Get(userId);
                if (user == null) {
                    return;
                }

                ReadOnlyCollection<TDSFriendInfo> friendInfos = await QueryFriendInfos(new List<TDSUser> { user });
                if (friendInfos == null || friendInfos.Count == 0) {
                    return;
                }

                FriendStatusChangedDelegate?.OnRichPresenceChanged?.Invoke(userId, friendInfos.First().RichPresence);
            }
        }

        private static async Task<LCFriendshipRequest> GetFriendshipRequest(Dictionary<string, object> data) {
            if (data.TryGetValue(REQUEST_ID_KEY, out object requestIdObj) &&
                requestIdObj is string requestId) {
                LCQuery<LCFriendshipRequest> query = LCFriendshipRequest.GetQuery();
                try {
                    LCFriendshipRequest request = await query.Get(requestId);
                    return request;
                } catch (Exception e) {
                    LCLogger.Error(e);
                }
            }
            return null;
        }

        private static async Task<TDSFriendshipRequest> GetTDSFriendshipRequest(Dictionary<string, object> data) {
            LCFriendshipRequest lcReq = await GetFriendshipRequest(data);
            TDSFriendshipRequest req = new TDSFriendshipRequest {
                FriendshipRequest = lcReq
            };
            req.FriendInfo = new TDSFriendInfo();
            ReadOnlyCollection<TDSRichPresence> presences = await QueryRichPresences(new string[] { lcReq.User.ObjectId });
            if (presences?.Count > 0) {
                TDSRichPresence presence = presences.First();
                req.FriendInfo.Online = presence.Online;
                req.FriendInfo.RichPresence = presence.RichPresence?.ToDictionary(kv => kv.Key, kv => kv.Value as string);
            }
            return req;
        }

        internal static async Task<ReadOnlyCollection<TDSFriendInfo>> QueryFriendInfos(List<TDSUser> users) {
            if (users == null || users.Count == 0) {
                return new List<TDSFriendInfo>().AsReadOnly();
            }

            IEnumerable<string> ids = users.Select(user => user.ObjectId);
            List<TDSFriendInfo> friendInfos = new List<TDSFriendInfo>(ids.Count());
            ReadOnlyCollection<TDSRichPresence> richPresences = await QueryRichPresences(ids);
            if (richPresences != null &&
                users.Count == richPresences.Count) {
                for (int i = 0; i < users.Count; i++) {
                    TDSUser user = users[i];
                    TDSRichPresence presence = richPresences[i];
                    TDSFriendInfo friendInfo = new TDSFriendInfo {
                        User = user,
                        Online = presence.Online,
                        RichPresence = presence.RichPresence?.ToDictionary(kv => kv.Key, kv => kv.Value as string)
                    };
                    friendInfos.Add(friendInfo);
                }
            }
            return friendInfos.AsReadOnly();
        }

        internal static async Task<ReadOnlyCollection<TDSRichPresence>> QueryRichPresences(IEnumerable<string> userIds) {
            if (userIds == null || userIds.Count() == 0) {
                return new List<TDSRichPresence>().AsReadOnly();
            }

            string path = "friend/v1/rich-presence/users";
            Dictionary<string, object> queryParams = new Dictionary<string, object> {
                { "ids", $"{{{string.Join(",", userIds)}}}" }
            };
            Dictionary<string, object> response = await LCCore.HttpClient.Get<Dictionary<string, object>>(path,
                queryParams: queryParams,
                withAPIVersion: false);
            if (response.TryGetValue("results", out object resultsObj) &&
                resultsObj is List<object> results) {
                return results.Select(result => {
                    TDSRichPresence richPresence = new TDSRichPresence();
                    if (result is Dictionary<string, object> item) {
                        richPresence.Online = item.TryGetValue("online", out object onlineObj) &&
                                    (onlineObj is bool online) ?
                                    online : false;
                        richPresence.RichPresence = item.TryGetValue("richPresence", out object presenceObj) &&
                            (presenceObj is Dictionary<string, object> presence) ?
                            presence : null;
                    }
                    return richPresence;
                }).ToList().AsReadOnly();
            }

            return null;
        }

        internal static async Task<TDSUser> GetCurrentUser() {
            TDSUser current = await TDSUser.GetCurrent();
            if (current == null) {
                throw new Exception(NOT_LOGGED_IN_ERROR);
            }
            return current;
        }

        internal static async Task<TDSUser> GetUserByCode(string code) {
            if (string.IsNullOrEmpty(code)) {
                throw new ArgumentNullException(nameof(code));
            }

            LCUserQueryCondition condition = new LCUserQueryCondition();
            condition.WhereEqualTo("shortId", code);
            ReadOnlyCollection<LCUser> lcUsers = await LCUser.StrictlyFind(condition);
            if (lcUsers == null || lcUsers.Count == 0) {
                throw new Exception(NO_USER_FOUND);
            }

            return lcUsers.First() as TDSUser;
        }

        private static string GenerateShareLink(string roleName, string funcName, string id, Dictionary<string, object> queries) {
            Dictionary<string, object> ext = new Dictionary<string, object> {
                { "func", funcName },
                { "identity", id }
            };
            if (roleName != null) {
                ext["role_name"] = roleName;
            }

            Dictionary<string, object> ps = new Dictionary<string, object> {
                { "ext", Convert.ToBase64String(Encoding.UTF8.GetBytes(JsonConvert.SerializeObject(ext))) }
            };
            if (roleName != null) {
                ps["role_name"] = roleName;
            }

            Dictionary<string, object> queryParams = new Dictionary<string, object>();
            queryParams.Add("p", System.Net.WebUtility.UrlEncode(Convert.ToBase64String(Encoding.UTF8.GetBytes(JsonConvert.SerializeObject(ps)))));

            // 开发者自定义透传参数
            if (queries?.Count > 0) {
                foreach (KeyValuePair<string, object> kv in queries) {
                    queryParams.Add(System.Net.WebUtility.UrlEncode(kv.Key), System.Net.WebUtility.UrlEncode(kv.Value as string));
                }
            }

            string @params = string.Join("&", queryParams.Select(kv => $"{kv.Key}={kv.Value}"));
            return $"{shareLink}?{@params}";
        }

        protected static void AddTrackShareUri(string uri, string userId, string eventType)
        {
            if (uri == null || uri.Length == 0 || userId == null || userId.Length == 0) return;
            if (trackShareUriCache == null)
            {
                trackShareUriCache = new Dictionary<string, string>();
            }
            if (!trackShareUriCache.ContainsKey(uri))
            {
                trackShareUriCache.Add(uri, userId);
                Dictionary<string, string> values = new Dictionary<string, string>();
                values.Add("type", eventType);
                SendTrackEvent(TrackEvent.NAME_FRIEND_SHARE_LINK_CLICK, values);
            }
        }

        protected static string GetTrackShareUri(string userId)
        {
            if (userId == null || userId.Length == 0) return null;
            if (trackShareUriCache != null)
            {
                foreach (var entry in trackShareUriCache)
                {
                    if (entry.Value.Equals(userId))
                    {
                        return entry.Key;
                    }
                }
            }
            return null;
        }

        protected static void RemoveTrackShareUri(string uri)
        {
            if (uri == null || uri.Length == 0) return;
            if (trackShareUriCache != null)
            {
                trackShareUriCache.Remove(uri);
            }
        }

        protected static void SendTrackEvent(string eventName, Dictionary<string, string> values)
        {
            if (eventName == null || eventName.Length == 0) return;
            Dictionary<string, object> data = new Dictionary<string, object> {
                { "event", eventName },
                { "kv", values }
            };
             LCCore.HttpClient.Post<Dictionary<string, object>>("friend/v1/monitor/logging",
                data: data,
                withAPIVersion: false);
           
        }
    }
}
