using LC.Newtonsoft.Json;

namespace TapTap.Billboard.Mobile {
    public class IconBridgeModel {
        [JsonProperty("url")]
        public string Url { get; set; }
    }

    public class OrientationBridgeModel {
        [JsonProperty("scrollWidthType")]
        public string ScrollWidthType { get; set; }

        [JsonProperty("scrollWidth")]
        public int ScrollWidth { get; set; }

        [JsonProperty("position")]
        public string Position { get; set; }

        [JsonProperty("horizontalOffset")]
        public int HorizontalOffset { get; set; }

        [JsonProperty("verticalOffset")]
        public int VerticalOffset { get; set; }

        [JsonProperty("horizontalScrollMargin")]
        public int HorizontalScrollMargin { get; set; }

        [JsonProperty("verticalScrollMargin")]
        public int VerticalScrollMargin { get; set; }
    }

    public class MarqueeConfigBridgeModel {
        [JsonProperty("defaultTextColor")]
        public int DefaultTextColor { get; set; }

        [JsonProperty("contentBackgroundColor")]
        public int ContentBackgroundColor { get; set; }

        [JsonProperty("useSystemFont")]
        public bool UseSystemFont { get; set; }

        [JsonProperty("customFont")]
        public string CustomFont { get; set; }

        [JsonProperty("repeatCount")]
        public int RepeatCount { get; set; }

        [JsonProperty("icon")]
        public IconBridgeModel Icon { get; set; }

        [JsonProperty("horizontal")]
        public OrientationBridgeModel Horizontal { get; set; }

        [JsonProperty("vertical")]
        public OrientationBridgeModel Vertical { get; set; }
    }
}
