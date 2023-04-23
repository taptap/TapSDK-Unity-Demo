using System;
using System.Collections.Generic;
using LC.Newtonsoft.Json;
using TapTap.TapDB.Standalone.Internal;

using Logger = TapTap.TapDB.Standalone.Internal.Logger;
using Constants = TapTap.TapDB.Standalone.Internal.Constants;

namespace TapTap.TapDB.Standalone {
    public class TapDBStandalone : ITapDB {
        internal static Prefs Prefs;
        internal static Logger Logger;
        internal static Identity Identity;
        internal static Tracker Tracker;

        internal static Device Device;
        internal static User User;
        internal static Charge Charge;

        #region ITapDB

        public void Init(string clientId, string channel, string gameVersion, bool isCN) {
            TapDBRegion region = isCN ? TapDBRegion.CN : TapDBRegion.IO;
            Init(clientId, channel, gameVersion, region, null);
        }

        public void Init(string clientId, string channel, string gameVersion, TapDBRegion region,
            Dictionary<string, object> properties) {
            // 尝试迁移旧数据
            Migration migration = new Migration();
            migration.TryMigrate();
            // 实例化模块
            Prefs = new Prefs();
            Logger = new Logger();
            Identity = new Identity();
            Tracker = new Tracker();

            Device = new Device();
            User = new User();
            Charge = new Charge();
            // 初始化
            Tracker.Init(clientId, channel, gameVersion, region, properties);
        }

        public void SetUser(string userId) {
            SetUser(userId, null);
        }

        public void SetUser(string userId, string loginType) {
            if (!IsInitialized) {
                return;
            }

            if (string.IsNullOrWhiteSpace(userId)) {
                Logger.Error("UserId is NULL.");
                return;
            }

            User.Login(userId, loginType);
        }

        public void SetUserWithProperties(string userId, Dictionary<string, object> properties) {
            if (!IsInitialized) {
                return;
            }

            if (string.IsNullOrWhiteSpace(userId)) {
                Logger.Error("UserId is NULL.");
                return;
            }

            User.Login(userId, null, properties);
        }

        public void ClearUser() {
            if (!IsInitialized) {
                return;
            }

            User.Logout();
        }

        public void SetName(string name) {
            if (!IsInitialized) {
                return;
            }

            User.SetName(name);
        }

        public void SetLevel(int level) {
            if (!IsInitialized) {
                return;
            }

            User.SetLevel(level);
        }

        public void SetServer(string server) {
            if (!IsInitialized) {
                return;
            }

            User.SetServer(server);
        }

        public void OnCharge(string orderId, string product, long amount, string currencyType, string payment) {
            Dictionary<string, object> props = null;
            OnCharge(orderId, product, amount, currencyType, payment, props);
        }

        public void OnCharge(string orderId, string product, long amount, string currencyType, string payment,
            string properties) {
            Dictionary<string, object> props = null;
            if (!string.IsNullOrWhiteSpace(properties)) {
                props = JsonConvert.DeserializeObject<Dictionary<string, object>>(properties);
            }
            OnCharge(orderId, product, amount, currencyType, payment, props);
        }

        public void OnCharge(string orderId, string product, long amount, string currencyType, string payment,
            Dictionary<string, object> properties) {
            if (!IsInitialized) {
                return;
            }

            Charge.Track(orderId, product, amount, currencyType, payment, properties);
        }

        public void OnEvent(string eventCode, string properties) {
            TrackEvent(eventCode, properties);
        }

        public void TrackEvent(string eventName, string properties) {
            try {
                Dictionary<string, object> jsonData = JsonConvert.DeserializeObject<Dictionary<string, object>>(properties);
                TrackEvent(eventName, jsonData);
            } catch (Exception e) {
                Logger.Error(e.Message);
            }
        }

        public void TrackEvent(string eventName, Dictionary<string, object> properties) {
            if (string.IsNullOrWhiteSpace(eventName)) {
                Logger.Error("EventName is NULL.");
                return;
            }

            Tracker.TrackEvent(Constants.EVENT, eventName, properties);
        }

        public void RegisterStaticProperties(string properties) {
            try {
                Dictionary<string, object> jsonData = JsonConvert.DeserializeObject<Dictionary<string, object>>(properties);
                RegisterStaticProperties(jsonData);
            } catch (Exception e) {
                Logger.Error(e.Message);
            }
        }

        public void RegisterStaticProperties(Dictionary<string, object> properties) {
            Tracker.RegisterStaticProps(properties);
        }

