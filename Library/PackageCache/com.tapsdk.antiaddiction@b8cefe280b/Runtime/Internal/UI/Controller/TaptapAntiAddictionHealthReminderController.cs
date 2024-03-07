using System;
using UnityEngine.UI;
using TapTap.UI;
using UnityEngine;

namespace TapTap.AntiAddiction.Internal {
    public class TaptapAntiAddictionHealthReminderController : BasePanelController
    {
        public Text titleText;
        public Text contentText;
        public Button switchAccountButton;
        public Button okButton;
        public ScrollRect scrollRect;

        private Action OnOk { get; set; }
        private Action OnSwitchAccount { get; set; }

        /// <summary>
        /// bind ugui components for every panel
        /// </summary>
        protected override void BindComponents()
        {
            titleText = transform.Find("Root/TitleText").GetComponent<Text>();
            scrollRect = transform.Find("Root/Scroll View").GetComponent<ScrollRect>();
            contentText = transform.Find("Root/Scroll View/Viewport/Content/ContentText").GetComponent<Text>();
            switchAccountButton = transform.Find("Root/SwitchAccountButton").GetComponent<Button>();
            okButton = transform.Find("Root/OKButton").GetComponent<Button>();
        }

        protected override void OnLoadSuccess()
        {
            base.OnLoadSuccess();

            switchAccountButton.onClick.AddListener(OnSwitchAccountButtonClicked);
            okButton.onClick.AddListener(OnOKButtonClicked);
        }

        internal void Show(PlayableResult playable, Action onOk, Action onSwitchAccount)
        {
            OnOk = onOk;
            OnSwitchAccount = onSwitchAccount;
            titleText.text = playable.Title;
            int remainTime = Math.Max(0, playable.RemainTime / 60);
            remainTime = Math.Min(PlayableResult.MaxRemainTime, remainTime);
            // 替换富文本标签
            //周六、周日和法定节假日每日 20 时至 21 时向未成年人提供 60 分钟网络游戏服务
            contentText.text = playable.Content
                ?.Replace("<font color=", "<color=")
                .Replace("</font>", "</color>")
                .Replace("<span color=", "<color=")
                .Replace("</span>", "</color>")
                .Replace("<br>", "\n")
                // 设置剩余时间
                .Replace("# ${remaining} #", remainTime.ToString())
                .Replace(" ", "\u00A0");
            if (IsTextOverflowing(contentText, out int lineCount, out float lineHeight)) {
                scrollRect.enabled = true;
                contentText.rectTransform.sizeDelta = new Vector2(contentText.rectTransform.sizeDelta.x,
                    lineCount * lineHeight);
                    
                var contentRect = scrollRect.transform.Find("Viewport/Content").GetComponent<RectTransform>();
                contentRect.sizeDelta = new Vector2(contentRect.sizeDelta.x,
                    lineCount * lineHeight);
            }
            else {
                scrollRect.enabled = false;
            }
            switchAccountButton.gameObject.SetActive(onSwitchAccount != null);

            var buttonText = okButton.transform.Find("Text").GetComponent<Text>();
            var switchButtonText = switchAccountButton.transform.Find("Text").GetComponent<Text>();
            if (TapTapAntiAddictionManager.AntiAddictionConfig.region == Region.Vietnam)
            {
                if (onOk == null && onSwitchAccount != null)
                {
                    buttonText.text =
                        Config.Current.UIConfig.HealthReminderVietnam.buttonSwitch;
                    OnOk = onSwitchAccount;
                    OnSwitchAccount = null;
                    switchAccountButton.gameObject.SetActive(false);
                }
                else
                {
                    buttonText.text =
                        Config.Current.UIConfig.HealthReminderVietnam.buttonExit;
                    switchButtonText.text =
                        Config.Current.UIConfig.HealthReminderVietnam.buttonSwitch;
                }
            }
            else
            {
                buttonText.text = playable.CanPlay
                    ? TapTapAntiAddictionManager.LocalizationItems.Current.EnterGame
                    : TapTapAntiAddictionManager.LocalizationItems.Current.ExitGame;
            }

        }

        private void OnOKButtonClicked()
        {
            Close();
            OnOk?.Invoke();
        }

        private void OnSwitchAccountButtonClicked()
        {
            Close();
            OnSwitchAccount?.Invoke();
        }
        
        bool IsTextOverflowing(Text text, out int lineCount, out float lineHeight)
        {
            var textGenerator = text.cachedTextGenerator;
            var settings = text.GetGenerationSettings(text.rectTransform.rect.size);
            textGenerator.Populate(text.text, settings);
            lineCount = textGenerator.lineCount;
            if (TapTapAntiAddictionManager.IsUseMobileUI()) {
                lineCount += 3;
            }
            lineHeight = 25 + (text.lineSpacing - 1) * 25;
            return lineCount > 5;
        }
    }
}