using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TapTap.RTC;
using UnityEngine.SceneManagement;
using Random = System.Random;

public class RTCScene : MonoBehaviour
{
    public Button InitButton, BackButton, JoinRoomButton, ExitRoomButton, UpdatePositonButton, UpdateDistanceButton;

    public Toggle RangeToggle,
        MicToggle,
        SpeakerToggle,
        LoopBackToggle,
        WorldToggle,
        TeamToggle,
        ThreeDToggle,
        HighToggle,
        MidToggle,
        LowToggle,
        BanUserToggle;

    public Slider micSlider, speakerSlider;

    public InputField userIdInputField, roomIdInputField, positionInputField, distanceInputField, banUserIdInputField;

    public string appId = "";

    public string appKey = "";

    //不要再 代码中添加 masterKey
    public string masterKey = "";

    public ITapRTCRoomDelegate room;

    // Start is called before the first frame update
    void Start()
    {
        InitButton.onClick.AddListener(Init);
        BackButton.onClick.AddListener(() => SceneManager.LoadSceneAsync(0));
        JoinRoomButton.onClick.AddListener(JoinRoom);
        ExitRoomButton.onClick.AddListener(ExitRoom);
        UpdatePositonButton.onClick.AddListener(UpdatePosition);
        UpdateDistanceButton.onClick.AddListener(UpdateDistance);

        MicToggle.onValueChanged.AddListener(isOn => TapRTC.GetAudioDevice().EnableMic(isOn));
        SpeakerToggle.onValueChanged.AddListener(isOn => TapRTC.GetAudioDevice().EnableSpeaker(isOn));
        LoopBackToggle.onValueChanged.AddListener(isOn => TapRTC.GetAudioDevice().EnableLoopback(isOn));
        WorldToggle.onValueChanged.AddListener(isOn =>
        {
            if (!isOn) return;
            room?.GetRtcRangeAudioCtrl().SetRangeAudioMode(RangeAudioMode.WORLD);
            TeamToggle.isOn = false;
        });

        TeamToggle.onValueChanged.AddListener(isOn =>
        {
            if (!isOn) return;
            room?.GetRtcRangeAudioCtrl().SetRangeAudioMode(RangeAudioMode.TEAM);
            WorldToggle.isOn = false;
        });

        ThreeDToggle.onValueChanged.AddListener(isOn =>
        {
            TapRTC.GetAudioDevice().InitSpatializer();
            TapRTC.GetAudioDevice().EnableSpatializer(isOn, TeamToggle.isOn);
        });

        HighToggle.onValueChanged.AddListener(isOn =>
        {
            if (isOn)
            {
                room?.ChangeRoomType(AudioPerfProfile.HIGH);
                MidToggle.isOn = false;
                LowToggle.isOn = false;
            }
        });

        MidToggle.onValueChanged.AddListener(isOn =>
        {
            if (isOn)
            {
                room?.ChangeRoomType(AudioPerfProfile.MID);
                HighToggle.isOn = false;
                LowToggle.isOn = false;
            }
        });

        LowToggle.onValueChanged.AddListener(isON =>
        {
            if (isON)
            {
                room?.ChangeRoomType(AudioPerfProfile.LOW);
                HighToggle.isOn = false;
                MidToggle.isOn = false;
            }
        });

        BanUserToggle.onValueChanged.AddListener(isOn =>
        {
            if (!isOn)
            {
                room?.EnableUserAudio(banUserIdInputField.text);
            }
            else
            {
                room?.DisableUserAudio(banUserIdInputField.text);
            }
        });

        micSlider.onValueChanged.AddListener(value => { TapRTC.GetAudioDevice().SetMicVolume((int) (value)); });
        speakerSlider.onValueChanged.AddListener(value => { TapRTC.GetAudioDevice().SetSpeakerVolume((int) (value)); });
    }

    // Update is called once per frame
    void Update()
    {
        TapRTC.Poll();
    }


    private async void Init()
    {
        var config = new TapRTCConfig.Builder()
            .AppId(appId)
            .AppKey(appKey)
            .UserId(userIdInputField.text.ToString())
            .AudioProfile(AudioPerfProfile.LOW)
            .DeviceId($"device-id-{new Random().Next(0, 100)}")
            .ConfigBuilder();

        try
        {
            if (await TapRTC.Init(config))
            {
                Debug.Log("初始化成功");
            }
        }
        catch (Exception e)
        {
            Console.WriteLine(e);
        }
    }

    private void ExitRoom()
    {
        room?.Exit();
    }

    private void UpdatePosition()
    {
        var positionArray = positionInputField.text.Split(':');
        var position = new Position();
        position.x = int.Parse(positionArray[0]);
        position.y = int.Parse(positionArray[1]);
        position.z = int.Parse(positionArray[2]);
        room?.GetRtcRangeAudioCtrl().UpdateSelfPosition(position, null);
    }

    private void UpdateDistance()
    {
        room?.GetRtcRangeAudioCtrl().UpdateAudioReceiverRange(int.Parse(distanceInputField.text));
    }

    private void JoinRoom()
    {
        var authBuffer = AuthBufferHelper.GenToken(appId, roomIdInputField.text, userIdInputField.text, masterKey);

        try
        {
            room = TapRTC.AcquireRoom(roomIdInputField.text, RangeToggle.isOn);
            room?.RegisterEventAction(new TapRTCEvent()
            {
                OnDisconnect = (i, e) =>
                {
                    // 断开链接
                },
                OnEnterFailure = s =>
                {
                    // 进入房间失败
                },
                OnEnterSuccess = () =>
                {
                    // 进入房间成功
                },
                OnExit = () =>
                {
                    // 推出房间
                },
                OnUserEnter = s =>
                {
                    // 用户 userId 进入房间
                },
                OnUserExit = s =>
                {
                    // 用户 userId 退出房间
                },
                OnUserSpeaker = (s, i) =>
                {
                    // 用户 userId 说话，音量：i
                },
                OnUserSpeakEnd = s =>
                {
                    // 用户 userId 说话结束
                },
                OnRoomTypeChanged = (i) =>
                {
                    // 房间音质改变 i
                },
                OnRoomQualityChanged = (weight, loss, delay) =>
                {
                    // 网络状态以及通话质量
                },
            });
            room?.Join(authBuffer);
        }
        catch (Exception e)
        {
            Console.WriteLine(e);
        }
    }
}