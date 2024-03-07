using System;
using System.Linq;
using System.Collections.Generic;

namespace TapTap.Common {
    public class TapLoginConfig {
        public static TapLoginConfig Config { get; set; }

        private bool _isPortrait;
        private bool _roundCorner;
        
        public bool RoundCorner => _roundCorner;

        public TapLoginConfig(bool RoundCorner, bool isPortrait) {
            _roundCorner = RoundCorner;
            _isPortrait = isPortrait;
        }

        public Dictionary<string, object> ToDict() {
            return new Dictionary<string, object> {
                ["roundCorner"] = _roundCorner,
                ["isPortrait"] = _isPortrait,
            };
        }
    }

    public static class TapConfigBuilderForLogin {
        public static TapConfig.Builder TapLoginConfig(this TapConfig.Builder _, bool RoundCorner, bool isPotrait) {

            Common.TapLoginConfig.Config = new TapLoginConfig(RoundCorner, isPotrait);
            return _;
        }
    }
}