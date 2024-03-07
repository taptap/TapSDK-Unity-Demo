using System;
using CheckPayResult = Plugins.AntiAddictionUIKit.CheckPayResult;
using TapTap.AntiAddiction.Model;

namespace TapTap.AntiAddiction
{
    public interface IAntiAddictionJob
    {
        /// <summary>
        /// 根据状态的对外回调
        /// </summary>
        Action<int, string> ExternalCallback { get;}
        
        int RemainingTimeInMinutes { get; }

        int AgeRange { get; }
        /// <summary>
        /// 剩余时间(单位:秒)
        /// </summary>
        int RemainingTime { get; }
        
        string CurrentToken { get; }
        
        /// <summary>
        /// 新的初始化接口
        /// </summary>
        /// <param name="config"></param>
        void Init(AntiAddictionConfig config);
        /// <summary>
        /// 设置防沉迷回调
        /// </summary>
        /// <param name="callback">int 代表返回 code, string 代表 message</param>
        void SetAntiAddictionCallback(Action<int, string> callback);
        
        void StartupWithTapTap(string userId);

        void Startup(string userId, bool isTapUser);

        void Exit();

        void EnterGame();

        void LeaveGame();
        
        void CheckPayLimit(long amount
            , Action<CheckPayResult> handleCheckPayLimit
            , Action<string> handleCheckPayLimitException);

        void SubmitPayResult(long amount
            , Action handleSubmitPayResult
            , Action<string> handleSubmitPayResultException);
        
        bool isStandalone();

        void SetTestEnvironment(bool enable);
    }
}
