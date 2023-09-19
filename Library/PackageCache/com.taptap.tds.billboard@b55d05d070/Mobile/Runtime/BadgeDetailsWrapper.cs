using System.Collections.Generic;
using TapTap.Common;
using UnityEngine;

namespace TapTap.Billboard.Mobile
{
    public class BadgeDetailsWrapper
    {
        public BadgeDetails badgeDetails;

        public TapError error;

        public BadgeDetailsWrapper(string json)
        {
            var dic = Json.Deserialize(json) as Dictionary<string, object>;
            var errorJson = SafeDictionary.GetValue<string>(dic, "error");
            if (!string.IsNullOrEmpty(errorJson))
            {
                error = new TapError(errorJson);
            }
            if (dic != null && dic.ContainsKey("badgeDetails"))
            {
                badgeDetails =
                    new BadgeDetailsMobile(
                        SafeDictionary.GetValue<Dictionary<string, object>>(dic, "badgeDetails"));
            }
        }
    }
}