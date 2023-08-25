using System.Collections.Generic;
using TapTap.Common;

namespace TapTap.Moment.Mobile
{
    public class MomentCallbackBean
    {
        public int code;

        public string message;

        public MomentCallbackBean(string json)
        {
            Dictionary<string, object> dic = Json.Deserialize(json) as Dictionary<string, object>;
            code = SafeDictionary.GetValue<int>(dic, "code");
            message = SafeDictionary.GetValue<string>(dic, "message");
        }
    }
}