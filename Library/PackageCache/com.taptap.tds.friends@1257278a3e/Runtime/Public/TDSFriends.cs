using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Threading.Tasks;
using System.Linq;
using LeanCloud.Storage;
using TapTap.Bootstrap;
using TapTap.Friends.Internal;
using LeanCloud.Common;
using LeanCloud.Storage.Internal.Object;

namespace TapTap.Friends {
    public class TDSFriends : TDSFriendCore {

        #region TDS API

        /// <summary>
        /// Adds friend.
        /// </summary>
        /// <param name="userId"></param>
        /// <param name="attrs"></param>
        /// <returns></returns>
        public static async Task AddFriend(string userId, Dictionary<string, object> attrs = null) {
            if (string.IsNullOrEmpty(userId)) {
                throw new ArgumentNullException(nameof(userId));
            }
            TDSUser current = await GetCurrentUser();
            string shareUri = GetTrackShareUri(userId);
            string source = shareUri == null ? "Game" : "ShareLink";
            try
            {
                await current.ApplyFriendship(userId, attrs);
                Dictionary<string, string> values = new Dictionary<string, string> {
                    { "source",source},
                    {"success","0" },
                    {"objUserId", userId },
                    {"sourceUserId", current.ObjectId }
                };
                SendTrackEvent(TrackEvent.NAME_SEND_FRIEND_REQUEST, values);
                RemoveTrackShareUri(shareUri);
            }
            catch(Exception e)
            {
                Dictionary<string, string> values = new Dictionary<string, string> {
                    { "source",source},
                    {"success","-1" },
                    {"objUserId", userId },
                    {"sourceUserId", current.ObjectId },
                    {"error", e.Message ?? "unknow" }
                };
                SendTrackEvent(TrackEvent.NAME_SEND_FRIEND_REQUEST, values);
                throw e;
            }
        }

        /// <summary>
        /// Adds friend by code.
        /// </summary>
        /// <param name="code"></param>
        /// <param name="attrs"></param>
        /// <returns></returns>
        public static async Task AddFriendByShortCode(string code, Dictionary<string, object> attrs = null) {
            LCUser user = await GetUserByCode(code);

            await AddFriend(user.ObjectId, attrs);
        }

        /// <summary>
        /// Queries the friend requests.
        /// </summary>
        /// <param name="status"></param>
        /// <param name="from"></param>
        /// <param name="limit"></param>
        /// <returns></returns>
        public static async Task<ReadOnlyCollection<LCFriendshipRequest>> QueryFriendRequestList(int status, int from, int limit) {
            TDSUser current = await GetCurrentUser();
            LCQuery<LCFriendshipRequest> query = current.GetFriendshipRequestQuery(status, true, true)
                .Skip(from)
                .Limit(limit);
            return await query.Find();
        }

        /// <summary>
        /// Queries TDS friend requests.
        /// </summary>
        /// <param name="status"></param>
        /// <param name="from"></param>
        /// <param name="limit"></param>
        /// <returns></returns>
        public static async Task<ReadOnlyCollection<TDSFriendshipRequest>> QueryFriendRequestWithFriendStateList(int status, int from, int limit) {
            ReadOnlyCollection<LCFriendshipRequest> lcRequests = await QueryFriendRequestList(status, from, limit);
            List<TDSFriendshipRequest> requests = lcRequests.Select(req => new TDSFriendshipRequest { FriendshipRequest = req })
                .ToList();
            IEnumerable<string> ids = requests.Select(req => req.FriendshipRequest.User.ObjectId);
            ReadOnlyCollection<TDSRichPresence> richPresences = await QueryRichPresences(ids);
            if (richPresences != null &&
                lcRequests.Count == richPresences.Count) {
                for (int i = 0; i < lcRequests.Count; i++) {
                    TDSFriendshipRequest req = requests[i];
                    TDSRichPresence presence = richPresences[i];
                    req.FriendInfo = new TDSFriendInfo {
                        User = req.FriendshipRequest.User as TDSUser,
                        Online = presence.Online,
                        RichPresence = presence.RichPresence?.ToDictionary(kv => kv.Key, kv => kv.Value as string)
                    };
                }
            }
            return requests.AsReadOnly();
        }

        /// <summary>
        /// Accepts the friend request.
        /// </summary>
        /// <param name="request"></param>
        /// <returns></returns>
        public static async Task AcceptFriendshipRequest(LCFriendshipRequest request, Dictionary<string, object> attrs = null) {
            TDSUser current = await GetCurrentUser();
            await current.AcceptFriendshipRequest(request, attrs);
        }

        /// <summary>
        /// Declines the friend request.
        /// </summary>
        /// <param name="request"></param>
        /// <returns></returns>
        public static async Task DeclineFriendshipRequest(LCFriendshipRequest request) {
            TDSUser current = await GetCurrentUser();
            await current.DeclineFriendshipRequest(request);
        }

        /// <summary>
        /// Deletes the friend request.
        /// </summary>
        /// <param name="request"></param>
        /// <returns></returns>
        public static async Task DeleteFriendshipRequest(LCFriendshipRequest request) {
            TDSUser current = await GetCurrentUser();
            await current.DeleteFriendshipRequest(request);
        }

        /// <summary>
        /// Deletes friend.
        /// </summary>
        /// <param name="targetId"></param>
        /// <returns></returns>
        public static async Task DeleteFriend(string targetId) {
            if (string.IsNullOrEmpty(targetId)) {
                throw new ArgumentNullException(nameof(targetId));
            }
            TDSUser current = await GetCurrentUser();
            await current.Unfollow(targetId);
        }

