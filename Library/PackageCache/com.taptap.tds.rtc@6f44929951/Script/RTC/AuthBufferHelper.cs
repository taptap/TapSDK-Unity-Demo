using System;
using System.Collections.Generic;
using System.Security.Cryptography;
using System.Text;

namespace TapTap.RTC
{
    public class AuthBufferHelper
    {
        public static string GenToken(string appId, string roomId, string userId, string key)
        {
            var dic = new Dictionary<string, object>
            {
                ["userId"] = userId,
                ["appId"] = appId,
                ["roomId"] = roomId,
                ["expireAt"] = 3339685621
            };
            var json = Json.Serialize(dic);
            return HMAC_SHA1_Encrypt(Convert.ToBase64String(Encoding.UTF8.GetBytes(json)),
                Convert.ToBase64String(Encoding.UTF8.GetBytes(key)));
        }

        public static String HMAC_SHA1_Encrypt(string json, string key)
        {
            using (var hamcsha1 = new HMACSHA1(Convert.FromBase64String(key)))
            {
                byte[] hashMessage = hamcsha1.ComputeHash(Encoding.UTF8.GetBytes(json));
                return $"{json}.{Convert.ToBase64String(hashMessage)}";
            }
        }
    }
}