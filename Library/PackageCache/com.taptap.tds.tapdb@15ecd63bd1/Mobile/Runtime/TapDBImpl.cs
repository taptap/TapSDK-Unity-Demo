using System;
using System.Collections.Generic;
#if UNITY_IOS
using System.Runtime.InteropServices;
#endif
using TapTap.Common;
using UnityEngine;

namespace TapTap.TapDB.Mobile
{
    public class TapDBImpl : ITapDB
    {
        private TapDBImpl()
        {
            EngineBridge.GetInstance().Register(TapDBConstants.TAPDB_CLZ, TapDBConstants.TAPDB_IMPL);

            _dbServiceImpl = new AndroidJavaObject(TapDBConstants.TAPDB_IMPL);
        }

        private static volatile TapDBImpl _sInstance;

        private static readonly object Locker = new object();

        private IDynamicProperties _dynamicProperties;

        private readonly AndroidJavaObject _dbServiceImpl;

        public static TapDBImpl GetInstance()
        {
            lock (Locker)
            {
                if (_sInstance == null)
                {
                    _sInstance = new TapDBImpl();
                }
            }

            return _sInstance;
        }

        public void Init(string clientId, string channel, string gameVersion, bool isCN)
        {
            var command = new Command.Builder()
                .Service(TapDBConstants.TAPDB_SERVICE)
                .Method("init")
                .Args("clientId", clientId)
                .Args("channel", channel)
                .Args("isCN", isCN)
                .Args("gameVersion", gameVersion).CommandBuilder();
            EngineBridge.GetInstance().CallHandler(command);
            ThemisUtil.RegisterUnityLogListener();
            HandleIDFA();
        }

        public void Init(string clientId, string channel, string gameVersion, TapDBRegion region, Dictionary<string,object> properties)
        {
            if (properties == null)
            {
                properties = new Dictionary<string, object>();
            }
            var command = new Command.Builder()
                .Service(TapDBConstants.TAPDB_SERVICE)
                .Method("init")
                .Args("clientId", clientId)
                .Args("channel", channel)
                .Args("gameVersion", gameVersion)
                .Args("region", (int)region)
                .Args("properties",properties)
                .CommandBuilder();
            EngineBridge.GetInstance().CallHandler(command);
            ThemisUtil.RegisterUnityLogListener();
            HandleIDFA();
        }

        public void RegisterStaticProperties(string superProperties)
        {
            RegisterStaticPropertiesCommon(superProperties);
        }

        private void RegisterStaticPropertiesCommon(object superProperties)
        {
            var command = new Command.Builder()
               .Service(TapDBConstants.TAPDB_SERVICE)
               .Method("registerStaticProperties")
               .Args("registerStaticProperties", superProperties)
               .CommandBuilder();

            EngineBridge.GetInstance().CallHandler(command);
        }

        public void RegisterStaticProperties(Dictionary<string,object> superProperties)
        {
            RegisterStaticPropertiesCommon(superProperties); 
        }

        public void UnregisterStaticProperty(string propertyName)
        {
            var dic = new Dictionary<string, object> {{"unregisterStaticProperty", propertyName}};
            var command = new Command(TapDBConstants.TAPDB_SERVICE, "unregisterStaticProperty", false, dic);
            EngineBridge.GetInstance().CallHandler(command);
        }

        public void ClearStaticProperties()
        {
            var command = new Command(TapDBConstants.TAPDB_SERVICE, "clearStaticProperties", false, null);
            EngineBridge.GetInstance().CallHandler(command);
        }

        public void ClearUser()
        {
            var command = new Command(TapDBConstants.TAPDB_SERVICE, "clearUser", false, null);
            EngineBridge.GetInstance().CallHandler(command);
        }

        public void SetUser(string userId)
        {
            var dic = new Dictionary<string, object> {{"userId", userId}};
            var command = new Command(TapDBConstants.TAPDB_SERVICE, "setUser", false, dic);
            EngineBridge.GetInstance().CallHandler(command);
        }

