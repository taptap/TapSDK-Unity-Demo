using System;
using System.Linq;
using TapTap.Common;
using TapTap.Common.Internal.Init;

namespace TapTap.Login.Internal.Init {
    public class LoginInitTask : IInitTask {
        public int Order => 11;

        public void Init(TapConfig config) {
            TapLogin.Init(config.ClientID, config.RegionType == RegionType.CN, TapLoginConfig.Config == null || TapLoginConfig.Config.RoundCorner);
        }
    }
}
