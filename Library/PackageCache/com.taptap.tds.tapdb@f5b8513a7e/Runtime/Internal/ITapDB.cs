using System;
using System.Collections.Generic;

namespace TapTap.TapDB {
    public interface ITapDB {
        void Init(string clientId, string channel, string gameVersion, bool isCN);

        void Init(string clientId, string channel, string gameVersion, TapDBRegion region, Dictionary<string, object> properties);

        void SetUser(string userId);

        void SetUser(string userId, string loginType);

        void SetUserWithProperties(string userId, Dictionary<string, object> properties);

        void SetName(string name);

        void SetLevel(int level);

        void SetServer(string server);

        void OnCharge(string orderId, string product, long amount, string currencyType, string payment);

        void OnCharge(string orderId, string product, long amount, string currencyType, string payment, string properties);

        void OnCharge(string orderId, string product, long amount, string currencyType, string payment, Dictionary<string, object> properties);

        [Obsolete("已弃用,请调用trackEvent(string eventName, Dictionary<string, object> properties)")]
        void OnEvent(string eventCode, string properties);

        void TrackEvent(string eventName, string properties);

        void TrackEvent(string eventName, Dictionary<string, object> properties);

        void RegisterStaticProperties(string properties);

        void RegisterStaticProperties(Dictionary<string, object> properties);

        void UnregisterStaticProperty(string propertKey);

        void RegisterDynamicProperties(IDynamicProperties properties);

        void ClearStaticProperties();

        void DeviceInitialize(string properties);

        void DeviceInitialize(Dictionary<string, object> properties);

        void DeviceUpdate(string properties);

        void DeviceUpdate(Dictionary<string, object> properties);

        void DeviceAdd(string properties);

        void DeviceAdd(Dictionary<string, object> properties);

        void UserInitialize(string properties);

        void UserInitialize(Dictionary<string, object> properties);

        void UserUpdate(string properties);

        void UserUpdate(Dictionary<string, object> properties);

        void UserAdd(string properties);

        void UserAdd(Dictionary<string, object> properties);

        void EnableLog(bool enable);

        void AdvertiserIDCollectionEnabled(bool enable);

        void CloseFetchTapTapDeviceId();

        void ClearUser();

        void GetTapTapDid(Action<string> action);

        void ConfigAutoReportLogLevel(LogSeverity level);

        void ConfigAutoQuitApplication(bool enable);

        void RegisterLogCallback(TapDB.LogCallbackDelegate handler);

        void UnRegisterLogCallback(TapDB.LogCallbackDelegate handler);

        void ReportException(Exception e, string message);

        void SetOAIDCert(string cert);

        void EnableThemis(bool enable);

    }
}