        public void SetUser(string userId, string loginType)
        {
            var dic = new Dictionary<string, object> {{"userId", userId}, {"loginType", loginType}};
            var command = new Command(TapDBConstants.TAPDB_SERVICE, "setUserWithParams", false, dic);
            EngineBridge.GetInstance().CallHandler(command);
        }

        public void SetUserWithProperties(string userId, Dictionary<string,object> properties)
        {
            if (properties == null)
            {
                SetUser(userId);
            }
            else
            {
                var command = new Command.Builder()
               .Service(TapDBConstants.TAPDB_SERVICE)
               .Method("setUserWithProperties")
               .Args("userId", userId)
               .Args("properties", properties)
               .CommandBuilder();
                EngineBridge.GetInstance().CallHandler(command);
            }
        }

        public void SetName(string name)
        {
            var dic = new Dictionary<string, object> {{"name", name}};
            var command = new Command(TapDBConstants.TAPDB_SERVICE, "setName", false, dic);
            EngineBridge.GetInstance().CallHandler(command);
        }

        public void SetLevel(int level)
        {
            var dic = new Dictionary<string, object> {{"level", level}};
            var command = new Command(TapDBConstants.TAPDB_SERVICE, "setLevel", false, dic);
            EngineBridge.GetInstance().CallHandler(command);
        }

        public void SetServer(string server)
        {
            var dic = new Dictionary<string, object> {{"server", server}};
            var command = new Command(TapDBConstants.TAPDB_SERVICE, "setServer", false, dic);
            EngineBridge.GetInstance().CallHandler(command);
        }

        public void OnCharge(string orderId, string product, long amount, string currencyType, string payment)
        {
            var command = new Command.Builder()
             .Service(TapDBConstants.TAPDB_SERVICE)
             .Method("onCharge")
             .Args("orderId", orderId)
             .Args("product", product)
             .Args("amount", amount)
             .Args("currencyType", currencyType)
             .Args("payment", payment)
             .Callback(false)
             .CommandBuilder();
            EngineBridge.GetInstance().CallHandler(command);
        }

        public void OnCharge(string orderId, string product, long amount, string currencyType, string payment,
            string properties)
        {
            OnChargeCommon(orderId, product, amount, currencyType, payment, properties);
        }

        public void OnCharge(string orderId, string product, long amount, string currencyType, string payment,
         Dictionary<string, object> properties)
        {
            OnChargeCommon(orderId, product, amount, currencyType, payment, properties);
        }

        private void OnChargeCommon(string orderId, string product, long amount, string currencyType, string payment,
            object properties)
        {
            var command = new Command.Builder()
             .Service(TapDBConstants.TAPDB_SERVICE)
             .Method("onChargeWithProperties")
             .Args("orderId", orderId)
             .Args("product", product)
             .Args("amount", amount)
             .Args("currencyType", currencyType)
             .Args("payment", payment)
             .Args("properties",properties)
             .Callback(false)
             .CommandBuilder();
            EngineBridge.GetInstance().CallHandler(command);

        }


        public void OnEvent(string eventCode, string properties)
        {
            var dic = new Dictionary<string, object>
            {
                {"eventCode", eventCode}, {"properties", properties}
            };
            var command = new Command(TapDBConstants.TAPDB_SERVICE, "onEvent", false, dic);
            EngineBridge.GetInstance().CallHandler(command);
        }

        public void TrackEvent(string eventName, string properties)
        {
            TrackEventCommon(eventName, properties);
        }

        public void TrackEvent(string eventName, Dictionary<string,object> properties)
        {
            TrackEventCommon(eventName, properties);
        }

        private void TrackEventCommon(string eventName, object properties)
        {
            var command = new Command.Builder()
             .Service(TapDBConstants.TAPDB_SERVICE)
             .Method("trackEvent")
             .Args("eventName", eventName)
             .Args("properties", properties)
             .Callback(false)
             .CommandBuilder();
            EngineBridge.GetInstance().CallHandler(command);
        }