        /// <summary>
        /// Queries the friends of current user.
        /// </summary>
        /// <returns></returns>
        public static async Task<ReadOnlyCollection<TDSFriendInfo>> QueryFriendList(int from, int limit) {
            string path = "friend/v2/friends-list";
            Dictionary<string, object> queryParams = new Dictionary<string, object> {
                { "skip", from },
                { "limit", limit }
            };
            Dictionary<string, object> response = await LCCore.HttpClient.Get<Dictionary<string, object>>(path, 
                queryParams: queryParams, withAPIVersion: false);
            if (response.TryGetValue("results", out object resultsObj) &&
                resultsObj is List<object> results) {
                return results.Select(result => {
                    TDSFriendInfo friendInfo = new TDSFriendInfo();
                    if (result is Dictionary<string, object> data) {
                        if (data.TryGetValue("tdsUser", out object userObj) &&
                            (userObj is Dictionary<string, object> userData)) {
                            TDSUser user = new TDSUser();
                            LCObjectData objectData = LCObjectData.Decode(userData);
                            user.Merge(objectData);
                            friendInfo.User = user;
                        }
                        friendInfo.Online = data.TryGetValue("online", out object onlineObj) &&
                                    (onlineObj is bool online) && online;
                        friendInfo.RichPresence = data.TryGetValue("richPresence", out object presenceObj) &&
                            (presenceObj is Dictionary<string, object> presence) ?
                            presence.ToDictionary(kv => kv.Key, kv => kv.Value as string) : null;
                    }
                    return friendInfo;
                }).ToList().AsReadOnly();
            }

            return new List<TDSFriendInfo>().AsReadOnly();
        }

        /// <summary>
        /// Checks someone is the friend of current user.
        /// </summary>
        /// <param name="userId"></param>
        /// <returns></returns>
        public static async Task<bool> CheckFriendship(string userId) {
            TDSUser current = await GetCurrentUser();
            LCQuery<LCObject> query = current.GetFriendshipQuery();
            query.WhereEqualTo("followee", TDSUser.CreateWithoutData(TDSUser.CLASS_NAME, userId));
            return await query.Count() > 0;
        }

        /// <summary>
        /// Checks someone is the friend of current user by code.
        /// </summary>
        /// <param name="code"></param>
        /// <returns></returns>
        public static async Task<bool> CheckFriendshipByShortCode(string code) {
            await GetCurrentUser();
            TDSFriendInfo friendInfo = await SearchUserByShortCode(code);

            if (friendInfo == null) {
                return false;
            }

            return await CheckFriendship(friendInfo.User.ObjectId);
        }

        /// <summary>
        /// Parses the url of friend invitation.
        /// </summary>
        /// <param name="url"></param>
        /// <returns></returns>
        new public static TDSFriendLinkInfo ParseFriendInvitationLink(string url)
        {
            TDSFriendLinkInfo info = TDSFriendCore.ParseFriendInvitationLink(url);
            if(info != null)
            {
                AddTrackShareUri(url, info.Identity, TrackEvent.TYPE_SEND_FRIEND_REQUEST);
            }
            return info;
        }

        /// <summary>
        /// Handles the url of friend invitation.
        /// </summary>
        /// <param name="url"></param>
        /// <returns></returns>
        public static Task HandleFriendInvitationLink(string url) {
            Dictionary<string, object> ext = ParseFriendInvitationLink(url);

            string userId = ext["identity"] as string;

            return AddFriend(userId);
        }

        /// <summary>
        /// Blocks the user.
        /// </summary>
        /// <param name="userId"></param>
        /// <returns></returns>
        public static Task BlockFriend(string userId) {
            return LCFriendship.BlockFriend(userId);
        }

        /// <summary>
        /// Unblocks the user.
        /// </summary>
        /// <param name="userId"></param>
        /// <returns></returns>
        public static Task UnblockFriend(string userId) {
            return LCFriendship.UnblockFriend(userId);
        }

        /// <summary>
        /// Queries the blocks of current user.
        /// </summary>
        /// <param name="from"></param>
        /// <param name="limit"></param>
        /// <returns></returns>
        public static async Task<ReadOnlyCollection<TDSFriendInfo>> QueryBlockList(int from, int limit) {
            TDSUser current = await GetCurrentUser();
            LCQuery<LCObject> query = current.FriendshipBlockQuery()
                .Include("blockedUser")
                .Skip(from).Limit(limit);
            ReadOnlyCollection<LCObject> blockItems = await query.Find();
            List<TDSUser> blocks = blockItems.Select(blockItem => blockItem["blockedUser"] as TDSUser).ToList();
            if (blocks == null || blocks.Count == 0) {
                return new List<TDSFriendInfo>().AsReadOnly();
            }

            return await QueryFriendInfos(blocks);
        }

        #endregion

        #region Third Party API

        /// <summary>
        /// Queries the friends of the platform.
        /// </summary>
        /// <returns></returns>
        public static Task<ThirdPartyFriendResult> QueryThirdPartyFriendList(string platform,
            string cursor = null,
            int size = 100,
            ThirdPartyFriendRequestCachePolicy cachePolicy = ThirdPartyFriendRequestCachePolicy.CacheElseNetwork,
            SortCondition condition = null) {
            return ThirdPartyFriendCache.QueryThirdPartyFriendList("friend/v1/thirdparty/mutual-list",
                platform, cursor, size, cachePolicy, condition);
        }

        #endregion
    }
}
