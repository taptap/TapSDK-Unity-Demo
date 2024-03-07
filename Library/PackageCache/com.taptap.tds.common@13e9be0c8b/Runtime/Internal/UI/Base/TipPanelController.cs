using System;
using UnityEngine;
using UnityEngine.UI;

namespace TapTap.UI
{
    public class TipPanelOpenParam : AbstractOpenPanelParameter
    {
        public string text;

        public Color textColor;

        public TextAnchor textAnchor;

        public TipPanelOpenParam(string text, Color textColor, TextAnchor textAnchor)
        {
            this.text = text;
            this.textColor = textColor;
            this.textAnchor = textAnchor;
        }
    }
    public class TipPanelController : BasePanelController
    {
        public Text text;

        protected override void BindComponents()
        {
            base.BindComponents();
            text = transform.Find("Text").GetComponent<Text>();
        }

        protected override void OnLoadSuccess()
        {
            base.OnLoadSuccess();
            TipPanelOpenParam param = this.openParam as TipPanelOpenParam;
            if (param != null)
            {
                text.text = param.text;
                text.color = param.textColor;
                text.alignment = param.textAnchor;
            }
        }

    }
}