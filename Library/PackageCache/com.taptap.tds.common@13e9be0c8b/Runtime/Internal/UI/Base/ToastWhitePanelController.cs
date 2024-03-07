using UnityEngine;
using UnityEngine.UI;

namespace TapTap.UI {
    public class ToastWhitePanelController : BasePanelController {
        private const int MAX_CHAR_COUNT = 69;
        private const float MIN_HORIZONTAL_LENGTH = 120;
        private const float MAX_HORIZONTAL_LENGTH = 1252;
        private const float BACKGROUND_WIDTH_HELPER = 60;
        [HideInInspector]
        public Text text;
        [HideInInspector]
        public RectTransform background;
        [HideInInspector]
        public RawImage iconImage;
        
        public float fixVal;

        public float animationTime;

        public ToastPanelOpenParam toastParam;

        protected override void BindComponents() {
            base.BindComponents();
            background = transform.Find("Root/BGM") as RectTransform;
            text = background.transform.Find("Container/Text").GetComponent<Text>();
            iconImage = background.transform.Find("Container/Image").GetComponent<RawImage>();
            fadeAnimationTime = animationTime;
        }

        protected override void OnLoadSuccess() {
            base.OnLoadSuccess();
            ToastPanelOpenParam param = this.openParam as ToastPanelOpenParam;
            toastParam = param;
            if (param != null) {
                iconImage.gameObject.SetActive(param.icon != null);
                text.text = param.text;
                bool overflow = text.text.Length > MAX_CHAR_COUNT;
                // test: 已登录账号:海绵宝宝和派大星一起在海边晒太阳海绵宝宝和派大星一起在海边晒太阳海绵宝宝和派大星一起在海边晒太阳海绵宝宝和派大星一起在海边晒太阳海绵宝宝和派大星一起在海边边...
                var totalLength = CalculateLengthOfText();
                if (overflow) {
                    bool haveIcon = param.icon != null;
                    int length = Mathf.Min(MAX_CHAR_COUNT - (haveIcon ? 4 : 0), param.text.Length - 1);
                    var transformedText = param.text.Substring(0, length) + "...";
                    text.text = transformedText;
                }
                var x = totalLength;
                var y = background.sizeDelta.y;
                background.sizeDelta = new Vector2(x + BACKGROUND_WIDTH_HELPER, y);
                var textRect = text.transform as RectTransform;
                
                if (param.icon != null) {
                    iconImage.texture = param.icon;
                    textRect.sizeDelta = new Vector2(x, y);
                }
                else {
                    textRect.anchoredPosition = Vector2.zero;
                    textRect.anchorMin = Vector2.zero;
                    textRect.anchorMax = Vector2.one;
                    textRect.sizeDelta = Vector2.zero;
                }
                this.Invoke("Close", param.popupTime);
            }
        }

        private float CalculateLengthOfText() {
            var width = text.preferredWidth + fixVal;
            width = Mathf.Max(MIN_HORIZONTAL_LENGTH, width);
            var maxWidth = MAX_HORIZONTAL_LENGTH;
            width = Mathf.Min(maxWidth, width);
            return width;
        }

        public void Refresh(float refreshTime) {
            this.CancelInvoke("Close");
            this.Invoke("Close", refreshTime);
        }
    }
}
