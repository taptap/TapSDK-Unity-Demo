using System;
using System.Threading.Tasks;
using TapTap.AntiAddiction.Model;
using TapTap.AntiAddiction.Internal;
using TapTap.UI;

namespace TapTap.AntiAddiction
{
    public static class TapTapAntiAddictionUIKit
    {
        /// <summary>
        /// 打开健康提醒窗口
        /// </summary>
        internal static void OpenHealthReminderPanel(PlayableResult playable, Action onOk = null, Action onSwitchAccount = null)
        {
            var path = AntiAddictionConst.GetPrefabPath(AntiAddictionConst.HEALTH_REMINDER_PANEL_NAME,
                TapTapAntiAddictionManager.IsUseMobileUI());
            var healthReminderPanel = UIManager.Instance.OpenUI<TaptapAntiAddictionHealthReminderController>(path);
            healthReminderPanel.Show(playable, onOk, onSwitchAccount);
        }

        /// <summary>
        /// 打开健康充值提醒窗口
        /// </summary>
        /// <param name="payable"></param>
        internal static void OpenHealthPaymentPanel(PayableResult payable)
        {
            var path = AntiAddictionConst.GetPrefabPath(AntiAddictionConst.HEALTH_PAYMENT_PANEL_NAME,
                TapTapAntiAddictionManager.IsUseMobileUI());
            var healthPaymentPanel = UIManager.Instance.OpenUI<TaptapAntiAddictionHealthPaymentController>(path);
            healthPaymentPanel.Show(payable);
        }
        
        /// <summary>
        /// 打开健康充值提醒窗口.填入自定义的文本内容
        /// </summary>
        /// <param name="title"></param>
        /// <param name="content"></param>
        /// <param name="buttonText"></param>
        public static void OpenHealthPaymentPanel(string title, string content, string buttonText, Action onOk = null)
        {
            var path = AntiAddictionConst.GetPrefabPath(AntiAddictionConst.HEALTH_PAYMENT_PANEL_NAME,
                TapTapAntiAddictionManager.IsUseMobileUI());
            var healthPaymentPanel = UIManager.Instance.OpenUI<TaptapAntiAddictionHealthPaymentController>(path);
            healthPaymentPanel.Show(title, content, buttonText, onOk);
        }

        /// <summary>
        /// 打开重试对话框
        /// </summary>
        internal static void ShowRetryDialog(string message, Action onRetry, string confirmButtonText = null)
        {
            var path = AntiAddictionConst.GetPrefabPath(AntiAddictionConst.RETRY_ALERT_PANEL_NAME,
                TapTapAntiAddictionManager.IsUseMobileUI());
            var retryAlert =
                UIManager.Instance.OpenUI<TaptapAntiAddictionRetryAlertController>(path);
            retryAlert.Show(message, onRetry, confirmButtonText);
        }

        public static Task ShowRetryDialog(string message, string confirmButtonText = null)
        {
            TaskCompletionSource<object> tcs = new TaskCompletionSource<object>();
            ShowRetryDialog(message, () => tcs.TrySetResult(null), confirmButtonText);
            return tcs.Task;
        }
        
    }
}
