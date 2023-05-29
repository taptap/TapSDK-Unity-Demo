using System.Linq;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeanCloud.Common;
using LeanCloud.Storage.Internal.Object;
using TapTap.Bootstrap;

using ThirdPartyFriendRequestCachePolicy = TapTap.Friends.Internal.TDSFriendCore.ThirdPartyFriendRequestCachePolicy;
using SortCondition = TapTap.Friends.Internal.TDSFriendCore.SortCondition;

namespace TapTap.Friends.Internal {
    public class ThirdPartyFriendCache {
        private const int CACHE_MAX_COUNT = 20;

        private static Dictionary<string, ThirdPartyFriendResult> cache;
        private static Dictionary<string, int> cacheCounters;

        private static Dictionary<string, ThirdPartyFriendResult> Cache {
            get {
                if (cache == null) {
                    cache = new Dictionary<string, ThirdPartyFriendResult>();
                }
                return cache;
            }
        }

        private static Dictionary<string, int> CacheCounters {
            get {
                if (cacheCounters == null) {
                    cacheCounters = new Dictionary<string, int>();
                }
                return cacheCounters;
            }
        }

        public static async Task<ThirdPartyFriendResult> QueryThirdPartyFriendList(string path,
            string platfrom,
            string cursor,
            int size,
            ThirdPartyFriendRequestCachePolicy cachePolicy,
            SortCondition condition) {

            string key = $"{path}{platfrom}{cursor}{size}{condition}";

            if (cachePolicy == ThirdPartyFriendRequestCachePolicy.CacheElseNetwork) {
                if (Cache.TryGetValue(key, out ThirdPartyFriendResult result)) {
                    CacheCounters[key]++;
                    return result;
                }
            }

            Dictionary<string, object> queryParams = new Dictionary<string, object> {
                { "platform", platfrom },
                { "limit", size },
            };
            if (cursor != null) {
                queryParams["skip"] = cursor;
            }
            if (condition != null) {
                queryParams["sort_field"] = condition.ToString();
            }
            Dictionary<string, object> response = await LCCore.HttpClient.Get<Dictionary<string, object>>(path,
                queryParams: queryParams,
                withAPIVersion: false);
            if (response.TryGetValue("results", out object resultObj) &&
                resultObj is List<object> results) {
                ThirdPartyFriendResult result = new ThirdPartyFriendResult {
                    FriendList = results.Cast<Dictionary<string, object>>()
                        .Select(item => {
                            ThirdPartyFriend friend = new ThirdPartyFriend {
                                Id = item.TryGetValue("thirdPartyId", out object idObj) && (idObj is string id) ?
                                    id : null,
                                Name = item.TryGetValue("nickname", out object nicknameObj) && (nicknameObj is string nickname) ?
                                    nickname : null,
                                Avatar = item.TryGetValue("avatar", out object avatarObj) && (avatarObj is string avatar) ?
                                    avatar : null,
                            };
                            TDSFriendInfo friendInfo = new TDSFriendInfo();
                            if (item.TryGetValue("tdsUser", out object userObj) &&
                                userObj is Dictionary<string, object> userDict) {
                                TDSUser user = TDSUser.Create(TDSUser.CLASS_NAME) as TDSUser;
                                user.Merge(LCObjectData.Decode(userDict));
                                friendInfo.User = user;
                            }
                            if (item.TryGetValue("online", out object onlineObj) &&
                                onlineObj is bool online) {
                                friendInfo.Online = online;
                            }
                            if (item.TryGetValue("richPresence", out object richPresenceObj) &&
                                richPresenceObj is Dictionary<string, object> richPresence) {
                                friendInfo.RichPresence = richPresence?.ToDictionary(it => it.Key, it => it.Value as string);
                            }
                            if (friendInfo.User != null) {
                                friend.FriendInfo = friendInfo;
                            }
                            return friend;
                        }).ToList().AsReadOnly(),
                    Cursor = response.TryGetValue("isLastPage", out object isLastPageObj) &&
                        isLastPageObj is bool isLastPage &&
                        !isLastPage ?
                        (response.TryGetValue("nextSkip", out object nextSkipObj) &&
                        (nextSkipObj is string nextSkip) ?
                        nextSkip : null) : null
                };
                
                Cache[key] = result;
                CacheCounters[key] = CacheCounters.TryGetValue(key, out int count) ? count + 1 : 1;

                // LRU
                if (Cache.Count > CACHE_MAX_COUNT) {
                    IEnumerable<string> toDeleteKeys = CacheCounters.OrderBy(kv => kv.Value)
                        .Take(CacheCounters.Count - CACHE_MAX_COUNT)
                        .Select(kv => kv.Key);
                    foreach (string k in toDeleteKeys) {
                        Cache.Remove(k);
                        CacheCounters.Remove(k);
                    }
                }

                return result;
            }
            return null;
        }

        public static void Clear() {
            cache?.Clear();
            cacheCounters?.Clear();
        }
    }
}
