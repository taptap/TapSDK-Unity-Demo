using System;
using System.Collections.Generic;
using TapTap.Common;

namespace TapTap.Billboard.Mobile
{
    public class OutputStateResultWrapper
    {
        public const string TYPE_VOICE = "VOICE";

        private readonly string type;

        private readonly bool isPlay;

        public readonly TapError error;

        public OutputStateResultWrapper(string json)
        {
            var dic = Json.Deserialize(json) as Dictionary<string, object>;
            var errorJson = SafeDictionary.GetValue<string>(dic, "error");
            if (!string.IsNullOrEmpty(errorJson))
            {
                error = new TapError(errorJson);
            }

            type = TYPE_VOICE;

            if (dic != null && dic.ContainsKey("onVoice"))
            {
                {
                    isPlay = SafeDictionary.GetValue<int>(dic, "onVoice") > 0;

                }

            }
        }

        public bool IsVoiceState()
        {
            return type.Equals(TYPE_VOICE);
        }

        public bool IsPlaying()
        {
            return isPlay;
        }
    }
}
