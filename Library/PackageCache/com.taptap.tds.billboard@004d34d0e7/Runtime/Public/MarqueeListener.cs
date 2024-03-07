using System;

namespace TapTap.Billboard {
    public class MarqueeListener {
        public Action<Marquee, MarqueeConfig> OnShow { get; set; }

        public Action OnClose { get; set; }
    }
}
