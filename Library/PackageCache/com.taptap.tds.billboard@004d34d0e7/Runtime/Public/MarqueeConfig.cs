using UnityEngine;

namespace TapTap.Billboard {
    public class Icon {
        public string Url { get; set; }
    }

    public enum ScrollWidthType {
        Fill,
        Fixed
    }

    public enum Position {
        Top,
        TopLeft,
        TopRight,
        Bottom,
        BottomLeft,
        BottomRight
    }

    public class Orientation {
        public ScrollWidthType ScrollWidthType { get; set; } = ScrollWidthType.Fixed;

        public int ScrollWidth  { get; set; } = 300;

        public Position Position { get; set; }

        public int HorizontalOffset { get; set; } = 0;

        public int VerticalOffset { get; set; } = 0;

        public int HorizontalScrollMargin { get; set; } = 0;

        public int VerticalScrollMargin { get; set; } = 0;
    }

    public class CustomFontAssetBundle {
        public string Url { get; set; }

        public string FontResName { get; set; }
    }
    
    public class MarqueeConfig {
        public Color DefaultTextColor { get; set; }

        public Color ContentBackgroundColor { get; set; }

        public bool UseSystemFont { get; set; }

        public string CustomFont { get; set; }

        public CustomFontAssetBundle CustomFontAssetBundle { get; set; }

        public int RepeatCount { get; set; }

        public Icon Icon { get; set; }

        public Orientation Horizontal { get; set; }

        public Orientation Vertical { get; set; }
    }
}