        public void UnregisterStaticProperty(string propertKey) {
            Tracker.UnregisterStaticProp(propertKey);
        }

        public void ClearStaticProperties() {
            Tracker.ClearStaticProps();
        }

        public void RegisterDynamicProperties(IDynamicProperties properties) {
            Tracker.RegisterDynamicPropsDelegate(properties);
        }

        public void DeviceInitialize(string properties) {
            try {
                Dictionary<string, object> jsonData = JsonConvert.DeserializeObject<Dictionary<string, object>>(properties);
                DeviceInitialize(jsonData);
            } catch (Exception e) {
                Logger.Error(e.Message);
            }
        }

        public void DeviceInitialize(Dictionary<string, object> properties) {
            if (!IsInitialized) {
                return;
            }

            Device.InitProps(properties);
        }

        public void DeviceUpdate(string properties) {
            try {
                Dictionary<string, object> jsonData = JsonConvert.DeserializeObject<Dictionary<string, object>>(properties);
                DeviceUpdate(jsonData);
            } catch (Exception e) {
                Logger.Error(e.Message);
            }
        }

        public void DeviceUpdate(Dictionary<string, object> properties) {
            if (!IsInitialized) {
                return;
            }

            Device.UpdateProps(properties);
        }

        public void DeviceAdd(string properties) {
            try {
                Dictionary<string, object> jsonData = JsonConvert.DeserializeObject<Dictionary<string, object>>(properties);
                DeviceAdd(jsonData);
            } catch (Exception e) {
                Logger.Error(e.Message);
            }
        }

        public void DeviceAdd(Dictionary<string, object> properties) {
            if (!IsInitialized) {
                return;
            }

            Device.AddProps(properties);
        }

        public void UserInitialize(string properties) {
            try {
                Dictionary<string, object> jsonData = JsonConvert.DeserializeObject<Dictionary<string, object>>(properties);
                UserInitialize(jsonData);
            } catch (Exception e) {
                Logger.Error(e.Message);
            }
        }

        public void UserInitialize(Dictionary<string, object> properties) {
            if (!IsInitialized) {
                return;
            }

            User.InitProps(properties);
        }

        public void UserUpdate(string properties) {
            try {
                Dictionary<string, object> jsonData = JsonConvert.DeserializeObject<Dictionary<string, object>>(properties);
                UserUpdate(jsonData);
            } catch (Exception e) {
                Logger.Error(e.Message);
            }
        }

        public void UserUpdate(Dictionary<string, object> properties) {
            if (!IsInitialized) {
                return;
            }

            User.UpdateProps(properties);
        }

        public void UserAdd(string properties) {
            try {
                Dictionary<string, object> jsonData = JsonConvert.DeserializeObject<Dictionary<string, object>>(properties);
                UserAdd(jsonData);
            } catch (Exception e) {
                Logger.Error(e.Message);
            }
        }

        public void UserAdd(Dictionary<string, object> properties) {
            if (!IsInitialized) {
                return;
            }

            User.AddProps(properties);
        }

        public void EnableLog(bool enable) {
            Logger.Enable = enable;
        }

        public void AdvertiserIDCollectionEnabled(bool enable) {
            Logger.Error("Standalone has NOT be implemented.");
        }

        public void CloseFetchTapTapDeviceId() {
            Logger.Error("Standalone has NOT be implemented.");
        }

        public void GetTapTapDid(Action<string> action) {
            Logger.Error("Standalone has NOT be implemented.");
        }

        public void ConfigAutoReportLogLevel(LogSeverity level) {
            Logger.Error("Standalone has NOT be implemented.");
        }

        public void ConfigAutoQuitApplication(bool enable) {
            Logger.Error("Standalone has NOT be implemented.");
        }

        public void RegisterLogCallback(TapDB.LogCallbackDelegate handler) {
            Logger.Error("Standalone has NOT be implemented.");
        }

        public void UnRegisterLogCallback(TapDB.LogCallbackDelegate handler) {
            Logger.Error("Standalone has NOT be implemented.");
        }

        public void ReportException(Exception e, string message) {
            Logger.Error("Standalone has NOT be implemented.");
        }

        public void SetOAIDCert(string cert) {
            Logger.Error("Standalone has NOT be implemented.");
        }

        public void EnableThemis(bool enable){
            Logger.Error("Standalone has NOT be implemented.");
        }

        #endregion

        bool IsInitialized => Tracker != null && Tracker.IsInitialized;
    }
}