        public void DeviceInitialize(string properties)
        {
            DeviceInitializeCommon(properties);
        }

        public void DeviceInitialize(Dictionary<string,object> properties)
        {
            DeviceInitializeCommon(properties);
        }

        private void DeviceInitializeCommon(object properties)
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(TapDBConstants.TAPDB_SERVICE)
                .Method("deviceInitialize")
                .Args("deviceInitialize", properties)
                .Callback(true)
                .CommandBuilder());
        }

        public void DeviceUpdate(string properties)
        {
            DeviceUpdateCommon(properties);
        }

        public void DeviceUpdate(Dictionary<string,object> properties)
        {
            DeviceUpdateCommon(properties);
        }

        private void DeviceUpdateCommon(object properties)
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(TapDBConstants.TAPDB_SERVICE)
                .Method("deviceUpdate")
                .Args("deviceUpdate", properties)
                .CommandBuilder());
        }

        public void DeviceAdd(string properties)
        {
            DeviceAddCommon(properties);
        }

        public void DeviceAdd(Dictionary<string,object> properties)
        {
            DeviceAddCommon(properties);
        }

        private void DeviceAddCommon(object properties)
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(TapDBConstants.TAPDB_SERVICE)
                .Method("deviceAdd")
                .Args("deviceAdd", properties)
                .CommandBuilder());
        }

        public void UserInitialize(string properties)
        {
            UserInitializeCommon(properties);
        }

        public void UserInitialize(Dictionary<string,object> properties)
        {
            UserInitializeCommon(properties);
        }

        private void UserInitializeCommon(object properties)
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(TapDBConstants.TAPDB_SERVICE)
                .Method("userInitialize")
                .Args("userInitialize", properties)
                .CommandBuilder());
        }

        public void UserUpdate(string properties)
        {
            UserUpdateCommon(properties);
        }

        public void UserUpdate(Dictionary<string,object> properties)
        {
            UserUpdateCommon(properties);
        }

        private void UserUpdateCommon(object properties)
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(TapDBConstants.TAPDB_SERVICE)
                .Method("userUpdate")
                .Args("userUpdate", properties)
                .CommandBuilder());
        }

        public void UserAdd(string properties)
        {
            UserAddCommon(properties);
        }

        public void UserAdd(Dictionary<string,object> properties)
        {
            UserAddCommon(properties);
        }

        private void UserAddCommon(object properties)
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(TapDBConstants.TAPDB_SERVICE)
                .Method("userAdd")
                .Args("userAdd", properties)
                .CommandBuilder());
        }

        public void EnableLog(bool enable)
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(TapDBConstants.TAPDB_SERVICE)
                .Method("enableLog")
                .Args("enableLog", enable)
                .CommandBuilder());
            ThemisUtil.SetEnableDebug(enable);
        }

        public void CloseFetchTapTapDeviceId()
        {
            if (!Platform.IsAndroid()) return;
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(TapDBConstants.TAPDB_SERVICE)
                .Method("closeFetchTapTapDeviceId")
                .CommandBuilder());
        }

        public void GetTapTapDid(Action<string> action)
        {
            if (!Platform.IsAndroid()) return;
            var command = new Command.Builder()
                .Service(TapDBConstants.TAPDB_SERVICE)
                .Method("getTapTapDID")
                .Callback(true)
                .OnceTime(true)
                .CommandBuilder();

            EngineBridge.GetInstance().CallHandler(command, result =>
            {
                if (result.code != Result.RESULT_SUCCESS)
                {
                    action(null);
                    return;
                }

                action(result.content);
            });
        }

        public void AdvertiserIDCollectionEnabled(bool enable)
        {
#if UNITY_IOS
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(TapDBConstants.TAPDB_SERVICE)
                .Method("advertiserIDCollectionEnabled")
                .Args("advertiserIDCollectionEnabled", enable)
                .CommandBuilder());
