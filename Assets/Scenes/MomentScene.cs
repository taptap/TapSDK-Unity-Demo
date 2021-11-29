using System.Collections;
using System.Collections.Generic;
using TapTap.Moment;
using UnityEngine;
using UnityEngine.UI;

public class MomentScene : MonoBehaviour
{
    // Start is called before the first frame update

    //打开动态
    public Button openDynamic;

    //动态红点
    public Button dynamicRedPoint;

    //场景化入口
    public Button scenalizedEntry;

    //用户中心入口
    public Button userCenterEntry;

    //返回
    public Button back;

    //sceneId
    public InputField sceneidField;

    //userId
    public InputField useridField;

    //文本
    public Text info;

    void Start()
    {
        TapMoment.SetCallback((code, msg) =>
        {
            info.text = "---- moment 回调  code: " + code + " msg: " + msg + "----";
            Debug.Log("---- moment 回调  code: " + code + " msg: " + msg + "----");

            UnityNative.Toasts.Example.UnityNativeToastsHelper.ShowLongToast("code: " + code + " msg: " + msg);
        });

        openDynamic.onClick.AddListener(onOpenDynamicClicked);
        dynamicRedPoint.onClick.AddListener(onDynamicRedPointClicked);
        scenalizedEntry.onClick.AddListener(OnScenalizedEntryClicked);
        userCenterEntry.onClick.AddListener(OnUserCenterEntryClicked);
        back.onClick.AddListener(OnBackClicked);
        sceneidField.onEndEdit.AddListener(OnSceneIdField);
        useridField.onEndEdit.AddListener(OnUseridField);
    }

    private void onOpenDynamicClicked()
    {
        TapMoment.Open(Orientation.ORIENTATION_DEFAULT);
    }

    private void onDynamicRedPointClicked()
    {
        TapMoment.FetchNotification();
    }

    private void OnScenalizedEntryClicked()
    {
        TapMoment.DirectlyOpen(Orientation.ORIENTATION_DEFAULT, TapMomentConstants.TapMomentPageShortCut,
            new Dictionary<string, object> {{TapMomentConstants.TapMomentPageShortCutKey, sceneId}});
    }

    private void OnUserCenterEntryClicked()
    {
        TapMoment.DirectlyOpen(Orientation.ORIENTATION_DEFAULT, TapMomentConstants.TapMomentPageUser,
            new Dictionary<string, object> {{TapMomentConstants.TapMomentPageUserKey, userId}});
    }

    private void OnBackClicked()
    {
        UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(0);
    }

    private void OnSceneIdField(string input)
    {
        Debug.Log($"SceneidField: {input} ==");
        sceneId = input;
    }

    private void OnUseridField(string input)
    {
        Debug.Log($"UseridField: {input} ==");
        userId = input;
    }

    public IEnumerator Delay()
    {
        yield return new WaitForSeconds(6);
        TapMoment.Close();
    }

    private string sceneId = "taprl0194610001";

    private string userId = "7KfeZgtnLAZvJG8JZUnYVw==";

  
}