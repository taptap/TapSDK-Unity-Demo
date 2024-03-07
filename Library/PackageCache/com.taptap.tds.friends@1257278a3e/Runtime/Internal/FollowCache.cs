using System.Linq;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeanCloud.Common;
using LeanCloud.Storage.Internal.Object;
using TapTap.Bootstrap;

using SortCondition = TapTap.Friends.Internal.TDSFriendCore.SortCondition;

namespace TapTap.Friends.Internal {
    public class FollowCache {
        public static async Task<FriendResult> QueryList(string path,
            string cursor,
            int size,
            SortCondition condition) {

            string key = $"{path}{cursor}{size}{condition?.ToString()}";

            Dictionary<string, object> queryParams = new Dictionary<string, object> {
                { "limit", size }
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
                FriendResult result = new FriendResult {
                    FriendList = results.Cast<Dictionary<string, object>>()
                        .Select(item => {
                            TDSUser user = TDSUser.Create(TDSUser.CLASS_NAME) as TDSUser;
                            if (item.TryGetValue("tdsUser", out object userObj) &&
                                userObj is Dictionary<string, object> userDict) {
                                user.Merge(LCObjectData.Decode(userDict));
                            }
                            TDSFriendInfo friendInfo = new TDSFriendInfo {
                                User = user,
                                Online = item.TryGetValue("online", out object onlineObj) &&
                                    (onlineObj is bool online) ?
                                    online : false,
                                RichPresence = item.TryGetValue("richPresence", out object presenceObj) &&
                                    (presenceObj is Dictionary<string, object> presence) ?
                                    presence.ToDictionary(it => it.Key, it => it.Value as string) : null
                            };
                            return friendInfo;
                        })
                        .ToList()
                        .AsReadOnly(),
                    Cursor = response.TryGetValue("isLastPage", out object isLastPageObj) &&
                        isLastPageObj is bool isLastPage &&
                        !isLastPage ?
                        (response.TryGetValue("nextSkip", out object nextSkipObj) && (nextSkipObj is string nextSkip) ? nextSkip : null)
                        : null
                };

                return result;
            }

            return null;
        }
    }
}
