using System;
using System.Threading.Tasks;
using TapTap.AntiAddiction.Internal;
using TapTap.AntiAddiction.Model;
using TapTap.Login;
using TapTap.AntiAddiction.Model;
using CheckPayResult = Plugins.AntiAddictionUIKit.CheckPayResult;

namespace TapTap.AntiAddiction
{
    public sealed class AntiAddictionNewJob : IAntiAddictionJob
    {
        private bool useTapLogin;
        private Action<int, string> _externalCallback;

        public Action<int, string> ExternalCallback
        {
            get => _externalCallback;
        }
        
        public int AgeRange
        {
            get
            {
                if (!Verification.IsVerified) return -1;
                return Verification.AgeLimit;
            }
        }

        /// <summary>
        /// 剩余时间(单位:秒)
        /// </summary>
        public int RemainingTime
        {
            get
            {
                if (TapTapAntiAddictionManager.CurrentRemainSeconds == null) return 0;
                return TapTapAntiAddictionManager.CurrentRemainSeconds.Value;
            }
        }

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
        
        public string CurrentToken
        {
            get
            {
                if (!Verification.IsVerified) return "";
                return Verification.GetCurrentToken();
            }
        }
        
        public void Init(AntiAddictionConfig config) {
            useTapLogin = config.useTapLogin;
            SetRegion(config.region);
            TapTapAntiAddictionManager.Init(config);
        }

        public void SetAntiAddictionCallback(Action<int, string> callback){
            _externalCallback = callback;
        }
        
        public async void Startup(string userId, bool isTapUser) {
            await StartupAsync(userId, isTapUser);
        }
        
        public async Task StartupAsync(string userId, bool isTapUser)
        {
            var code = await TapTapAntiAddictionManager.StartUp(userId, isTapUser);
            
            if (StartUpResult.Contains(code))
                ExternalCallback?.Invoke(code, null);
        }
        
        /// <summary>
        /// Async Method
        /// </summary>
        /// <param name="userId"></param>
        public async void StartupWithTapTap(string userId)
        {
            await StartupAsync(userId, true);
        }

        // ReSharper disable Unity.PerformanceAnalysis

        public void Exit()
        {
            TapTapAntiAddictionManager.Logout();
            _externalCallback?.Invoke(StartUpResult.EXITED, null);
        }

        public void EnterGame()
        {
            TapTapAntiAddictionManager.EnterGame();
        }

        public void LeaveGame()
        {
            TapTapAntiAddictionManager.LeaveGame();
        }

        public async void CheckPayLimit(long amount, Action<CheckPayResult> handleCheckPayLimit, Action<string> handleCheckPayLimitException)
        {
            try
            {
                var payResult = await TapTapAntiAddictionManager.CheckPayLimit(amount);
                handleCheckPayLimit?.Invoke(new CheckPayResult()
                {
                    // status 为 1 时可以支付
                    status = payResult.Status ? 1 : 0,
                    title = payResult.Title,
                    description = payResult.Content
                });
            }
            catch (Exception e)
            {
                handleCheckPayLimitException?.Invoke(e.Message);
            }
        }

        public async void SubmitPayResult(long amount, Action handleSubmitPayResult, Action<string> handleSubmitPayResultException)
        {
            try
            {
                await TapTapAntiAddictionManager.SubmitPayResult(amount);
                handleSubmitPayResult?.Invoke();
            }
            catch (Exception e)
            {
                handleSubmitPayResultException?.Invoke(e.Message);
            }
        }
        
        public bool isStandalone()
        {
            var task = Task.Run(async () => await TapTapAntiAddictionManager.IsStandaloneEnabled());
            return task.Result;
        }

        public void SetTestEnvironment(bool enable) {
            TapTapAntiAddictionManager.SetTestEnvironment(enable);
        }

        public void SetRegion(Region region)
        {
            TapTapAntiAddictionManager.SetRegion(region);
            if (region == Region.China) {
                TapLogin.AppendPermission(TapLogin.TAP_LOGIN_SCOPE_COMPLIANCE);
            }
            else {
                TapLogin.RemovePermission(TapLogin.TAP_LOGIN_SCOPE_COMPLIANCE);
            }
        }

    }
}
