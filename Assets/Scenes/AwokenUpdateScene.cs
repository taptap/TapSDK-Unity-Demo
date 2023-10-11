using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using TapTap.Common;

public class AwokenUpdateScene : MonoBehaviour
{
    public GUISkin demoSkin;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnGUI()
    {

        GUI.skin = demoSkin;
        float scale = 1.0f;

		
		float btnWidth= Screen.width / 5 * 2;
        float btnWidth2 = btnWidth + 80 * scale;

        float btnHeight = Screen.height / 25;
		float btnTop = 30 * scale;
		float btnGap = 20 * scale;

		GUI.skin.button.fontSize = Convert.ToInt32(13 * scale);

        var style = new GUIStyle(GUI.skin.button) { fontSize = 20 };
        var labelStyle = new GUIStyle(GUI.skin.label) { fontSize = 30 };

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth /2, btnHeight), "返回", style))
		{
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(0);

        }

        btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "唤起更新", style))
		{
            toUpdate();
        }





    }


    public async void toUpdate(){

        // bool isSuccess = await TapCommon.UpdateGameAndFailToWebInTapTap("224274");
        bool isSuccess = await TapCommon.UpdateGameAndFailToWebInTapTap("224274", "https://www.taptap.cn/app/224274");


    }
}
