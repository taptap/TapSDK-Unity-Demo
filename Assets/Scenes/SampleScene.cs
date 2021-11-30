using System.Collections.Generic;
using TapTap.Bootstrap;
using TapTap.Common;
using TapTap.Support;
using UnityEngine;
using UnityEngine.SceneManagement;
using Button = UnityEngine.UI.Button;

namespace Assets.Scenes
{
    public class SampleScene : MonoBehaviour
    {
        public Button initSdkButton,
            goLoginScene,
            goAchievementScene,
            goTapDBScene,
            goFriendsScene,
            goMomentScene,
            goRTCScene;

        void Start()
        {
            initSdkButton.onClick.AddListener(InitTapSdk);
            goLoginScene.onClick.AddListener(() => SceneManager.LoadSceneAsync(1));
            goAchievementScene.onClick.AddListener(() => SceneManager.LoadSceneAsync(4));
            goFriendsScene.onClick.AddListener(() => SceneManager.LoadSceneAsync(2));
            goMomentScene.onClick.AddListener(() => SceneManager.LoadSceneAsync(3));
            goRTCScene.onClick.AddListener(() => SceneManager.LoadSceneAsync(5));
            goTapDBScene.onClick.AddListener(() => SceneManager.LoadSceneAsync(6));
        }

        private void OnDestroy()
        {
            TapSupport.Pause();
        }

        private void InitTapSdk()
        {
            var config = new TapConfig.Builder()
                .ClientID("0RiAlMny7jiz086FaU")
                .ClientToken("8V8wemqkpkxmAN7qKhvlh6v0pXc8JJzEZe3JFUnU")
                .ServerURL("https://0rialmny.cloud.tds1.tapapis.cn")
                .RegionType(RegionType.CN)
                .TapDBConfig(true, "tapdb_channel", "game_version", true)
                .ConfigBuilder();
            TapBootstrap.Init(config);
            InitTapSupport();
        }

        private void InitTapSupport()
        {
            TapSupport.Init("https://ticket.sdjdd.com", "-", new TapSupportCallback
            {
                UnReadStatusChanged = (hasUnRead, exception) =>
                {
                    Debug.Log($"hasUnRead:{hasUnRead} exception:{exception}");
                }
            });

            TapSupport.AnonymousLogin(null);

            TapSupport.Resume();

            TestTimer();

            Debug.Log("init TapSupport Success And Start Looper");
        }

        public void TestTimer()
        {
            var webUrl = TapSupport.GetSupportWebUrl(TapSupportConstants.PathHome);
            Debug.Log($"webUrl:{webUrl}");


            var pathCateGory = TapSupport.GetSupportWebUrl(
                TapSupportConstants.PathCategory + "6108e403928aa97734554ef0",
                GetMetaData(), GetFieldsData());

            Debug.Log($"pathCateGory:{pathCateGory}");
        }

        public static Dictionary<string, object> GetMetaData()
        {
            Dictionary<string, object> testData = new Dictionary<string, object>();
            testData.Add("Meta_OS", "iOS 15.1");
            testData.Add("meta_test a", true);
            testData.Add("meta_test b", 1111111);
            testData.Add("ccccc", "abcd");
            return testData;
        }

        public static Dictionary<string, object> GetFieldsData()
        {
            Dictionary<string, object> testData = new Dictionary<string, object>();
            testData.Add("612c868565a05a00f081b11c", "xxxxx");
            testData.Add("6129df889b34d92ea85c59fa", 222);
            testData.Add("6108ed29928aa97734557912", "服务器1");
            return testData;
        }
    }
}