#endif
        }

        public void RegisterDynamicProperties(IDynamicProperties properties)
        {
            if (Platform.IsAndroid())
            {
                if (_dbServiceImpl == null)
                {
                    return;
                }

                _dbServiceImpl.Call("registerDynamicProperties", new TapDBDynamicProperties(properties));
            }
            else if (Platform.IsIOS())
            {
                _dynamicProperties = properties;
#if UNITY_IOS
                registerDynamicProperties(DynamicPropertiesDelegate);
#endif
                EngineBridge.GetInstance().CallHandler(new Command.Builder().Service(TapDBConstants.TAPDB_SERVICE)
                    .Method("registerDynamicProperties")
                    .CommandBuilder());
            }
        }


        public void ConfigAutoReportLogLevel(LogSeverity level)
        {
            ThemisUtil.U3d_ConfigAutoReportLogLevel(level);
        }

        public void ConfigAutoQuitApplication(bool enable)
        {
            ThemisUtil.U3d_ConfigAutoQuitApplication(enable);
        }

        public void RegisterLogCallback(TapDB.LogCallbackDelegate handler)
        {
            ThemisUtil.U3d_RegisterLogCallback(handler);
        }

        public void UnRegisterLogCallback(TapDB.LogCallbackDelegate handler)
        {
            ThemisUtil.U3d_UnregisterLogCallback(handler);
        }

        public void ReportException(Exception e, string message)
        {
            ThemisUtil.ExceptionReport(e, message);
        }

        public void SetOAIDCert(string cert)
        {
            if (Platform.IsAndroid())
            {
                EngineBridge.GetInstance().CallHandler(new Command.Builder().Service(TapDBConstants.TAPDB_SERVICE)
                    .Method("setOAIDCert")
                    .Args("setOAIDCert", cert)
                    .CommandBuilder());
            }
        }

        public void EnableThemis(bool enable)
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder().Service(TapDBConstants.TAPDB_SERVICE)
                   .Method("enableThemis")
                   .Args("enableThemis", enable)
                   .CommandBuilder());
        }


#if UNITY_IOS
        private delegate string TapDBDynamicPropertiesDelegate();

        [AOT.MonoPInvokeCallbackAttribute(typeof(TapDBDynamicPropertiesDelegate))]
        static string DynamicPropertiesDelegate()
        {
            return _sInstance._dynamicProperties == null
                ? null
                : Json.Serialize(_sInstance._dynamicProperties.GetDynamicProperties());
        }

        [DllImport("__Internal")]
        private static extern void registerDynamicProperties(TapDBDynamicPropertiesDelegate propertiesDelegate);
#endif

        private void HandleIDFA() {
            if (!Platform.IsIOS()) return;
            if(TapCommon.Config != null && TapDBConfig.Config != null){
                bool enableIDFA = TapDBConfig.Config.AdvertiserIDCollectionEnabled;
                var idfaCommand = new Command.Builder()
                .Service(TapDBConstants.TAPDB_SERVICE)
                .Method("advertiserIDCollectionEnabled")
                .Args("advertiserIDCollectionEnabled", enableIDFA == true ? 1 : 0)
                .CommandBuilder();
            // 触发 TapDB IDFA 开关
                EngineBridge.GetInstance().CallHandler(idfaCommand);
            }
        }

        
    }

    public class TapDBDynamicProperties : AndroidJavaProxy
    {
        private readonly IDynamicProperties _properties;

        public TapDBDynamicProperties(IDynamicProperties properties) :
            base(new AndroidJavaClass("com.tds.tapdb.wrapper.TapDBDynamicProperties"))
        {
            _properties = properties;
        }

        public override AndroidJavaObject Invoke(string methodName, object[] args)
        {
            return _properties != null
                ? new AndroidJavaObject("java.lang.String", Json.Serialize(_properties.GetDynamicProperties()))
                : base.Invoke(methodName, args);
        }
    }
}