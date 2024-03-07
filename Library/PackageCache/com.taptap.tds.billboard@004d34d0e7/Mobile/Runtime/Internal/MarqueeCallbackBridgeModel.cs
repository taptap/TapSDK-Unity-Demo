using LC.Newtonsoft.Json;

namespace TapTap.Billboard.Mobile {
    public class MarqueeCallbackBridgeModel {
        [JsonProperty("onShow")]
        public int OnShow { get; set; }

        [JsonProperty("onClose")]
        public int OnClose { get; set; }

        [JsonProperty("marquee")]
        public MarqueeBridgeModel Marquee { get; set; }

        [JsonProperty("marqueeConfig")]
        public MarqueeConfigBridgeModel MarqueeConfig { get; set; }
    }
}