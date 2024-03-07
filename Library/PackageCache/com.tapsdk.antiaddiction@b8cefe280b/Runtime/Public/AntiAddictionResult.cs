using System;
using LC.Newtonsoft.Json;

namespace Plugins.AntiAddictionUIKit
{
    public class ComplianceCodeData {
        [JsonProperty("name")]
        public string Name { get; set; }

        [JsonProperty("idcard")]
        public string Idcard { get; set; }

        [JsonProperty("code")]
        public string Code { get; set; }
    }
    
    public class ComplianceCodeResponse {
        [JsonProperty("data")]
        public ComplianceCodeData Data { get; set; }
    }
    
    [Serializable]
    public class CheckPayResult
    {
        public int status;
        public string title;
        public string description;
    }

    [Serializable]
    public class AntiAddictionCallbackOriginData
    {
        public int code;
        public string extras;
    }

    [Serializable]
    public class AntiAddictionCallbackData
    {
        public int code;
        public MsgExtraParams extras;
    }

    [Serializable]
    public class IdetntifyState
    {
        public int authState;

        public string antiAddictionToken;

        public int ageLimit;
    }

    [Serializable]
    public class IdentifyResult
    {
        public int identifyState;
    }

    [Serializable]
    public class MsgExtraParams
    {
        public int userType = -1;
        // public int limit_tip_type;
        public int strict_type;
        public string description = "";
        public string title = "";
        public bool forceOpen;
        public long remainTime;
        public int extraSource;
        public int promptType;
        public int restrictType;
    }

    [Serializable]
    public class CheckPayResultParams { 
        public int success;
        public int status;
        public string title;
        public string description;

        public bool Success => success == 0;
    }

    [Serializable]
    public class SubmitPayResultParams
    {
    }
}