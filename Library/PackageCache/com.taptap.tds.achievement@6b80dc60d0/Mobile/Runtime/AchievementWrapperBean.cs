using System.Collections.Generic;
using TapTap.Common;

namespace TapTap.Achievement.Mobile
{
    public class AchievementWrapperBean
    {
        public TapAchievementBean achievementModel;

        public TapError error;

        public bool initCallback;

        public AchievementWrapperBean(string json)
        {
            var dic = Json.Deserialize(json) as Dictionary<string, object>;
            initCallback = Platform.IsAndroid()
                ? SafeDictionary.GetValue<bool>(dic, "initCallback")
                : SafeDictionary.GetValue<int>(dic, "initCallback") == 1;
            
            var errorJson = SafeDictionary.GetValue<string>(dic, "error");

            if (!string.IsNullOrEmpty(errorJson))
            {
                error = new TapError(errorJson);
            }

            if (dic != null && dic.ContainsKey("achievementModel"))
            {
                var achievementModelDic = SafeDictionary.GetValue<Dictionary<string, object>>(dic, "achievementModel");
                achievementModel = achievementModelDic == null ? null : new TapAchievementBean(achievementModelDic);
            }
        }
    }

    public class AchievementListWrapperBean
    {
        public List<TapAchievementBean> list;

        public TapError error;

        public AchievementListWrapperBean(string json)
        {
            var dic = Json.Deserialize(json) as Dictionary<string, object>;
            var listObj = SafeDictionary.GetValue<List<object>>(dic, "list");
            var errorJson = SafeDictionary.GetValue<string>(dic, "error");
            list = new List<TapAchievementBean>();
            if (listObj != null && listObj.Count > 0)
            {
                foreach (var entry in listObj)
                {
                    list.Add(new TapAchievementBean(entry as Dictionary<string, object>));
                }
            }

            if (!string.IsNullOrEmpty(errorJson))
            {
                error = new TapError(errorJson);
            }
        }
    }
}