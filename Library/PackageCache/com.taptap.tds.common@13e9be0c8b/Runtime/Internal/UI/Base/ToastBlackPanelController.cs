using UnityEngine;
using UnityEngine.UI;

namespace TapTap.UI {
    public class ToastPanelOpenParam : AbstractOpenPanelParameter {
        public float popupTime;

        public string text;

        public Texture icon;

        public ToastPanelOpenParam(string text, float popupTime, Texture icon = null) {
            this.text = text;
            this.popupTime = popupTime;
            this.icon = icon;
        }
    }
    
    public class ToastBlackPanelController : BasePanelController {
        private const int MAX_CHAR_COUNT = 87;
        private const float MIN_HORIZONTAL_LENGTH = 210;
        private const float MAX_HORIZONTAL_LENGTH = 1252;
        [HideInInspector]
        public Text text;
        [HideInInspector]
        public RectTransform background;
        [HideInInspector]
        public LayoutGroup layout;
        [HideInInspector]
        public RawImage iconImage;
        
        public float fixVal;

        public float animationTime;

        [SerializeField]
        private float sizeDeltaX = 50f;
        
        protected override void BindComponents() {
            base.BindComponents();
            background = transform.Find("Root/BGM") as RectTransform;
            layout = background.transform.Find("Container").GetComponent<LayoutGroup>();
            text = layout.transform.Find("Text").GetComponent<Text>();
            iconImage = layout.transform.Find("Mask/Icon").GetComponent<RawImage>();
            fadeAnimationTime = animationTime;
        }

        protected override void OnLoadSuccess() {
            base.OnLoadSuccess();
            ToastPanelOpenParam param = this.openParam as ToastPanelOpenParam;
            if (param != null) {
                
                iconImage.gameObject.SetActive(param.icon != null);
                layout.enabled = param.icon != null;
                text.text = param.text;
                bool overflow;
                // test: 已登录账号:海绵宝宝和派大星一起在海边晒太阳海绵宝宝和派大星一起在海边晒太阳海绵宝宝和派大星一起在海边晒太阳海绵宝宝和派大星一起在海边晒太阳海绵宝宝和派大星一起在海边边...
                var totalLength = CalculateLengthOfText(out overflow);
                if (overflow) {
                    bool haveIcon = param.icon != null;
                    int length = Mathf.Min(MAX_CHAR_COUNT - (haveIcon ? 4 : 0), param.text.Length - 1);
                    var transformedText = param.text.Substring(0, length) + "...";
                    text.text = transformedText;
                }
                var x = totalLength;
                var y = background.sizeDelta.y;
                background.sizeDelta = new Vector2(x, y);
                var textRect = text.transform as RectTransform;
                
                if (param.icon != null) {
                    iconImage.texture = param.icon;
                    text.alignment = TextAnchor.MiddleLeft;
                    textRect.sizeDelta = new Vector2(x - sizeDeltaX, 24);
                }
                else {
                    text.alignment = TextAnchor.MiddleCenter;
                    textRect.anchoredPosition = Vector2.zero;
                    textRect.anchorMin = Vector2.zero;
                    textRect.anchorMax = Vector2.one;
                    textRect.sizeDelta = Vector2.zero;
                }
                this.Invoke("Close", param.popupTime);
            }
        }

        protected float CalculateLengthOfText( out bool horizontalOverflow) {
            var width = text.preferredWidth + fixVal + 12;
            width = Mathf.Max(MIN_HORIZONTAL_LENGTH, width);
            var maxWidth = MAX_HORIZONTAL_LENGTH;
            horizontalOverflow = width > maxWidth;
            width = Mathf.Min(maxWidth, width);
            return width;
        }
    }
}
