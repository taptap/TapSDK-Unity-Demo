using System;
using System.IO;
using System.Globalization;
using System.Threading.Tasks;
using System.Collections.Generic;
using UnityEngine;
using LC.Newtonsoft.Json;
using TapTap.AntiAddiction.Model;
using TapTap.Common;

namespace TapTap.AntiAddiction.Internal 
{
    public static class Config 
    {
        private class TipConfig 
        {
            internal Dictionary<int, HealthReminderTip> healthReminderTips;
            internal Dictionary<int, PayLimitTip> payLimitTips;
            internal Dictionary<int, AuthIdentifyTip> authIdentifyTips;
            internal string healthPayTipButtonText;
        }
        static readonly string CONFIG_SDK_PATH = "Config/anti-addiction";
        internal static readonly string ANTI_ADDICTION_DIR = "tap-anti-addiction";
        static readonly string CONFIG_FILENAME = "config";
        static readonly string UPLOAD_USER_ACTION = "1";
        static readonly int QUICK_VERIFY_TIP_PANEL_INDEX = 6;
        static readonly int USEABLE_HEALTH_REMINDER_INDEX = 1;
        static readonly int MINOR_UNPLAYABLE_HEALTH_REMINDER_INDEX = 5;
        static readonly int MINOR_PLAYABLE_HEALTH_REMINDER_INDEX = 7;
        static readonly int CHINA_IDENTIFY_INPUT_TIP_INDEX = 3;
        static readonly int CHINA_IDENTIFY_INPUT_VERIFY_ING_TIP_INDEX = 4;
        static readonly int CHINA_IDENTIFY_INPUT_FORMAT_ERROR_TIP_INDEX = 5;
        private const string TIME_FROMAT = "HH:mm";

        internal static readonly Persistence persistence = new Persistence(Path.Combine(Application.persistentDataPath,
            ANTI_ADDICTION_DIR, CONFIG_FILENAME));
        

        static AntiAddictionConfigResult current;

        private static TipConfig currentTipConfig;
        private static TipConfig localTipConfig;

        public static AntiAddictionConfigResult Current 
        {
            get => current;
            private set =>  current = value;
        }

        private static AntiAddictionConfigResult _localConfig;

        internal static async Task Fetch() 
        {
            _localConfig = LoadFromBuiltin();
            // 从服务端加载
            try 
            {
                Current = await Network.FetchConfig();
                if (IsValid())
                {
                    await persistence.Save(Current);
                    return;
                }
                else
                {
                    Current = _localConfig;
                }
            } 
            catch (Exception e) 
            {
                TapLogger.Error(e);
            }

            // 从设备加载
            try 
            {
                Current = await persistence.Load<AntiAddictionConfigResult>();
                if (Current != null)
                    return;
            } 
            catch (Exception e) 
            {
                TapLogger.Error(e);
            }

            Current = _localConfig;
        }
        

        private static AntiAddictionConfigResult LoadFromBuiltin()
        {
            // 从 SDK 中加载
            try
            {
                TextAsset textAsset = Resources.Load(CONFIG_SDK_PATH) as TextAsset;
                if (textAsset != null)
                    return JsonConvert.DeserializeObject<AntiAddictionConfigResult>(textAsset.text);
            } 
            catch (Exception e) 
            {
                TapLogger.Error(e);
            }

            return null;
        }

        private static bool IsValid()
        {
            if (current == null) return false;
            if (current.UIConfig == null) return false;
            return true;
        }

