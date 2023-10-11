using System;
using System.Collections.Generic;
using LeanCloud.Storage.Internal.Object;
using System.Collections.ObjectModel;
using System.Threading.Tasks;
using TapTap.Bootstrap.@internal;

namespace TapTap.Bootstrap
{
    public class TDSLeaderBoardRanking
    {
        public string StatisticName
        {
            get; internal set;
        }

        public int StatisticValue
        {
            get; internal set;
        }

        public int Rank
        {
            get; internal set;
        }

        public TDSUser User
        {
            get; internal set;
        }

        internal TDSLeaderBoardRanking(Dictionary<string,object> data)
        {
            
            StatisticName = data["statisticName"] as string;
            StatisticValue = Convert.ToInt32(data["statisticValue"]);
            Rank = Convert.ToInt32(data["rank"]);
            TDSUser tdsUser = TDSUser.Create(TDSUser.CLASS_NAME) as TDSUser;
            if (data.TryGetValue("user", out object userObj) &&
                                userObj is Dictionary<string, object> userDict)
            {
                tdsUser.Merge(LCObjectData.Decode(userDict));
            }
            User = tdsUser;

        }

        public static async Task<ReadOnlyCollection<TDSLeaderBoardRanking>> QueryTapFriendsLeaderBoard(string name,
            int from, int limit)
        {
            return await TDSLeaderBoardRankingService.QueryList(name, from, limit);
        }
    }
}
