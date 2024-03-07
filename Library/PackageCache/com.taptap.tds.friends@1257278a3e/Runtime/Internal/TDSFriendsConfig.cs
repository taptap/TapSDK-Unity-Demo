using LC.Newtonsoft.Json;

namespace TapTap.Friends.Internal {
    public class TDSFriendsConfig {
        [JsonProperty("enabled")]
        public int Enabled {
            get; set;
        }

        [JsonProperty("webSocketUrl")]
        public string WebSocketUrl {
            get; set;
        }

        public bool NeedWebSocket => Enabled == 1;

        public TDSFriendsConfig() {
        }
    }
}