        internal static void OnFetched()
        {
            if (current == null) return;
            currentTipConfig = new TipConfig();
            localTipConfig = new TipConfig();
            
            
            currentTipConfig.healthReminderTips = new Dictionary<int, HealthReminderTip>();
            if (current.UIConfig?.HealthReminderTips != null) {
                foreach (HealthReminderTips tips in current.UIConfig.HealthReminderTips) {
                    if (tips.AccountType == USEABLE_HEALTH_REMINDER_INDEX) {
                        foreach (HealthReminderTip tip in tips.Tips) {
                            currentTipConfig.healthReminderTips.Add(tip.Type, tip);
                        }
                    }
                }
            }
            localTipConfig.healthReminderTips = new Dictionary<int, HealthReminderTip>();
            if (_localConfig.UIConfig?.HealthReminderTips != null) {
                foreach (HealthReminderTips tips in _localConfig.UIConfig.HealthReminderTips) {
                    if (tips.AccountType == USEABLE_HEALTH_REMINDER_INDEX) {
                        foreach (HealthReminderTip tip in tips.Tips) {
                            localTipConfig.healthReminderTips.Add(tip.Type, tip);
                        }
                    }
                }
            }
            
            currentTipConfig.payLimitTips = new Dictionary<int, PayLimitTip>();
            if (current.UIConfig?.PayLimitTips != null) {
                foreach (PayLimitTip tip in current.UIConfig.PayLimitTips) {
                    currentTipConfig.payLimitTips.Add(tip.AccountType, tip);
                }
            }
            localTipConfig.payLimitTips = new Dictionary<int, PayLimitTip>();
            if (_localConfig.UIConfig?.PayLimitTips != null) {
                foreach (PayLimitTip tip in _localConfig.UIConfig.PayLimitTips) {
                    localTipConfig.payLimitTips.Add(tip.AccountType, tip);
                }
            }
            
            currentTipConfig.authIdentifyTips = new Dictionary<int, AuthIdentifyTip>();
            if (current.UIConfig?.AuthIdentifyTips != null) {
                foreach (var tip in current.UIConfig.AuthIdentifyTips) {
                    currentTipConfig.authIdentifyTips.Add(tip.AuthIdentifyType, tip);
                }
            }
            localTipConfig.authIdentifyTips = new Dictionary<int, AuthIdentifyTip>();
            if (_localConfig.UIConfig?.AuthIdentifyTips != null) {
                foreach (var tip in _localConfig.UIConfig.AuthIdentifyTips) {
                    localTipConfig.authIdentifyTips.Add(tip.AuthIdentifyType, tip);
                }
            }

            if (current.UIConfig?.AuthIdentifyTips != null && current.UIConfig?.AuthIdentifyTips.Length > CHINA_IDENTIFY_INPUT_VERIFY_ING_TIP_INDEX){
                currentTipConfig.healthPayTipButtonText = current.
                    UIConfig?.AuthIdentifyTips[CHINA_IDENTIFY_INPUT_VERIFY_ING_TIP_INDEX].PositiveButtonText;
            }
            if (_localConfig.UIConfig?.AuthIdentifyTips != null && _localConfig.UIConfig?.AuthIdentifyTips.Length > CHINA_IDENTIFY_INPUT_VERIFY_ING_TIP_INDEX){
                localTipConfig.healthPayTipButtonText = _localConfig.
                    UIConfig?.AuthIdentifyTips[CHINA_IDENTIFY_INPUT_VERIFY_ING_TIP_INDEX].PositiveButtonText;
            }
        }
        
        internal static bool NeedUploadUserAction => Current?.UploadUserAction == UPLOAD_USER_ACTION;

        public static HealthReminderTip GetMinorUnplayableHealthReminderTip() 
        {
            if (currentTipConfig.healthReminderTips != null && currentTipConfig.healthReminderTips.TryGetValue(MINOR_UNPLAYABLE_HEALTH_REMINDER_INDEX, out HealthReminderTip tip)) {
                return tip;
            }
            else if (localTipConfig.healthReminderTips != null && localTipConfig.healthReminderTips.TryGetValue(MINOR_UNPLAYABLE_HEALTH_REMINDER_INDEX, out tip)) {
                return tip;
            }
            return null;
        }

        public static string GetHealthTip() {
            if (!string.IsNullOrEmpty(currentTipConfig.healthPayTipButtonText)) {
                return currentTipConfig.healthPayTipButtonText;
            }
            else if (!string.IsNullOrEmpty(localTipConfig.healthPayTipButtonText)) {
                return localTipConfig.healthPayTipButtonText;
            }
            return null;
        }
        
