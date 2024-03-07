using System.Collections.Generic;
using TapTap.Common;

namespace TapTap.Payment.Mobile
{
    public class SkuDetailsWrapper
    {
        public SkuDetails skuDetails;

        public TapError error;

        public SkuDetailsWrapper(string json)
        {
            var dic = Json.Deserialize(json) as Dictionary<string, object>;
            var errorJson = SafeDictionary.GetValue<string>(dic, "error");
            if (!string.IsNullOrEmpty(errorJson))
            {
                error = new TapError(errorJson);
            }
            if (dic != null && dic.ContainsKey("skuDetails"))
            {
                skuDetails =
                    new SkuDetails(
                        SafeDictionary.GetValue<Dictionary<string, object>>(dic, "skuDetails"));
            }
        }
    }

    public class SkuDetailsListWrapper
    {
        public List<SkuDetails> list = null;

        public TapError error = null;

        public SkuDetailsListWrapper(string json)
        {
            var dic = Json.Deserialize(json) as Dictionary<string, object>;
            List<object> listObj = null;
            string errorJson = null;
            if (dic != null && dic.ContainsKey("error"))
            {
                errorJson = SafeDictionary.GetValue<string>(dic, "error");
            }

            if (!string.IsNullOrEmpty(errorJson))
            {
                error = new TapError(errorJson);
                return;
            }

            if (dic != null && dic.ContainsKey("list")) {
                listObj = SafeDictionary.GetValue<List<object>>(dic, "list");
                list = new List<SkuDetails>();
                if (listObj != null && listObj.Count > 0)
                {
                    foreach (var entry in listObj)
                    {
                        list.Add(new SkuDetails(entry as Dictionary<string, object>));
                    }
                }
            } else {
                list = null;
            }

        }
    }
}