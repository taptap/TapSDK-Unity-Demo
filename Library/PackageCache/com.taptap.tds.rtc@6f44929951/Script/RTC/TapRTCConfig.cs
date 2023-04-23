namespace TapTap.RTC
{
    public class TapRTCConfig
    {
        public readonly string AppId;
        public readonly string AppKey;
        public readonly string UserId;
        public readonly string DeviceId;
        public readonly string ServerUrl;
        public readonly AudioPerfProfile PerfProfile;
        public readonly Provider Provider = Provider.GME;

        private TapRTCConfig(string appId, string appKey, string userId, string deviceId, string serverUrl,
            AudioPerfProfile perfProfile = AudioPerfProfile.DEFAULT)
        {
            AppId = appId;
            AppKey = appKey;
            UserId = userId;
            DeviceId = deviceId;
            ServerUrl = serverUrl;
        }

        public class Builder
        {
            private string appId;

            private string appKey;

            private string userId;

            private string deviceId;

            private string serverUrl;

            private AudioPerfProfile perfProfile = AudioPerfProfile.DEFAULT;

            public Builder AppId(string appId)
            {
                this.appId = appId;
                return this;
            }

            public Builder ClientID(string clientID)
            {
                appId = clientID;
                return this;
            }


            public Builder AppKey(string appKey)
            {
                this.appKey = appKey;
                return this;
            }

            public Builder ClientToken(string clientToken)
            {
                appKey = clientToken;
                return this;
            }

            public Builder UserId(string openId)
            {
                userId = openId;
                return this;
            }


            public Builder DeviceId(string deviceId)
            {
                this.deviceId = deviceId;
                return this;
            }

            public Builder ServerUrl(string serverUrl)
            {
                this.serverUrl = serverUrl;
                return this;
            }

            public Builder AudioProfile(AudioPerfProfile perfProfile)
            {
                this.perfProfile = perfProfile;
                return this;
            }

            public TapRTCConfig ConfigBuilder()
            {
                return new TapRTCConfig(appId, appKey, userId, deviceId, serverUrl, perfProfile);
            }
        }
    }
}