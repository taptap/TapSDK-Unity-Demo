using System;
using System.Collections.Generic;
using UnityEngine;
using TapTap.Bootstrap;
using TapTap.Common;
using TapTap.TapDB;
using UnityEngine.UI;

public class TapDBScene : MonoBehaviour
{
    // Start is called before the first frame update
    //服务器
    public Button server;

    //初始化用户属性
    public Button initUserProperty;

    //用户名
    public Button userName;

    //更新用户属性
    public Button updateUserProperty;

    //等级
    public Button level;

    //添加用户属性
    public Button addUserProperty;

    //事件
    public Button eventbutton;

    //跟踪事件
    public Button trackEvent;

    //初始化设备属性
    public Button initDeviceProperty;

    //注册动态事件
    public Button registerDynamicEvent;

    //更新设备属性
    public Button updateDeviceProperty;

    //设置用户
    public Button settingUser;

    //添加设备属性
    public Button addDeviceProperty;

    //充值
    public Button recharge;

    //注册静态事件
    public Button registerStaticEvent;

    //删除静态事件
    public Button deleteStaticEvent;

    //deviceID
    public Button cancelDeviceId;

    //删除某个事件key
    public Button deleteEventKey;

    //返回
    public Button back;

    //serverField
    public InputField serverField;

    //initUserField
    public InputField initUserField;

    //userNameField
    public InputField userNameField;

    //updateUserField
    public InputField updateUserField;

    //levelField
    public InputField levelField;

    //addUserField
    public InputField addUserField;

    //eventField
    public InputField eventField;

    //trackEventField
    public InputField trackEventField;

    //initDeviceField
    public InputField initDeviceField;

    //registerDynamicEventField
    public InputField registerDynamicEventField;

    //updateDeviceField
    public InputField updateDeviceField;

    //userIdField
    public InputField userIdField;

    //loginMethodField
    public InputField loginMethodField;

    //addDeviceField
    public InputField addDeviceField;

    //staticEventField
    public InputField staticEventField;

    //eventKeyField
    public InputField eventKeyField;

    void Start()
    {
        // Judge.JudgeDeviceModel();
        SetUser();

        server.onClick.AddListener(OnServerClicked);
        initUserProperty.onClick.AddListener(OnInitUserPropertyClicked);
        userName.onClick.AddListener(OnUserNameClicked);
        updateUserProperty.onClick.AddListener(OnUpdateUserPropertyClicked);
        level.onClick.AddListener(OnLevelClicked);
        addUserProperty.onClick.AddListener(OnAddUserPropertyClicked);
        eventbutton.onClick.AddListener(OnEventClicked);
        trackEvent.onClick.AddListener(OnTrackEventClicked);
        initDeviceProperty.onClick.AddListener(OnInitDevicePropertyClicked);

        registerDynamicEvent.onClick.AddListener(OnRegisterDynamicEventClicked);
        updateDeviceProperty.onClick.AddListener(OnUpdateDevicePropertyClicked);
        settingUser.onClick.AddListener(OnSettingUserClicked);
        addDeviceProperty.onClick.AddListener(OnAddDevicePropertyClicked);
        recharge.onClick.AddListener(OnRechargeClicked);
        registerStaticEvent.onClick.AddListener(OnRegisterStaticEventClicked);
        deleteStaticEvent.onClick.AddListener(OnDeleteStaticEventClicked);
        cancelDeviceId.onClick.AddListener(OnCancelDeviceIdClicked);
        deleteEventKey.onClick.AddListener(OnDeleteEventKeyClicked);
        back.onClick.AddListener(OnBackClicked);

        serverField.onEndEdit.AddListener(OnServerField);
        initUserField.onEndEdit.AddListener(OnInitUserField);
        userNameField.onEndEdit.AddListener(OnUserNameField);
        updateUserField.onEndEdit.AddListener(OnUpdateUserField);
        levelField.onEndEdit.AddListener(OnLevelField);
        addUserField.onEndEdit.AddListener(OnAddUserField);
        eventField.onEndEdit.AddListener(OnEventField);
        trackEventField.onEndEdit.AddListener(OnTrackEventField);

        initDeviceField.onEndEdit.AddListener(OnInitDeviceField);
        registerDynamicEventField.onEndEdit.AddListener(OnRegisterDynamicEventField);
        updateDeviceField.onEndEdit.AddListener(OnUpdateDeviceField);
        userIdField.onEndEdit.AddListener(OnUserIdField);
        loginMethodField.onEndEdit.AddListener(OnLoginMethodField);
        addDeviceField.onEndEdit.AddListener(OnAddDeviceField);
        staticEventField.onEndEdit.AddListener(OnStaticEventField);
        eventKeyField.onEndEdit.AddListener(OnEventKeyField);
    }

    // Update is called once per frame
    void Update()
    {
    }

    private async void SetUser()
    {
        try
        {
            var user = await TDSUser.GetCurrent();
            TapDB.SetUser(user.ObjectId);
        }
        catch (Exception e)
        {
            Console.WriteLine(e);
            throw;
        }
    }

    private void OnServerClicked()
    {
        TapDB.SetServer(serverName);
    }

    private void OnInitUserPropertyClicked()
    {
        //"{\"user\":\"Initialize\"}"
        TapDB.UserInitialize(userInitialize);
    }

    private void OnUserNameClicked()
    {
        TapDB.SetName(userNameStr);
    }

    private void OnUpdateUserPropertyClicked()
    {
        //"{\"user\":\"update\"}"
        TapDB.UserUpdate(userUpdate);
    }

