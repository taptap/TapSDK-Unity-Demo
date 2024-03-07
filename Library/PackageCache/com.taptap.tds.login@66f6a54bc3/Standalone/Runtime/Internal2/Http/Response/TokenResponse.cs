using System.Collections.Generic;
using LC.Newtonsoft.Json;

namespace TapTap.Login.Internal.Http {
    public class TokenData {
        [JsonProperty("kid")]
        public string Kid { get; set; }

        [JsonProperty("access_token")]
        public string Token { get; set; }

        [JsonProperty("token_type")]
        public string TokenType { get; set; }

        [JsonProperty("mac_key")]
        public string MacKey { get; set; }

        [JsonProperty("mac_algorithm")]
        public string MacAlgorithm { get; set; }

        [JsonProperty("scope")]
        public string Scope { get; set; }

        [JsonIgnore]
        public HashSet<string> Scopes => !string.IsNullOrEmpty(Scope) ? 
            new HashSet<string>(Scope.Split(' ')) : new HashSet<string>();
    }

    public class TokenResponse {
        [JsonProperty("data")]
        public TokenData Data { get; set; }
    }
}
