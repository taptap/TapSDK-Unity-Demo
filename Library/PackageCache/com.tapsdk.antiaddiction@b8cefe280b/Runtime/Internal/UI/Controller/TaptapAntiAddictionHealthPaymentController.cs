using TapTap.UI;
using TapTap.AntiAddiction.Model;
using UnityEngine.UI;
using System;
using UnityEngine;

namespace TapTap.AntiAddiction.Internal 
{
    public class TaptapAntiAddictionHealthPaymentController : BasePanelController
    {
        public Text titleText;
        public Text contentText;
        public Text buttonText;
        public Button okButton;
        public ScrollRect scrollRect;
        private Action _onOk;

        /// <summary>
        /// bind ugui components for every panel
        /// </summary>
        protected override void BindComponents()
        {
            titleText = transform.Find("Root/TitleText").GetComponent<Text>();
            scrollRect = transform.Find("Root/Scroll View").GetComponent<ScrollRect>();
            contentText = transform.Find("Root/Scroll View/Viewport/Content/ContentText").GetComponent<Text>();
            okButton = transform.Find("Root/OKButton").GetComponent<Button>();
            buttonText = okButton.transform.Find("Text").GetComponent<Text>();
        }

        protected override void OnLoadSuccess()
        {
            base.OnLoadSuccess();

            okButton.onClick.AddListener(OnOKButtonClicked);
        }

        internal void Show(PayableResult payable)
        {
            titleText.text = payable.Title;
            contentText.text = ProcessContent(payable.Content);
            if (IsTextOverflowing(contentText, out int lineCount, out float lineHeight)) {
                scrollRect.enabled = true;
                contentText.rectTransform.sizeDelta = new Vector2(contentText.rectTransform.sizeDelta.x,
                    80 + lineCount * lineHeight);
                    
                var contentRect = scrollRect.transform.Find("Viewport/Content").GetComponent<RectTransform>();
                contentRect.sizeDelta = new Vector2(contentRect.sizeDelta.x,
                    80 + lineCount * lineHeight);
            }
            else {
                scrollRect.enabled = false;
            }
            var buttonText = Config.GetHealthTip();
            if (!string.IsNullOrEmpty(buttonText))
                this.buttonText.text = buttonText;
        }

        internal void Show(string title, string content, string buttonText, Action onOk = null)
        {
            titleText.text = title;
            contentText.text = ProcessContent(content);
            if (IsTextOverflowing(contentText, out int lineCount, out float lineHeight)) {
                scrollRect.enabled = true;
                contentText.rectTransform.sizeDelta = new Vector2(contentText.rectTransform.sizeDelta.x,
                    80 + lineCount * lineHeight);
                    
                var contentRect = scrollRect.transform.Find("Viewport/Content").GetComponent<RectTransform>();
                contentRect.sizeDelta = new Vector2(contentRect.sizeDelta.x,
                    80 + lineCount * lineHeight);
            }
            else {
                scrollRect.enabled = false;
            }
            if (!string.IsNullOrEmpty(buttonText))
                this.buttonText.text = buttonText;
            _onOk = onOk;
        }

        private string ProcessContent(string content)
        {
            return content
                ?.Replace("<font color=", "<color=")
                .Replace("<span color=", "<color=")
                .Replace("</font>", "</color>")
                .Replace("</span>", "</color>")
                .Replace("<br>", "\n")
                .Replace(" ", "\u00A0");
        }

        private void OnOKButtonClicked()
        {
            Close();
            _onOk?.Invoke();
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
            return lineCount > 4;
        }
    }
}