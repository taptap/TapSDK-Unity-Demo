using System;
using System.Collections.Generic;

namespace TapTap.Common
{
    public class TapError
    {
        public int code;

        public string errorDescription;

        public TapError(string json)
        {
            if (string.IsNullOrEmpty(json))
            {
                return;
            }

            var dic = Json.Deserialize(json) as Dictionary<string, object>;
            code = SafeDictionary.GetValue<int>(dic, "code");
            errorDescription = SafeDictionary.GetValue<string>(dic, "error_description");
        }

        public TapError()
        {
        }

        public static TapError SafeConstructorTapError(string json)
        {
            return string.IsNullOrEmpty(json) ? null : new TapError(json);
        }

        public static TapError UndefinedError()
        {
            return new TapError(TapErrorCode.ERROR_CODE_UNDEFINED, "UnKnown Error");
        }

        public static TapError LoginCancelError()
        {
            return new TapError(TapErrorCode.ERROR_CODE_LOGIN_CANCEL, "Login Cancel");
        }

        public TapError(int code, string errorDescription)
        {
            this.code = code;
            this.errorDescription = errorDescription;
        }

        private static TapErrorCode ParseCode(int parseCode)
        {
            return Enum.IsDefined(typeof(TapErrorCode), parseCode)
                ? (TapErrorCode) Enum.ToObject(typeof(TapErrorCode), parseCode)
                : TapErrorCode.ERROR_CODE_UNDEFINED;
        }

        public TapError(TapErrorCode code, string errorDescription)
        {
            this.code = (int) code;
            this.errorDescription = errorDescription;
        }
    }
}