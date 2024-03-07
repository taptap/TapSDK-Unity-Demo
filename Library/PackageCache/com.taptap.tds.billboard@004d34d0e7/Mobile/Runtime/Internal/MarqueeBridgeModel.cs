using LC.Newtonsoft.Json;

namespace TapTap.Billboard.Mobile {
    public class MarqueeBridgeModel {
        [JsonProperty("id")]
        public int Id { get; set; }

        [JsonProperty("type")]
        public string Type { get; set; }

        [JsonProperty("content")]
        public string Content { get; set; }

        [JsonProperty("template")]
        public string Template { get; set; }

        [JsonProperty("shortTitle")]
        public string ShortTitle { get; set; }

        [JsonProperty("longTitle")]
        public string LongTitle { get; set; }

        [JsonProperty("jumpLocation")]
        public string JumpLocation { get; set; }

        [JsonProperty("jumpLink")]
        public string JumpLink { get; set; }

        [JsonProperty("publishTime")]
        public long PublishTime { get; set; }

        [JsonProperty("expireTime")]
        public long ExpireTime { get; set; }
    }
}