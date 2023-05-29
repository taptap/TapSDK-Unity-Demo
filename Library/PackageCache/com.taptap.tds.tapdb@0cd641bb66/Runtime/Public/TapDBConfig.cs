using System.Collections.Generic;

namespace TapTap.Common {
    public class TapDBConfig {
        public static TapDBConfig Config { get; set; }

        public readonly bool Enable;

        public readonly string Channel;

        public readonly string GameVersion;

        public readonly bool AdvertiserIDCollectionEnabled;

        public readonly Dictionary<string, object> DeviceLoginProperties;

        public TapDBConfig(bool enable, string channel, string gameVersion,
            bool advertiserIDCollectionEnabled, Dictionary<string, object> properities) {
            Enable = enable;
            Channel = channel;
            GameVersion = gameVersion;
            AdvertiserIDCollectionEnabled = advertiserIDCollectionEnabled;
            DeviceLoginProperties = properities;
        }

        public Dictionary<string, object> ToDict() {
            return new Dictionary<string, object> {
                ["channel"] = Channel,
                ["gameVersion"] = GameVersion,
                ["enable"] = Enable,
                ["advertiserIDCollectionEnabled"] = AdvertiserIDCollectionEnabled,
                ["deviceLoginProperties"] = DeviceLoginProperties
            };
        }
    }

    public static class TapConfigBuilderForTapDB {
        public static TapConfig.Builder TapDBConfig(this TapConfig.Builder builder,
            bool enable,
            string channel = null,
            string gameVersion = null,
            bool advertiserIDCollectionEnabled = false,
            Dictionary<string, object> properties = null) {

            Common.TapDBConfig.Config = new TapDBConfig(enable, channel, gameVersion,
                advertiserIDCollectionEnabled, properties);
            return builder;
        }
    }
}
