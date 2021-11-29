using TapTap.Achievement;
using TapTap.Common;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class AchievementScene : MonoBehaviour, IAchievementCallback
{
    public Button fetAllAchievement;

    public Button fetUserAchievement;

    public Button localAllAchievement;

    public Button localUserAchievement;

    public InputField achievementId;

    public InputField achievementStep;

    public Toggle showToast;

    public Button showDialog;

    public Button back;

    public Text label;

    private string step;

    private string id;

    public Button makeAchievement;

    public Button growAchievement;

    public Button reachAchievement;

    // Start is called before the first frame update
    void Start()
    {
        TapAchievement.RegisterCallback(this);

        TapAchievement.InitData();

        makeAchievement.onClick.AddListener(() => { TapAchievement.MakeSteps(id, int.Parse(step)); });

        growAchievement.onClick.AddListener(() => { TapAchievement.GrowSteps(id, int.Parse(step)); });

        reachAchievement.onClick.AddListener(() => TapAchievement.Reach(id));

        fetAllAchievement.onClick.AddListener(() =>
        {
            TapAchievement.FetchAllAchievementList((list, code) =>
            {
                if (code != null)
                {
                    label.text = $"获取所有成就失败:{code.code} message:{code.errorDescription}";
                }
                else if (list != null)
                {
                    label.text = "";
                    foreach (var bean in list)
                    {
                        label.text = label.text + AchievementToJson(bean) + "\n";
                    }
                }
            });
        });


        fetUserAchievement.onClick.AddListener(() =>
        {
            TapAchievement.FetchUserAchievementList((list, code) =>
            {
                if (code != null)
                {
                    label.text = $"获取用户成就失败:{code.code} Message:{code.errorDescription}";
                }
                else
                {
                    label.text = "";
                    foreach (var bean in list)
                    {
                        label.text = label.text + AchievementToJson(bean) + "\n";
                    }
                }
            });
        });

        localAllAchievement.onClick.AddListener(() =>
        {
            TapAchievement.GetLocalAllAchievementList((list, code) =>
            {
                if (code != null)
                {
                    label.text = $"获取本地所有成就失败:{code.code} Message:{code.errorDescription}";
                }
                else
                {
                    label.text = "";
                    foreach (var bean in list)
                    {
                        label.text = label.text + AchievementToJson(bean) + "\n";
                    }
                }
            });
        });

        localUserAchievement.onClick.AddListener(() =>
        {
            TapAchievement.GetLocalUserAchievementList((list, code) =>
            {
                if (code != null)
                {
                    label.text = $"获取本地用户成就失败:{code.code} Message:{code.errorDescription}";
                }
                else
                {
                    label.text = "";
                    foreach (var bean in list)
                    {
                        label.text = label.text + AchievementToJson(bean) + "\n";
                    }
                }
            });
        });

        achievementStep.onValueChanged.AddListener(s => { this.step = s; });
        achievementId.onValueChanged.AddListener(s => { this.id = s; });
        back.onClick.AddListener(() => { SceneManager.LoadSceneAsync(0); });
        showDialog.onClick.AddListener(TapAchievement.ShowAchievementPage);
        showToast.onValueChanged.AddListener(TapAchievement.SetShowToast);
    }

    // Update is called once per frame

    public void OnAchievementSDKInitSuccess()
    {
        label.text = "成就初始化成功";
    }   

    public void OnAchievementSDKInitFail(TapError errorCode)
    {
        if (errorCode != null)
        {
            label.text = $"成就初始化失败:{errorCode.code}" + $"des:{errorCode.errorDescription}";
        }
    }

    public void OnAchievementStatusUpdate(TapAchievementBean bean, TapError errorCode)
    {
        if (errorCode != null)
        {
            label.text = $"成就状态更新失败Code:{errorCode.code}" + $"des:{errorCode.errorDescription}";
            return;
        }

        if (bean != null)
        {
            label.text = $"成就状态更新:{AchievementToJson(bean)}";
        }
    }

    private static string AchievementToJson(TapAchievementBean bean)
    {
        return JsonUtility.ToJson(bean) + $" stats:{JsonUtility.ToJson(bean.stats)}";
    }
}