    private void OnLevelClicked()
    {
        int rel = int.Parse(levelStr);
        TapDB.SetLevel(rel);
    }

    private void OnAddUserPropertyClicked()
    {
        //"{\"user\":\"add\"}"
        TapDB.UserAdd(userAdd);
    }

    private void OnEventClicked()
    {
        //"{"events":"Initialize"}"
        TapDB.OnEvent("eventCode", events);
    }

    private void OnTrackEventClicked()
    {
        //"{\"trackEvent\":\"789\"}"
        TapDB.TrackEvent("eventName", trackEventStr);
    }

    private void OnInitDevicePropertyClicked()
    {
        //"{\"device\":\"Initialize\"}"
        TapDB.DeviceInitialize(deviceInitialize);
    }

    private void OnRegisterDynamicEventClicked()
    {
        //"{"hahah":"xxxxxxxxx"}"
# if UNITY_IOS || UNITY_ANDROID
        TapDBImpl.GetInstance().RegisterDynamicProperties(new TapDBDynamicProperties());
#endif
    }

    private void OnUpdateDevicePropertyClicked()
    {
        //"{\"device\":\"update\"}"
        TapDB.DeviceUpdate(deviceUpdate);
    }

    private void OnSettingUserClicked()
    {
        TapDB.SetUser(userId, loginMethod);
    }

    private void OnAddDevicePropertyClicked()
    {
        //"{\"device\":\"add\"}"
        TapDB.DeviceAdd(deviceAdd);
    }

    private void OnRechargeClicked()
    {
        TapDB.OnCharge("12345", "890", 1, "eur", "paypal");
    }

    private void OnRegisterStaticEventClicked()
    {
        //"{"RegisterStaticProperties":"static"}"
        TapDB.RegisterStaticProperties(registerStaticEventStr);
    }

    private void OnDeleteStaticEventClicked()
    {
        TapDB.ClearStaticProperties();
    }

    private void OnCancelDeviceIdClicked()
    {
        TapDB.CloseFetchTapTapDeviceId();
    }

    private void OnDeleteEventKeyClicked()
    {
        TapDB.UnregisterStaticProperty(deleteStaticEventStr);
    }

    private void OnBackClicked()
    {
        UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(0);
    }

    private void OnServerField(string input)
    {
        serverName = input;
        Debug.Log($"ServerField: {input} ==");
    }

    private void OnInitUserField(string input)
    {
        userInitialize = input;
        Debug.Log($"initUserField: {input} ==");
    }

    private void OnUserNameField(string input)
    {
        userNameStr = input;
        Debug.Log($"userNameField: {input} ==");
    }

    private void OnUpdateUserField(string input)
    {
        userUpdate = input;
        Debug.Log($"updateUserField: {input} ==");
    }

    private void OnLevelField(string input)
    {
        levelStr = input;
        Debug.Log($"levelField: {input} ==");
    }

    private void OnAddUserField(string input)
    {
        userAdd = input;
        Debug.Log($"addUserField: {input} ==");
    }

    private void OnEventField(string input)
    {
        events = input;
        Debug.Log($"eventField: {input} ==");
    }

    private void OnTrackEventField(string input)
    {
        trackEventStr = input;
        Debug.Log($"trackEventField: {input} ==");
    }

    private void OnInitDeviceField(string input)
    {
        deviceInitialize = input;
        Debug.Log($"initDeviceField: {input} ==");
    }

    private void OnRegisterDynamicEventField(string input)
    {
        registerDynamicEventStr = input;
        Debug.Log($"registerDynamicEventField: {input} ==");
    }

    private void OnUpdateDeviceField(string input)
    {
        deviceUpdate = input;
        Debug.Log($"updateDeviceField: {input} ==");
    }

    private void OnUserIdField(string input)
    {
        userId = input;
        Debug.Log($"userIdField: {input} ==");
    }

    private void OnLoginMethodField(string input)
    {
        loginMethod = input;
        Debug.Log($"loginMethodField: {input} ==");
    }

    private void OnAddDeviceField(string input)
    {
        deviceAdd = input;
        Debug.Log($"addDeviceField: {input} ==");
    }

    private void OnStaticEventField(string input)
    {
        registerStaticEventStr = input;
        Debug.Log($"staticEventField: {input} ==");
    }

    private void OnEventKeyField(string input)
    {
        deleteStaticEventStr = input;
        Debug.Log($"eventKeyField: {input} ==");
    }

    private string serverName = "serverName";
    private string userNameStr = "userName";
    private string levelStr = "1";
    private string events = "事件json";
    private string registerStaticEventStr = "静态事件json";
    private string deleteStaticEventStr = "请输入某个事件key";
    private string deviceInitialize = "设备初始化json";
    private string deviceUpdate = "更新设备json";
    private string deviceAdd = "添加设备json";
    private string userInitialize = "用户初始化json";
    private string userUpdate = "更新用户json";
    private string userAdd = "添加用户json";
    private string userId = "请输入用户id";
    private string loginMethod = "请输入登录方式";
    private string trackEventStr = "跟踪事件json";
    private static string registerDynamicEventStr = "动态事件json";

    
# if UNITY_IOS || UNITY_ANDROID
    private class TapDBDynamicProperties : IDynamicProperties
    {
        public Dictionary<string, object> GetDynamicProperties()
        {
            Dictionary<string, object> dic = Json.Deserialize(registerDynamicEventStr) as Dictionary<string, object>;
            return dic;
            // var dic = new Dictionary<string, object> {{"time", DateTime.Now.ToString(CultureInfo.InvariantCulture)}};
            // return dic;
        }
    }
#endif
    
}