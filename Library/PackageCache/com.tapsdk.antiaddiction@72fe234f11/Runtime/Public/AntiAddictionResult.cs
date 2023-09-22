using System;

namespace Plugins.AntiAddictionUIKit
{
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
        public string limit_tip_type = "";
        public string strict_type = "";
        public string description = "";
        public string title = "";
    }

    [Serializable]
    public class CheckPayResultParams
    {
        public int status;
        public string title;
        public string description;
    }

    [Serializable]
    public class SubmitPayResultParams
    {
    }
}