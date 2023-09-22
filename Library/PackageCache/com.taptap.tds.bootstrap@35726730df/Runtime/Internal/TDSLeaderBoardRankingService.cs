using System.Threading.Tasks;
using System.Collections.Generic;
using LeanCloud.Common;
using System.Collections.ObjectModel;
using System.Linq;

namespace TapTap.Bootstrap.@internal
{
    public class TDSLeaderBoardRankingService
    {
        public TDSLeaderBoardRankingService()
        {
        }

        public static async Task<ReadOnlyCollection<TDSLeaderBoardRanking>> QueryList(string name,
            int from, int limit)
        {
            string api = "/friend/v2/taptap/leadboard";
            Dictionary<string, object> queryParams = new Dictionary<string, object>
            {
                {"type", name },
                {"skip", from },
                {"limit", limit }
            };
            Dictionary<string, object> response = await LCCore.HttpClient.Get<Dictionary<string, object>>(api,
                queryParams: queryParams, withAPIVersion: false);
            if (response.TryGetValue("results", out object resultObj) && resultObj is List<object> results)
            {
                return results.Cast<Dictionary<string, object>>()
                    .Select(item => {
                        return new TDSLeaderBoardRanking(item);
                    }).ToList().AsReadOnly();
            }
            else
            {
                return null;
            }
            
        }
    }
}
