using System.Collections.Generic;
using TapTap.Common;

namespace TapTap.Login.Mobile
{
    public class TapLoginWrapper
    {
        public string Wrapper;

        public int LoginCallbackCode;

        public TapLoginWrapper(string json)
        {
            var dic = Json.Deserialize(json) as Dictionary<string, object>;
            Wrapper = SafeDictionary.GetValue<string>(dic, "wrapper");
            LoginCallbackCode = SafeDictionary.GetValue<int>(dic, "loginCallbackCode");
        }
    }
}