using System;
using System.Collections.Generic;
using TapTap.Common;
using UnityEngine;
using LC.Newtonsoft.Json;

namespace TapTap.Login
{
    public class AccessToken
    {
        [JsonProperty("kid")]
        public string kid;

        [JsonProperty("access_token")]
        public string accessToken;

        [JsonProperty("token_type")]
        public string tokenType;

        [JsonProperty("mac_key")]
        public string macKey;

        [JsonProperty("mac_algorithm")]
        public string macAlgorithm;

        [JsonProperty("scope")]
        public HashSet<string> scopeSet;

        public AccessToken(string json)
        {
            if (string.IsNullOrEmpty(json))
            {
                return;
            }
            var dic = Json.Deserialize(json) as Dictionary<string, object>;
            kid = SafeDictionary.GetValue<string>(dic, "kid");
            accessToken = SafeDictionary.GetValue<string>(dic, "access_token");
            tokenType = SafeDictionary.GetValue<string>(dic, "token_type");
            macKey = SafeDictionary.GetValue<string>(dic, "mac_key");
            macAlgorithm = SafeDictionary.GetValue<string>(dic, "mac_algorithm");
            string scopeStr = SafeDictionary.GetValue<string>(dic, "scope");
            if (string.IsNullOrEmpty(scopeStr))
            {
                scopeSet = new HashSet<string>();
            }
            else
            {
                try
                {
                    scopeSet = new HashSet<string>(scopeStr.Split(' '));
                }
                catch (Exception e)
                {
                    scopeSet = new HashSet<string>();
                }
            }
        }

        public AccessToken()
        {
            
        }

        public string ToJson()
        {
            return JsonUtility.ToJson(this);
        }
    }
}