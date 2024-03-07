using System.Collections.Generic;
using UnityEngine;
using TapTap.Common;

namespace TapTap.TapDB.Standalone.Internal {
    public class Tracker {

        private string clientId;
        private string channel;
        private string gameVersion;

        private Dictionary<string, object> customProps;

        private Dictionary<string, object> basicProps;
        private Dictionary<string, object> staticProps;
        private IDynamicProperties dynamicPropsDelegate;

        private HttpClient httpClient;

        public void Init(string clientId, string channel, string gameVersion, TapDBRegion region,
            Dictionary<string, object> properties) {
            this.clientId = clientId;
            this.channel = channel;
            this.gameVersion = gameVersion;
            this.customProps = properties;

            if(region == TapDBRegion.CN)
            {
                this.httpClient = new HttpClient(Constants.SERVER_URL_BJ, Constants.API_VERSION);
            } else if (region == TapDBRegion.IO)
            {
                this.httpClient = new HttpClient(Constants.SERVER_URL_SG, Constants.API_VERSION);
            } else
            {
                this.httpClient = new HttpClient(Constants.SERVER_URL_BJ, Constants.API_VERSION);
            }

            staticProps = new Dictionary<string, object>();

            InitBasicProps();

            Dictionary<string, object> props = new Dictionary<string, object>(basicProps);
            TapDBStandalone.Tracker.TrackEvent(Constants.EVENT, "device_login", props);
        }

        public void RegisterStaticProps(Dictionary<string, object> properties) {
            foreach (KeyValuePair<string, object> kv in properties) {
                staticProps[kv.Key] = kv.Value;
            }
        }

        public void UnregisterStaticProp(string propertyKey) {
            if (string.IsNullOrWhiteSpace(propertyKey)) {
                TapDBStandalone.Logger.Error("Property key is NULL");
            }

            staticProps.Remove(propertyKey);
        }

        public void ClearStaticProps() {
            staticProps.Clear();
        }

        public void RegisterDynamicPropsDelegate(IDynamicProperties dynamicPropsDelegate) {
            this.dynamicPropsDelegate = dynamicPropsDelegate;
        }

        /// <summary>
        /// 上报事件
        /// </summary>
        /// <param name="path"></param>
        /// <param name="name"></param>
        /// <param name="properties"></param>
        public void TrackEvent(string path, string name,
            Dictionary<string, object> properties = null) {

            Dictionary<string, object> props = new Dictionary<string, object>(basicProps);

            if (staticProps != null) {
                foreach (KeyValuePair<string, object> kv in staticProps) {
                    props[kv.Key] = kv.Value;
                }
            }

            Dictionary<string, object> dynamicProps = dynamicPropsDelegate?.GetDynamicProperties();
            if (dynamicProps != null) {
                foreach (KeyValuePair<string, object> kv in dynamicProps) {
                    props[kv.Key] = kv.Value;
                }
            }

            if (customProps != null) {
                foreach (KeyValuePair<string, object> kv in customProps) {
                    props[kv.Key] = kv.Value;
                }
            }

            if (properties != null) {
                foreach (KeyValuePair<string, object> kv in properties) {
                    props[kv.Key] = kv.Value;
                }
            }

            Dictionary<string, object> data = new Dictionary<string, object> {
                { "client_id", clientId },
                { "type", "track" },
                { "name", name },
                { "device_id", TapDBStandalone.Identity.DeviceId },
                { "properties", props }
            };
            if (!string.IsNullOrWhiteSpace(TapDBStandalone.User.Id)) {
                data["user_id"] = TapDBStandalone.User.Id;
            }

            _ = httpClient.Post<object>(path, data: data);
        }

        /// <summary>
        /// 上报设备属性变化
        /// </summary>
        /// <param name="type"></param>
        /// <param name="properties"></param>
        public void TrackDeviceProperties(string type, Dictionary<string, object> properties) {
            if (string.IsNullOrWhiteSpace(TapDBStandalone.Identity.DeviceId)) {
                TapDBStandalone.Logger.Error("DeviceId is NULL.");
                return;
            }

            Dictionary<string, object> baseProps = new Dictionary<string, object> {
                { "device_id", TapDBStandalone.Identity.DeviceId }
            };
            TrackProperties(type, baseProps, properties);
        }

        /// <summary>
        /// 上报玩家属性变化
        /// </summary>
        public void TrackUserProperties(string type, Dictionary<string, object> properties) {
            string userId = TapDBStandalone.User.Id;
            if (string.IsNullOrWhiteSpace(userId)) {
                TapDBStandalone.Logger.Error("UserId is NULL.");
                return;
            }

            Dictionary<string, object> baseProps = new Dictionary<string, object> {
                { "user_id", userId }
            };
            TrackProperties(type, baseProps, properties);
        }

        private void TrackProperties(string type,
            Dictionary<string, object> basicProps, Dictionary<string, object> properties) {

            if (!IsInitialized) {
                return;
            }

            if (properties == null) {
                properties = new Dictionary<string, object>();
            }
            properties["sdk_version"] = TapCommon.SDKVersion;

            Dictionary<string, object> data = new Dictionary<string, object>(basicProps) {
                { "client_id", clientId },
                { "type", type },
                { "properties", properties }
            };

            _ = httpClient.Post<object>(Constants.EVENT, data: data);
        }

        private void InitBasicProps() {
            DeviceInfo.GetMacAddress(out string macList, out string firstMac);
            basicProps = new Dictionary<string, object> {
                { "os", OS },
                { "device_model", SystemInfo.deviceModel },
                { "os_version", SystemInfo.operatingSystem },
                { "install_uuid", TapDBStandalone.Identity.InstallationId },
                { "persist_uuid", TapDBStandalone.Identity.PersistentId },
                { "width", Screen.currentResolution.width },
                { "height", Screen.currentResolution.height },
                { "provider", "unknown" },
                { "app_version", gameVersion },
                { "sdk_version", TapCommon.SDKVersion },
                { "network", Network },
                { "channel", channel },
                { "lang_system", DeviceInfo.GetLanguage() },
                { "mac_list", macList },
                { "first_mac", firstMac },
                { "device_id5", DeviceInfo.GetLaunchUniqueID() }
            };
        }

        private string OS {
            get {
                switch (SystemInfo.operatingSystemFamily) {
                    case OperatingSystemFamily.Windows:
                        return "Windows";
                    case OperatingSystemFamily.MacOSX:
                        return "Mac";
                    case OperatingSystemFamily.Linux:
                        return "Linux";
                    default:
                        return "Unknown";
                }
            }
        }

        private string Network {
            get {
                switch (Application.internetReachability) {
                    case NetworkReachability.ReachableViaCarrierDataNetwork:
                        return "3";
                    case NetworkReachability.ReachableViaLocalAreaNetwork:
                        return "2";
                    default:
                        return "Unknown";
                }
            }
        }

        internal bool IsInitialized {
            get {
                if (string.IsNullOrWhiteSpace(clientId)) {
                    TapDBStandalone.Logger.Error("MUST be initialized.");
                    return false;
                }
                return true;
            }
        }
    }
}