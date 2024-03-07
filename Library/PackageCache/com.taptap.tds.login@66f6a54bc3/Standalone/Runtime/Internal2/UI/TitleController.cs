using TapTap.Login.Internal;
using UnityEngine;
using UnityEngine.UI;

public class TitleController {
    private readonly Text leftText;
    private readonly Text rightText;

    public TitleController(Transform transform) {
        leftText = transform.Find("LeftText").GetComponent<Text>();
        rightText = transform.Find("RightText").GetComponent<Text>();
    }

    public void Load() {
        ILoginLang lang = LoginLanguage.GetCurrentLang();
        leftText.text = lang.TitleLogin();
        leftText.gameObject.SetActive(!string.IsNullOrEmpty(leftText.text));
        rightText.gameObject.SetActive(false);
    }
}
