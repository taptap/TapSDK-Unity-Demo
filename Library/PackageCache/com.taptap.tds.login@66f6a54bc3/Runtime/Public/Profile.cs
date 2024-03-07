using System.Collections.Generic;
using TapTap.Common;
using UnityEngine;
using LC.Newtonsoft.Json;

namespace TapTap.Login
{
    public class Profile
    {
        [JsonProperty("name")]
        public string name;

        [JsonProperty("gender")]
        public string gender;

        [JsonProperty("avatar")]
        public string avatar;

        [JsonProperty("openid")]
        public string openid;

        [JsonProperty("unionid")]
        public string unionid;

        [JsonIgnore]
        public string email;
        
        [JsonIgnore]
        public bool emailVerified;

        public Profile() {

        }

        public Profile(string json)
        {
            var dic = Json.Deserialize(json) as Dictionary<string, object>;
            name = SafeDictionary.GetValue<string>(dic, "name");
            avatar = SafeDictionary.GetValue<string>(dic, "avatar");
            openid = SafeDictionary.GetValue<string>(dic, "openid");
            unionid = SafeDictionary.GetValue<string>(dic, "unionid");
            email = SafeDictionary.GetValue<string>(dic, "email");
            emailVerified = SafeDictionary.GetValue<bool>(dic, "email_verified");
        }

        public string ToJson()
        {
            return JsonUtility.ToJson(this);
        }
    }
}