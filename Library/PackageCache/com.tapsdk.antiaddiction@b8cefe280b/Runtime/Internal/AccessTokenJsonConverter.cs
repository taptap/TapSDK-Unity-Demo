using System;
using System.Collections.Generic;
using System.Linq;
using LC.Newtonsoft.Json;
using LC.Newtonsoft.Json.Linq;
using TapTap.Login;

namespace TapTap.AntiAddiction.Internal {
    public class AccessTokenJsonConverter : JsonConverter
    {
        private readonly Type[] _types;

        public AccessTokenJsonConverter(params Type[] types)
        {
            _types = types;
        }

        public override void WriteJson(JsonWriter writer, object val, JsonSerializer serializer) {
            if (val.GetType() != typeof(AccessToken)) return;
            var accessToken = (AccessToken) val;
            JToken t = JToken.FromObject(accessToken);

            if (t.Type != JTokenType.Object)
            {
                t.WriteTo(writer);
            }
            else
            {
                JObject o = (JObject)t;
                var scopeKey = "scope";
                if (o.ContainsKey(scopeKey)) {
                    o.Remove(scopeKey);
                }
                if (accessToken.scopeSet != null) {
                    var scopeStr = string.Join(" ", accessToken.scopeSet);
                    o.Add(new JProperty(scopeKey, scopeStr));
                }
                
                o.WriteTo(writer);
            }
        }

        public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer)
        {
            throw new NotImplementedException("Unnecessary because CanRead is false. The type will skip the converter.");
        }

        public override bool CanRead
        {
            get { return false; }
        }

        public override bool CanConvert(Type objectType)
        {
            return _types.Any(t => t == objectType);
        }
    }
}