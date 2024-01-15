using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityNative.Toasts.Example;
using System;
using TapTap.Login;
using TapTap.Common;
using TapTap.Bootstrap;
using LeanCloud;
using LeanCloud.Storage;
using LeanCloud.Realtime;


public class LeaderboardScene : MonoBehaviour
{
        public GUISkin demoSkin;
        public TDSUser myself;

    // Start is called before the first frame update
    async void Start()
    {
            var currentUser = await TDSUser.GetCurrent();
            if (null == currentUser)
            {
                Debug.Log("当前未登录");
                UnityNativeToastsHelper.ShowShortText("当前未登录");
                UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(0);

                return;
            }else {
                myself = currentUser;

            }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private async void OnGUI()
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

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "提交成绩", style))
		{
            var statistic = new Dictionary<string, double>();
            statistic["word"] = 60.0;
            await LCLeaderboard.UpdateStatistics(myself, statistic);
            UnityNativeToastsHelper.ShowShortText("提交成功");

        }
        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "获取名次", style))
		{
            var leaderboard = LCLeaderboard.CreateWithoutData("word");
            var rankings = await leaderboard.GetResults(limit: 10);
            foreach(var ranking in rankings) {

                UnityNativeToastsHelper.ShowShortText("名次："+ ranking.ToString());


            }
        }

         btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "更新成绩", style))
		{
            var statistic = new Dictionary<string, double> {
                { "word", 3458.0 },
            };
            await LCLeaderboard.UpdateStatistics( myself, statistic);
            UnityNativeToastsHelper.ShowShortText("更新成绩成功");

        }

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "删除成绩", style))
		{
            await LCLeaderboard.DeleteStatistics(myself, new List<string> { "word" });
            UnityNativeToastsHelper.ShowShortText("删除成绩成功");

        }

        btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "查询排行榜成员成绩", style))
		{
            var otherUser = LCObject.CreateWithoutData(TDSUser.CLASS_NAME, "6371b3c9477c6532442ec867");
            var statistics = await LCLeaderboard.GetStatistics(otherUser);
            foreach(var statistic in statistics) {

            Debug.Log(statistic.Name);
            Debug.Log(statistic.Value);

            UnityNativeToastsHelper.ShowShortText(statistic.Name+": "+ statistic.Value);

            }
        }

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "获取排行榜结果", style))
		{
            var leaderboard = LCLeaderboard.CreateWithoutData("word");
            Debug.Log(leaderboard.ToString());


        }

        btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "获取排行榜属性", style))
		{
           
            var leaderboardData = await LCLeaderboard.GetLeaderboard("word");
            int endlessVersion = leaderboardData.Version;

        
        }
         if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "查询测试", style))
		{
           

            // var leaderboardData = await LCLeaderboard.GetLeaderboard("word");

            // var tapRankings = await leaderboardData.GetResults(limit: 10, selectKeys: new List<string>{ "nickname", "avatar"});

            // foreach (var item in tapRankings)
            // {

            //  Debug.Log($"ranking profile: {item.User}");

            // }

           var otherUser = LCObject.CreateWithoutData(TDSUser.CLASS_NAME, "64c1dd77203d933a5876a2b9");
            // var statistics = await LCLeaderboard.GetStatistics(otherUser);
            // Debug.Log($"======: "+ statistics.ToString());
            // foreach(var statistic in statistics) {
            //   Debug.Log(statistic.Name);
            //   Debug.Log(statistic.Value);
            // }


            var leaderboard = LCLeaderboard.CreateWithoutData("word");

            var rankings = await leaderboard.GetResults(otherUser, limit: 1, selectKeys: new List<string> { "username" });

            Debug.Log($"======: "+ rankings.ToString());

            foreach(var ranking in rankings) {

                Debug.Log("-------》》》 "+ ranking.Rank);


            }   






        }

        
        

    }
}
