using System;
using System.Collections.Generic;

namespace TapTap.TapDB.Mobile
{
    public class TapDBMobile : TapTap.TapDB.ITapDB
    {
        public void Init(string clientId, string channel, string gameVersion, bool isCN)
        {
            TapDBImpl.GetInstance().Init(clientId, channel, gameVersion, isCN);
        }

        public void Init(string clientId, string channel, string gameVersion, TapDBRegion region, Dictionary<string, object> properties)
        {
            TapDBImpl.GetInstance().Init(clientId, channel, gameVersion, region, properties);
        }

        public void SetUser(string userId)
        {
            TapDBImpl.GetInstance().SetUser(userId);
        }

        public void SetUser(string userId, string loginType)
        {
            TapDBImpl.GetInstance().SetUser(userId, loginType);
        }

        public void SetUserWithProperties(string userId, Dictionary<string,object> properties)
        {
            TapDBImpl.GetInstance().SetUserWithProperties(userId, properties);
        }

        public void SetName(string name)
        {
            TapDBImpl.GetInstance().SetName(name);
        }

        public void SetLevel(int level)
        {
            TapDBImpl.GetInstance().SetLevel(level);
        }

        public void SetServer(string server)
        {
            TapDBImpl.GetInstance().SetServer(server);
        }

        public void OnCharge(string orderId, string product, long amount, string currencyType, string payment)
        {
            TapDBImpl.GetInstance().OnCharge(orderId, product, amount, currencyType, payment);
        }

        public void OnCharge(string orderId, string product, long amount, string currencyType, string payment,
            string properties)
        {
            TapDBImpl.GetInstance().OnCharge(orderId, product, amount, currencyType, payment, properties);
        }

        public void OnCharge(string orderId, string product, long amount, string currencyType, string payment,
            Dictionary<string,object> properties)
        {
            TapDBImpl.GetInstance().OnCharge(orderId, product, amount, currencyType, payment, properties);
        }

        [Obsolete("已弃用,请调用trackEvent(string eventName, Dictionary<string, object> properties)")]
        public void OnEvent(string eventCode, string properties)
        {
            TapDBImpl.GetInstance().OnEvent(eventCode, properties);
        }

        public void TrackEvent(string eventName, string properties)
        {
            TapDBImpl.GetInstance().TrackEvent(eventName, properties);
        }

        public void TrackEvent(string eventName, Dictionary<string,object> properties)
        {
            TapDBImpl.GetInstance().TrackEvent(eventName, properties);
        }

        public void RegisterStaticProperties(string properties)
        {
            TapDBImpl.GetInstance().RegisterStaticProperties(properties);
        }

        public void RegisterStaticProperties(Dictionary<string,object> properties)
        {
            TapDBImpl.GetInstance().RegisterStaticProperties(properties);
        }

        public void UnregisterStaticProperty(string propertKey)
        {
            TapDBImpl.GetInstance().UnregisterStaticProperty(propertKey);
        }

        public void RegisterDynamicProperties(IDynamicProperties properties)
        {
            TapDBImpl.GetInstance().RegisterDynamicProperties(properties);
        }

        public void ClearStaticProperties()
        {
            TapDBImpl.GetInstance().ClearStaticProperties();
        }

        public void DeviceInitialize(string properties)
        {
            TapDBImpl.GetInstance().DeviceInitialize(properties);
        }

        public void DeviceInitialize(Dictionary<string,object> properties)
        {
            TapDBImpl.GetInstance().DeviceInitialize(properties);
        }

        public void DeviceUpdate(string properties)
        {
            TapDBImpl.GetInstance().DeviceUpdate(properties);
        }

        public void DeviceUpdate(Dictionary<string,object> properties)
        {
            TapDBImpl.GetInstance().DeviceUpdate(properties);
        }

        public void DeviceAdd(string properties)
        {
            TapDBImpl.GetInstance().DeviceAdd(properties);
        }

        public void DeviceAdd(Dictionary<string,object> properties)
        {
            TapDBImpl.GetInstance().DeviceAdd(properties);
        }

        public void UserInitialize(string properties)
        {
            TapDBImpl.GetInstance().UserInitialize(properties);
        }

        public void UserInitialize(Dictionary<string,object> properties)
        {
            TapDBImpl.GetInstance().UserInitialize(properties);
        }

        public void UserUpdate(string properties)
        {
            TapDBImpl.GetInstance().UserUpdate(properties);
        }

        public void UserUpdate(Dictionary<string, object> properties)
        {
            TapDBImpl.GetInstance().UserUpdate(properties);
        }

        public void UserAdd(string properties)
        {
            TapDBImpl.GetInstance().UserAdd(properties);
        }

        public void UserAdd(Dictionary<string,object> properties)
        {
            TapDBImpl.GetInstance().UserAdd(properties);
        }

        public void EnableLog(bool enable)
        {
            TapDBImpl.GetInstance().EnableLog(enable);
        }

        public void AdvertiserIDCollectionEnabled(bool enable)
        {
            TapDBImpl.GetInstance().AdvertiserIDCollectionEnabled(enable);
        }

        public void CloseFetchTapTapDeviceId()
        {
            TapDBImpl.GetInstance().CloseFetchTapTapDeviceId();
        }

        public void ClearUser()
        {
            TapDBImpl.GetInstance().ClearUser();
        }

        public void GetTapTapDid(Action<string> action)
        {
            TapDBImpl.GetInstance().GetTapTapDid(action);
        }

        public void ConfigAutoReportLogLevel(LogSeverity level)
        {
            TapDBImpl.GetInstance().ConfigAutoReportLogLevel(level);
        }

        public void ConfigAutoQuitApplication(bool enable)
        {
            TapDBImpl.GetInstance().ConfigAutoQuitApplication(enable);
        }

        public void RegisterLogCallback(TapDB.LogCallbackDelegate handler)
        {
            TapDBImpl.GetInstance().RegisterLogCallback(handler);
        }

        public void UnRegisterLogCallback(TapDB.LogCallbackDelegate handler)
        {
            TapDBImpl.GetInstance().UnRegisterLogCallback(handler);
        }

        public void ReportException(System.Exception e, string message)
        {
            TapDBImpl.GetInstance().ReportException(e, message);
        }

        public void SetOAIDCert(string cert)
        {
            TapDBImpl.GetInstance().SetOAIDCert(cert);
        }

        public void EnableThemis(bool enable)
        {
            TapDBImpl.GetInstance().EnableThemis(enable);
        }

    }
}
