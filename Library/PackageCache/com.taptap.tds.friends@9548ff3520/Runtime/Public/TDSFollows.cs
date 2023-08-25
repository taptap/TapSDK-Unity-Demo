using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using TapTap.Bootstrap;
using TapTap.Friends.Internal;
using LeanCloud.Common;
using LeanCloud.Storage;

namespace TapTap.Friends {
    public class TDSFollows : TDSFriendCore {
        private readonly static string HANDLE_RESULT_CODE = "syncCode";
        private readonly static string HANDLE_RESULT_MESSAGE = "message";

        #region TDS API

        /// <summary>
        /// Follows user.
        /// </summary>
        /// <param name="userId"></param>
        /// <param name="attrs"></param>
        /// <returns></returns>
        public static async Task<HandleResult> Follow(string userId, Dictionary<string, object> attrs = null) {
            if (string.IsNullOrEmpty(userId)) {
                throw new ArgumentNullException(nameof(userId));
            }
            TDSUser current = await GetCurrentUser();
            Dictionary<string, object> data = new Dictionary<string, object> {
                { "objectId", userId }
            };
            string shareUri = GetTrackShareUri(userId);
            string source = shareUri == null ? "Game" : "ShareLink";
            try
            {
                Dictionary<string, object> result = await LCCore.HttpClient.Post<Dictionary<string, object>>("friend/v2/follow",
                    data: data,
                    withAPIVersion: false);
                Dictionary<string, string> values = new Dictionary<string, string> {
                    { "source",source},
                    {"success","0" },
                    {"objUserId", userId },
                    {"sourceUserId", current.ObjectId }
                };
                SendTrackEvent(TrackEvent.NAME_FOLLOW, values);
                RemoveTrackShareUri(shareUri);
                return HandleResult(result);
            }catch(Exception e)
            {
                Dictionary<string, string> values = new Dictionary<string, string> {
                    { "source",source},
                    {"success","-1" },
                    {"objUserId", userId },
                    {"sourceUserId", current.ObjectId },
                    {"error", e.Message ?? "unknow" }
                };
                SendTrackEvent(TrackEvent.NAME_FOLLOW, values);
                throw e;
            }
        }

        /// <summary>
        /// Follows user by code.
        /// </summary>
        /// <param name="code"></param>
        /// <param name="attrs"></param>
        /// <returns></returns>
        public static async Task<HandleResult> FollowByShortCode(string code, Dictionary<string, object> attrs = null) {
            LCUser user = await GetUserByCode(code);
            return await Follow(user.ObjectId, attrs);
        }

        /// <summary>
        /// Unfollows user.
        /// </summary>
        /// <param name="userId"></param>
        /// <returns></returns>
        public static async Task<HandleResult> Unfollow(string userId) {
            if (string.IsNullOrEmpty(userId)) {
                throw new ArgumentNullException(nameof(userId));
            }
            if (await TDSUser.GetCurrent() == null) {
                throw new ArgumentNullException("current user");
            }

            Dictionary<string, object> data = new Dictionary<string, object> {
                { "objectId", userId }
            };
            Dictionary<string, object> result = await LCCore.HttpClient.Post<Dictionary<string, object>>("friend/v2/unfollow",
                data: data,
                withAPIVersion: false);
            return HandleResult(result);
        }

        /// <summary>
        /// Unfollows user by code.
        /// </summary>
        /// <param name="code"></param>
        /// <returns></returns>
        public static async Task<HandleResult> UnfollowByShortCode(string code) {
            LCUser user = await GetUserByCode(code);
            return await Unfollow(user.ObjectId);
        }

        /// <summary>
        /// Queries the followees.
        /// </summary>
        /// <param name="cursor"></param>
        /// <param name="size"></param>
        /// <param name="cachePolicy"></param>
        /// <param name="condition"></param>
        /// <returns></returns>
        public static Task<FriendResult> QueryFolloweeList(string cursor = null,
            int size = 100,
            SortCondition condition = null) {
            return FollowCache.QueryList("friend/v2/follow-list", cursor, size, condition);
        }

