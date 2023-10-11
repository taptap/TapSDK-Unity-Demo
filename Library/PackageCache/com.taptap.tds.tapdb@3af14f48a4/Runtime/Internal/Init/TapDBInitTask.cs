using System.Collections.Generic;
using TapTap.Common;
using TapTap.Common.Internal.Init;

namespace TapTap.TapDB.Internal.Init {
    public class TapDBInitTask : IInitTask {
        public int Order => 11;

        public void Init(TapConfig config) {
            if (TapDBConfig.Config == null) {
                return;
            }

            if (!TapDBConfig.Config.Enable) {
                return;
            }

            string clientId = config.ClientID;
            string channel = TapDBConfig.Config.Channel;
            string gameVersion = TapDBConfig.Config.GameVersion;
            RegionType region = config.RegionType;
            Dictionary<string, object> deviceProperties = TapDBConfig.Config.DeviceLoginProperties;
            TapDB.InitFromBootstrap(clientId, channel, gameVersion, region, deviceProperties);
        }
    }
}
