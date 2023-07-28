using System;
using System.Collections.Generic;

namespace TapTap.RTC
{
    [Serializable]
    public class ProviderResponse
    {
        public string ProviderId { get; set; }
        public string OpenId { get; set; }

        public ProviderResponse(string json)
        {
            if (!(Json.Deserialize(json) is Dictionary<string, object> dic)) return;
            ProviderId = dic["providerId"] as string;
            OpenId = dic["userId"] as string;
        }
    }
}