        /// <summary>
        /// Queries the followers.
        /// </summary>
        /// <param name="cursor"></param>
        /// <param name="size"></param>
        /// <param name="cachePolicy"></param>
        /// <param name="condition"></param>
        /// <returns></returns>
        public static Task<FriendResult> QueryFollowerList(string cursor = null,
            int size = 100,
            SortCondition condition = null) {
            return FollowCache.QueryList("friend/v2/fans-list", cursor, size, condition);
        }

        /// <summary>
        /// Queries the mutuals.
        /// </summary>
        /// <param name="cursor"></param>
        /// <param name="size"></param>
        /// <param name="cachePolicy"></param>
        /// <param name="condition"></param>
        /// <returns></returns>
        public static Task<FriendResult> QueryMutualList(string cursor = null,
            int size = 100,
            SortCondition condition = null) {
            return FollowCache.QueryList("friend/v2/mutual-list", cursor, size, condition);
        }

        /// <summary>
        /// Blocks user by id.
        /// </summary>
        /// <param name="objectId"></param>
        /// <returns></returns>
        public static async Task<HandleResult> Block(string objectId) {
            if (string.IsNullOrEmpty(objectId)) {
                throw new ArgumentNullException(nameof(objectId));
            }
            if (await TDSUser.GetCurrent() == null) {
                throw new ArgumentNullException("current user");
            }

            Dictionary<string, object> data = new Dictionary<string, object> {
                { "objectId", objectId }
            };
            Dictionary<string, object> result = await LCCore.HttpClient.Post<Dictionary<string, object>>("friend/v2/block",
                data: data,
                withAPIVersion: false);
            return HandleResult(result);
        }

        /// <summary>
        /// Blocks user by short code.
        /// </summary>
        /// <param name="code"></param>
        /// <returns></returns>
        public static async Task<HandleResult> BlockByShortCode(string code) {
            LCUser user = await GetUserByCode(code);
            return await Block(user.ObjectId);
        }

        /// <summary>
        /// Unblocks user by id.
        /// </summary>
        /// <param name="objectId"></param>
        /// <returns></returns>
        public static async Task<HandleResult> Unblock(string objectId) {
            if (string.IsNullOrEmpty(objectId)) {
                throw new ArgumentNullException(nameof(objectId));
            }
            if (await TDSUser.GetCurrent() == null) {
                throw new ArgumentNullException("current user");
            }

            Dictionary<string, object> data = new Dictionary<string, object> {
                { "objectId", objectId }
            };
            Dictionary<string, object> result = await LCCore.HttpClient.Post<Dictionary<string, object>>("friend/v2/unblock",
                data: data,
                withAPIVersion: false);
            return HandleResult(result);
        }

        /// <summary>
        /// Unblocks user by short code.
        /// </summary>
        /// <param name="code"></param>
        /// <returns></returns>
        public static async Task<HandleResult> UnblockByShortCode(string code) {
            LCUser user = await GetUserByCode(code);
            return await Unblock(user.ObjectId);
        }

        /// <summary>
        /// Queries the blocks.
        /// </summary>
        /// <param name="cursor"></param>
        /// <param name="size"></param>
        /// <param name="condition"></param>
        /// <returns></returns>
        public static Task<FriendResult> QueryBlockList(string cursor = null,
            int size = 100,
            SortCondition condition = null) {
            return FollowCache.QueryList("friend/v2/block-list", cursor, size, condition);
        }


