using System;
using System.Linq;
using System.Collections.Generic;
using UnityEngine;
using TapTap.Common;

namespace TapTap.TapDB { 
    public static class TapDB {
        public delegate void LogCallbackDelegate(string condition, string stackTrace, LogType type);

        static readonly ITapDB db;

        static TapDB() {
            Type interfaceType = typeof(ITapDB);
            Type platformDBType = AppDomain.CurrentDomain.GetAssemblies()
                .Where(assembly => assembly.GetName().FullName.StartsWith("TapTap.TapDB"))
                .SelectMany(assembly => assembly.GetTypes())
                .SingleOrDefault(clazz => interfaceType.IsAssignableFrom(clazz) && clazz.IsClass);
            if (platformDBType != null) {
                db = Activator.CreateInstance(platformDBType) as ITapDB;
            }
        }

        public static void InitFromBootstrap(string clientId, string channel, string gameVersion, RegionType region, Dictionary<string, object> properties) {
            TapDBRegion tapDBRegion = region == RegionType.CN ? TapDBRegion.CN : TapDBRegion.IO;
            Init(clientId, channel, gameVersion, tapDBRegion, properties);
        }

        public static void Init(string clientId, string channel, string gameVersion, bool isCN) {
            db.Init(clientId, channel, gameVersion, isCN);
        }

        public static void Init(string clientId, string channel, string gameVersion, TapDBRegion region, Dictionary<string, object> properties) {
            db.Init(clientId, channel, gameVersion, region, properties);
        }

        public static void SetUser(string userId) {
            db.SetUser(userId);
        }

        public static void SetUser(string userId, string loginType) {
            db.SetUser(userId, loginType);
        }

        public static void SetUserWithProperties(string userId, Dictionary<string, object> properties) {
            db.SetUserWithProperties(userId, properties);
        }

        public static void SetName(string name) {
            db.SetName(name);
        }

        public static void SetLevel(int level) {
            db.SetLevel(level);
        }

        public static void SetServer(string server) {
            db.SetServer(server);
        }

        public static void OnCharge(string orderId, string product, long amount, string currencyType, string payment) {
            db.OnCharge(orderId, product, amount, currencyType, payment);
        }

        public static void OnCharge(string orderId, string product, long amount, string currencyType, string payment,
            string properties) {
            db.OnCharge(orderId, product, amount, currencyType, payment, properties);
        }

        public static void OnCharge(string orderId, string product, long amount, string currencyType, string payment,
            Dictionary<string, object> properties) {
            db.OnCharge(orderId, product, amount, currencyType, payment, properties);
        }

        [Obsolete("已弃用,请调用trackEvent(string eventName, Dictionary<string, object> properties)")]
        public static void OnEvent(string eventCode, string properties) {
            db.OnEvent(eventCode, properties);
        }

        public static void TrackEvent(string eventName, string properties) {
            db.TrackEvent(eventName, properties);
        }

        public static void TrackEvent(string eventName, Dictionary<string, object> properties) {
            db.TrackEvent(eventName, properties);
        }

        public static void RegisterStaticProperties(string properties) {
            db.RegisterStaticProperties(properties);
        }

        public static void RegisterStaticProperties(Dictionary<string, object> properties) {
            db.RegisterStaticProperties(properties);
        }

        public static void UnregisterStaticProperty(string propertKey) {
            db.UnregisterStaticProperty(propertKey);
        }

        public static void RegisterDynamicProperties(IDynamicProperties properties) {
            db.RegisterDynamicProperties(properties);
        }

        public static void ClearStaticProperties() {
            db.ClearStaticProperties();
        }

        public static void DeviceInitialize(string properties) {
            db.DeviceInitialize(properties);
        }

        public static void DeviceInitialize(Dictionary<string, object> properties) {
            db.DeviceInitialize(properties);
        }

        public static void DeviceUpdate(string properties) {
            db.DeviceUpdate(properties);
        }

        public static void DeviceUpdate(Dictionary<string, object> properties) {
            db.DeviceUpdate(properties);
        }

        public static void DeviceAdd(string properties) {
            db.DeviceAdd(properties);
        }

        public static void DeviceAdd(Dictionary<string, object> properties) {
            db.DeviceAdd(properties);
        }

        public static void UserInitialize(string properties) {
            db.UserInitialize(properties);
        }

        public static void UserInitialize(Dictionary<string, object> properties) {
            db.UserInitialize(properties);
        }

        public static void UserUpdate(string properties) {
            db.UserUpdate(properties);
        }

        public static void UserUpdate(Dictionary<string, object> properties) {
            db.UserUpdate(properties);
        }

        public static void UserAdd(string properties) {
            db.UserAdd(properties);
        }

        public static void UserAdd(Dictionary<string, object> properties) {
            db.UserAdd(properties);
        }

        public static void EnableLog(bool enable) {
            db.EnableLog(enable);
        }

        public static void AdvertiserIDCollectionEnabled(bool enable) {
            db.AdvertiserIDCollectionEnabled(enable);
        }

        public static void CloseFetchTapTapDeviceId() {
            db.CloseFetchTapTapDeviceId();
        }

        public static void ClearUser() {
            db.ClearUser();
        }

        public static void GetTapTapDid(Action<string> action) {
            db.GetTapTapDid(action);
        }

        [Obsolete("已弃用,请调用 TapTap.Themis.TapThemis.U3d_ConfigAutoReportLogLevel(LogSeverity level)")]
        public static void ConfigAutoReportLogLevel(LogSeverity level) {
            db.ConfigAutoReportLogLevel(level);
        }

        [Obsolete("已弃用,请调用 TapTap.Themis.TapThemis.U3d_ConfigAutoQuitApplication(bool autoQuit)")]
        public static void ConfigAutoQuitApplication(bool enable) {
            db.ConfigAutoQuitApplication(enable);
        }

        [Obsolete("已弃用,请调用 TapTap.Themis.TapThemis.U3d_RegisterLogCallback(LogCallbackDelegate handler)")]
        public static void RegisterLogCallback(TapDB.LogCallbackDelegate handler) {
            db.RegisterLogCallback(handler);
        }

        [Obsolete("已弃用,请调用 TapTap.Themis.TapThemis.U3d_UnregisterLogCallback(LogCallbackDelegate handler)")]
        public static void UnRegisterLogCallback(TapDB.LogCallbackDelegate handler) {
            db.UnRegisterLogCallback(handler);
        }

        [Obsolete("已弃用,请调用 TapTap.Themis.TapThemis.ReportException(System.Exception e, string message)")]
        public static void ReportException(Exception e, string message) {
            db.ReportException(e, message);
        }

        public static void SetOAIDCert(string cert) {
            db.SetOAIDCert(cert);
        }

        public static void EnableThemis(bool enable){
            db.EnableThemis(enable);
        }

    }
}