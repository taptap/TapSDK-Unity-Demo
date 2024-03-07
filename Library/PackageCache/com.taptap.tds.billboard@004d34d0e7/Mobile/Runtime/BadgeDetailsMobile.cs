using System.Collections.Generic;
using TapTap.Common;

namespace TapTap.Billboard.Mobile
{
    public class BadgeDetailsMobile : BadgeDetails {
        public string closeButtonImg { get; set; }

        public int showRedDot { get; set; }

        public BadgeDetailsMobile(string json)
        {
            var dic = Json.Deserialize(json) as Dictionary<string, object>;
            closeButtonImg = SafeDictionary.GetValue<string>(dic, "closeButtonImg");
            showRedDot = SafeDictionary.GetValue<int>(dic, "showRedDot");
        }

        public BadgeDetailsMobile(Dictionary<string, object> dic)
        {
            closeButtonImg = SafeDictionary.GetValue<string>(dic, "closeButtonImg");
            showRedDot = SafeDictionary.GetValue<int>(dic, "showRedDot");
        }

        public string ToJson()
        {
            var dic = new Dictionary<string, object>
            {
                ["closeButtonImg"] = closeButtonImg,
                ["showRedDot"] = showRedDot
            };
            return Json.Serialize(dic);
        }
    }
}