        internal static HealthReminderTip GetMinorUnplayableHealthReminderTipVietnam()
        {
            var healthInfo = Current.UIConfig.HealthReminderVietnam;
            if (healthInfo != null)
            {
                return new HealthReminderTip
                {
                    Type = 1,
                    Title = healthInfo.title,
                    Content = healthInfo.description,
                };
            }
            return null;
        }

        internal static AuthIdentifyTip GetInputIdentifyTip()
        {
            if (currentTipConfig.authIdentifyTips != null && currentTipConfig.authIdentifyTips.TryGetValue(CHINA_IDENTIFY_INPUT_TIP_INDEX, out AuthIdentifyTip tip)) {
                return tip;
            }
            else if (localTipConfig.authIdentifyTips != null && localTipConfig.authIdentifyTips.TryGetValue(CHINA_IDENTIFY_INPUT_TIP_INDEX, out tip)) {
                return tip;
            }
            return null;
        }
        internal static AuthIdentifyTip GetQuickVerifyTipPanelTip()
        {
            if (currentTipConfig.authIdentifyTips != null && currentTipConfig.authIdentifyTips.TryGetValue(QUICK_VERIFY_TIP_PANEL_INDEX, out AuthIdentifyTip tip)) {
                return tip;
            }
            else if (localTipConfig.authIdentifyTips != null && localTipConfig.authIdentifyTips.TryGetValue(QUICK_VERIFY_TIP_PANEL_INDEX, out tip)) {
                return tip;
            }
            return null;
        }
        
        public static AuthIdentifyTip GetInputIdentifyFormatErrorTip()
        {
            if (currentTipConfig.authIdentifyTips != null && currentTipConfig.authIdentifyTips.TryGetValue(CHINA_IDENTIFY_INPUT_FORMAT_ERROR_TIP_INDEX, out AuthIdentifyTip tip)) {
                return tip;
            }
            else if (localTipConfig.authIdentifyTips != null && localTipConfig.authIdentifyTips.TryGetValue(CHINA_IDENTIFY_INPUT_FORMAT_ERROR_TIP_INDEX, out tip)) {
                return tip;
            }
            return null;
        }
        
        /// <summary>
        /// 认证中提示(因为中宣部认证无响应)
        /// </summary>
        /// <returns></returns>
        public static AuthIdentifyTip GetInputIdentifyBlockingTip()
        {
            if (currentTipConfig.authIdentifyTips != null && currentTipConfig.authIdentifyTips.TryGetValue(CHINA_IDENTIFY_INPUT_VERIFY_ING_TIP_INDEX, out AuthIdentifyTip tip)) {
                return tip;
            }
            else if (localTipConfig.authIdentifyTips != null && localTipConfig.authIdentifyTips.TryGetValue(CHINA_IDENTIFY_INPUT_VERIFY_ING_TIP_INDEX, out tip)) {
                return tip;
            }
            return null;
        }
        
        public static HealthReminderTip GetMinorPlayableHealthReminderTip() 
        {
            if (currentTipConfig.healthReminderTips != null && currentTipConfig.healthReminderTips.TryGetValue(MINOR_PLAYABLE_HEALTH_REMINDER_INDEX, out HealthReminderTip tip)) 
            {
                return tip;
            }
            else if (localTipConfig.healthReminderTips != null && localTipConfig.healthReminderTips.TryGetValue(MINOR_PLAYABLE_HEALTH_REMINDER_INDEX, out tip)) {
                return tip;
            }
            return null;
        }

        public static DateTimeOffset StrictStartTime =>
            DateTimeOffset.ParseExact(current.ChildProtectedConfig.NightStrictStart,
                TIME_FROMAT, CultureInfo.InvariantCulture);

        public static DateTimeOffset StrictEndTime =>
            DateTimeOffset.ParseExact(current.ChildProtectedConfig.NightStrictEnd,
                TIME_FROMAT, CultureInfo.InvariantCulture);
    }
}