        /// <summary>
        /// Parses the url of friend invitation.
        /// </summary>
        /// <param name="url"></param>
        /// <returns></returns>
        new public static TDSFriendLinkInfo ParseFriendInvitationLink(string url)
        {
            TDSFriendLinkInfo info = TDSFriendCore.ParseFriendInvitationLink(url);
            if (info != null)
            {
                AddTrackShareUri(url, info.Identity, TrackEvent.TYPE_FOLLOW);
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

            return Follow(userId);
        }

        #endregion

        private static HandleResult HandleResult(Dictionary<string, object> result) {
            return new HandleResult {
                Code = result.TryGetValue(HANDLE_RESULT_CODE, out object codeObj) &&
                    codeObj is int code ?
                    code : 0,
                Message = result.TryGetValue(HANDLE_RESULT_MESSAGE, out object messageObj) &&
                    messageObj is string message ?
                    message : null
            };
        }

        #region Third Party API

        /// <summary>
        /// Follows tap user.
        /// </summary>
        /// <param name="user"></param>
        /// <returns></returns>
        public static Task FollowTapUser(TDSUser user) {
            return FollowTapUserById(user?.ObjectId);
        }

        /// <summary>
        /// Follows tap user.
        /// </summary>
        /// <param name="objectId"></param>
        /// <returns></returns>
        public static async Task FollowTapUserById(string objectId) {
            if (string.IsNullOrEmpty(objectId)) {
                throw new ArgumentNullException(nameof(objectId));
            }

            string path = "friend/v1/thirdparty/follow";
            Dictionary<string, object> data = new Dictionary<string, object> {
                { "platform", "taptap" },
                { "objectId", objectId }
            };
            await LCCore.HttpClient.Post<Dictionary<string, object>>(path,
                data: data,
                withAPIVersion: false);
        }

        /// <summary>
        /// Follows tap user by code.
        /// </summary>
        /// <param name="code"></param>
        /// <returns></returns>
        public static async Task FollowTapUserByShortCode(string code) {
            TDSUser user = await GetUserByCode(code);
            await FollowTapUser(user);
        }

        /// <summary>
        /// Unfollows tap user.
        /// </summary>
        /// <param name="user"></param>
        /// <returns></returns>
        public static Task UnfollowTapUser(TDSUser user) {
            return UnfollowTapUserById(user?.ObjectId);
        }

        /// <summary>
        /// Unfollows tap user.
        /// </summary>
        /// <param name="objectId"></param>
        /// <returns></returns>
        public static async Task UnfollowTapUserById(string objectId) {
            if (string.IsNullOrEmpty(objectId)) {
                throw new ArgumentNullException(nameof(objectId));
            }

            string path = "friend/v1/thirdparty/unfollow";
            Dictionary<string, object> data = new Dictionary<string, object> {
                { "platform", "taptap" },
                { "objectId", objectId }
            };
            await LCCore.HttpClient.Post<Dictionary<string, object>>(path,
                data: data,
                withAPIVersion: false);
        }

        /// <summary>
        /// Unfolows tap user by code.
        /// </summary>
        /// <param name="code"></param>
        /// <returns></returns>
        public static async Task UnfollowTapUserByShortCode(string code) {
            TDSUser user = await GetUserByCode(code);
            await UnfollowTapUser(user);
        }

        /// <summary>
        /// Blocks tap user.
        /// </summary>
        /// <param name="user"></param>
        /// <returns></returns>
        public static Task BlockTapUser(TDSUser user) {
            return BlockTapUserById(user?.ObjectId);
        }

        /// <summary>
        /// Blocks tap user.
        /// </summary>
        /// <param name="objectId"></param>
        /// <returns></returns>
        public static async Task BlockTapUserById(string objectId) {
            if (string.IsNullOrEmpty(objectId)) {
                throw new ArgumentNullException(nameof(objectId));
            }

            string path = "friend/v1/thirdparty/block";
            Dictionary<string, object> data = new Dictionary<string, object> {
                { "platform", "taptap" },
                { "objectId", objectId }
            };
            await LCCore.HttpClient.Post<Dictionary<string, object>>(path,
                data: data,
                withAPIVersion: false);
        }

        /// <summary>
        /// Blocks tap user by code.
        /// </summary>
        /// <param name="code"></param>
        /// <returns></returns>
        public static async Task BlockTapUserByShortCode(string code) {
            TDSUser user = await GetUserByCode(code);
            await BlockTapUser(user);
        }

        /// <summary>
        /// Unblocks tap user.
        /// </summary>
        /// <param name="user"></param>
        /// <returns></returns>
        public static Task UnblockTapUser(TDSUser user) {
            return UnblockTapUserId(user?.ObjectId);
        }

        /// <summary>
        /// Unblocks tap user.
        /// </summary>
        /// <param name="objectId"></param>
        /// <returns></returns>
        public static async Task UnblockTapUserId(string objectId) {
            if (string.IsNullOrEmpty(objectId)) {
                throw new ArgumentNullException(nameof(objectId));
            }

            string path = "friend/v1/thirdparty/unblock";
            Dictionary<string, object> data = new Dictionary<string, object> {
                { "platform", "taptap" },
                { "objectId", objectId }
            };
            await LCCore.HttpClient.Post<Dictionary<string, object>>(path,
                data: data,
                withAPIVersion: false);
        }

        /// <summary>
        /// Unblocks tap user by code.
        /// </summary>
        /// <param name="code"></param>
        /// <returns></returns>
        public static async Task UnblockTapUserByShortCode(string code) {
            TDSUser user = await GetUserByCode(code);
            await UnblockTapUser(user);
        }

        /// <summary>
        /// Queries the followees of the platform.
        /// </summary>
        /// <param name="platform"></param>
        /// <param name="cursor"></param>
        /// <param name="size"></param>
        /// <param name="cachePolicy"></param>
        /// <returns></returns>
        public static Task<ThirdPartyFriendResult> QueryThirdPartyFolloweeList(string platform,
            string cursor = null,
            int size = 100,
            ThirdPartyFriendRequestCachePolicy cachePolicy = ThirdPartyFriendRequestCachePolicy.CacheElseNetwork,
            SortCondition condition = null) {
            return ThirdPartyFriendCache.QueryThirdPartyFriendList("friend/v1/thirdparty/follow-list",
                platform, cursor, size, cachePolicy, condition);
        }

        /// <summary>
        /// Queries the followers of the platform.
        /// </summary>
        /// <param name="platform"></param>
        /// <param name="cursor"></param>
        /// <param name="size"></param>
        /// <param name="cachePolicy"></param>
        /// <returns></returns>
        public static Task<ThirdPartyFriendResult> QueryThirdPartyFollowerList(string platform,
            string cursor = null,
            int size = 100,
            ThirdPartyFriendRequestCachePolicy cachePolicy = ThirdPartyFriendRequestCachePolicy.CacheElseNetwork,
            SortCondition condition = null) {
            return ThirdPartyFriendCache.QueryThirdPartyFriendList("friend/v1/thirdparty/fans-list",
                platform, cursor, size, cachePolicy, condition);
        }

        /// <summary>
        /// Queries the blocks of the platform.
        /// </summary>
        /// <param name="platform"></param>
        /// <param name="cursor"></param>
        /// <param name="size"></param>
        /// <param name="cachePolicy"></param>
        /// <returns></returns>
        public static Task<ThirdPartyFriendResult> QueryThirdPartyBlockList(string platform,
            string cursor = null,
            int size = 100,
            ThirdPartyFriendRequestCachePolicy cachePolicy = ThirdPartyFriendRequestCachePolicy.CacheElseNetwork,
            SortCondition condition = null) {
            return ThirdPartyFriendCache.QueryThirdPartyFriendList("friend/v1/thirdparty/block-list",
                platform, cursor, size, cachePolicy, condition);
        }

        /// <summary>
        /// Queries the mutuals of the platform.
        /// </summary>
        /// <param name="platform"></param>
        /// <param name="cursor"></param>
        /// <param name="size"></param>
        /// <param name="cachePolicy"></param>
        /// <param name="condition"></param>
        /// <returns></returns>
        public static Task<ThirdPartyFriendResult> QueryThirdPartyMutualList(string platform,
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
