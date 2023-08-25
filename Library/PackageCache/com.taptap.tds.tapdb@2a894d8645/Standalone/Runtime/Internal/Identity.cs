using System;
using UnityEngine;

namespace TapTap.TapDB.Standalone.Internal {
    public class Identity {
        public static readonly string DEVICE_ID_KEY = "tapdb_unique_id";
        public static readonly string PERSISTENT_ID_KEY = "tapdb_persist_id";
        public static readonly string INSTALLATION_ID_KEY = "tapdb_install_id";

        public string DeviceId {
            get {
                string deviceId = TapDBStandalone.Prefs.Get<string>(DEVICE_ID_KEY);
                if (string.IsNullOrWhiteSpace(deviceId)) {
                    deviceId = SystemInfo.deviceUniqueIdentifier;
                    TapDBStandalone.Prefs.Set(DEVICE_ID_KEY, deviceId);
                }
                return deviceId;
            }
        }

        public string PersistentId {
            get {
                string persistentId = TapDBStandalone.Prefs.Get<string>(PERSISTENT_ID_KEY);
                if (string.IsNullOrWhiteSpace(persistentId)) {
                    persistentId = Guid.NewGuid().ToString();
                    TapDBStandalone.Prefs.Set(PERSISTENT_ID_KEY, persistentId);
                }
                return persistentId;
            }
        }

        public string InstallationId {
            get {
                string installationId = TapDBStandalone.Prefs.Get<string>(INSTALLATION_ID_KEY);
                if (string.IsNullOrWhiteSpace(installationId)) {
                    installationId = Guid.NewGuid().ToString();
                    TapDBStandalone.Prefs.Set(INSTALLATION_ID_KEY, installationId);
                }
                return installationId;
            }
        }
    }
}