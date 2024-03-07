using System;
using TapTap.AntiAddiction.Model;
using MobileBridgeAntiAddiction = Plugins.AntiAddictionUIKit.AntiAddictionUIKit;
using CheckPayResult = Plugins.AntiAddictionUIKit.CheckPayResult;

namespace TapTap.AntiAddiction
{
    public sealed class AntiAddictionMobileOldJob : IAntiAddictionJob
    {
        private Action<int, string> _externalCallback;

        public Action<int, string> ExternalCallback
        {
            get => _externalCallback;
        }
        

        /// <summary>
        /// 剩余时间(单位:秒)
        /// </summary>
        public int RemainingTime => MobileBridgeAntiAddiction.CurrentUserRemainTime();
        
        public int AgeLimit => MobileBridgeAntiAddiction.CurrentUserAgeLimit();
        
        /// <summary>
        /// 剩余时间(单位:分钟)
        /// </summary>
        public int RemainingTimeInMinutes
        {
            get
            {
                int seconds = RemainingTime;
                if (seconds <= 0) 
                    return 0;
                return UnityEngine.Mathf.CeilToInt(seconds / 60.0f);
            }
        }
        
        public string CurrentToken => MobileBridgeAntiAddiction.CurrentToken();

        public int AgeRange => MobileBridgeAntiAddiction.CurrentUserAgeLimit();


        private bool useTapLogin;
        
        public void Init(AntiAddictionConfig config)
        {
            useTapLogin = config.useTapLogin;
            MobileBridgeAntiAddiction.Init(config.gameId, config.showSwitchAccount);
        }

        public void SetAntiAddictionCallback(Action<int, string> callback){
            _externalCallback = callback;
            MobileBridgeAntiAddiction.SetAntiAddictionCallback(callback);
        }
        
        [Obsolete("请使用 StartupWithTapTap(string userId) 替代",false)]
        public void Startup(string userId, bool isTapUser = false)
        {
            MobileBridgeAntiAddiction.StartupWithTapTap(userId);
        }

        public void StartupWithTapTap(string userId)
        {
            MobileBridgeAntiAddiction.StartupWithTapTap(userId);
        }

        public void Exit()
        {
            MobileBridgeAntiAddiction.Logout();
        }

        public void EnterGame()
        {
            MobileBridgeAntiAddiction.EnterGame();
        }

        public void LeaveGame()
        {
            MobileBridgeAntiAddiction.LeaveGame();
        }

        public void CheckPayLimit(long amount, Action<CheckPayResult> handleCheckPayLimit, Action<string> handleCheckPayLimitException)
        {
            MobileBridgeAntiAddiction.CheckPayLimit(amount, handleCheckPayLimit, handleCheckPayLimitException);
        }

        public void SubmitPayResult(long amount, Action handleSubmitPayResult, Action<string> handleSubmitPayResultException)
        {
            MobileBridgeAntiAddiction.SubmitPayResult(amount, handleSubmitPayResult, handleSubmitPayResultException);
        }
        
        public bool isStandalone()
        {
            return MobileBridgeAntiAddiction.IsStandalone();
        }
        
        public void SetTestEnvironment(bool enable) {
            MobileBridgeAntiAddiction.SetTestEnvironment(enable);
        }
    }
}
