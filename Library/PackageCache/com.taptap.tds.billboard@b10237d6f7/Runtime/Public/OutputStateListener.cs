using System;

namespace TapTap.Billboard {
    public class OutputStateListener {
        public Action OnPlayVoice { get; set; }
        public Action OnStopVoice { get; set; }
    }
}