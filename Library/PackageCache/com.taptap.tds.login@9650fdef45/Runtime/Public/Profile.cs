using System.Collections.Generic;
using TapTap.Common;
using UnityEngine;

namespace TapTap.Login
{
    public class Profile
    {
        public string name;

        public string avatar;

        public string openid;

        public string unionid;

        public string email;
        
        public bool emailVerified;

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