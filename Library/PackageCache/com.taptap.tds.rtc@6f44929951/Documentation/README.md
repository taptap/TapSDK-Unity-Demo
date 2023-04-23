# TapTap.RTC

## 命名空间
```c#
using TapTap.RTC;
```

## 注意事项

* RTC 使用前需要在开发者中心进行相关配置。
* RTC 需要周期性的调用 `TapRTC.Poll` 接口，才能触发相关的事件回调。

## 关键类

|  类名      | 含义  |
|  ----  | ----  |
| ITapRTC  | 核心接口 |
| ITapRTCAudioDevice  | 音频相关接口 |
| ITapRTCRoomDelegate  | 房间相关接口 |

## 核心接口

RTC 通过 `TapRTCConfig` 来进行初始化配置。初始化的过程是异步的，需要等待初始化结果返回之后，才能进行下一步的操作。

* OpenId: 开发者自定义的用户 Id
* DeviceId: 设备 Id
* AuDioProfile: 音频质量配置(默认为 Default)

```c#
var config = new TapRTCConfig.Builder()
    .ClientID("ClientID")
    .ClientToken("ClientToken")
    .ServerUrl("ServerUrl")
    .UserId("UserId")
    .DeviceId("DeviceId")
    .AudioProfile(AudioProfile.DEFAULT)
    .ConfigBuilder();
    
ResultCode code = await TapRTC.Init(config);

if(code == ResultCode.OK){
    // 初始化成功
}
```
### 触发回调事件
可以在 `Update` 方法中调用 `Poll` 方法触发事件回调。如果不调用该方法，会导致 SDK 运行异常。
```c#
public void Update()
{
    TapRTC.Poll();
}
```

### 恢复系统

```c#
TapRTC.Resume();
```

### 暂停系统

```c#
TapRTC.Pause();
```

## 房间相关接口

### 创建房间

初始化成功之后，SDK 在创建房间之后，才可以进行实时语音通话。

* roomId: 房间号
* rangeAudio: 是否是世界语音（默认为false）

```c#
var room = await TapRTC.AcquireRoom(string roomId, bool rangeAudio = false);
```

### 注册房间相关的回调事件

```c#
room.RegisterEventAction(new TapRTCEvent()
{
    OnDisconnect = (code, message) => { label.text += "\n" + $"断开连接 code:{code} msg:{e}"; },
    OnEnterFailure = s => { label.text += "\n" + $"进入房间失败:{s}"; },
    OnEnterSuccess = () => { label.text += "\n" + $"进入房间成功"; },
    OnExit = () => { label.text += "\n" + $"退出房间成功"; },
    OnUserEnter = userId => { label.text += "\n" + $"用户{userId}进入房间"; },
    OnUserExit = userId => { label.text += "\n" + $"用户{userId}退出房间"; },
    OnUserSpeaker = (userId, volume) => { label.text += "\n" + $"用户{userId}在房间说话，音量{volume}"; },
    OnUserSpeakEnd = userId => { label.text += "\n" + $"用户{userId}在房间说话结束"; },
    OnRoomTypeChanged = (i) => { label.text += "\n" + $"房间音质改为{i}"; },
    OnRoomQualityChanged = (weight, loss, delay) =>
    {
       Debug.Log($"音频质量:{weight} 丢包率:{loss}% 延迟:{delay}ms");
    },
});
```

### 加入房间
使用服务端生成的鉴权信息进入房间。

进入房间成功之后，会通过 `TapRTCEvent` 中的 `OnEnterSuccess` 进行回调。

* authBuffer: 服务端生成的鉴权信息
```c#
room.Join(string authBuffer);
```

### 退出房间

退出房间之后，会通过 `TapRTCEvent` 中的 `OnExit` 进行回调。

```c#
room.Exit();
```

### 收听某人语音（默认收听）
* openId: 用户 Id
```c#
room.EnableUserAudio(string openId);
```

### 拒收某人语音
* openId: 用户 Id
```c#
room.DisableUserAudio(string openId);
```

### 开启/关闭房间语音
```c#
room.EnableAudioReceiver(bool enable);
```

### 获取当前房间的其他用户
```c#
var userList = room.GetUsers();
```

## 音频控制相关接口

### 打开/关闭麦克风
```c#
var resultCode = TapRTC.GetAudioDevice().EnableMic(bool enable);
```

### 打开/关闭扬声器
```c#
var resultCode = TapRTC.GetAudioDevice().EnableSpeaker(bool enable);
```
### 设置/获取麦克风音量
```c#
// 设置麦克风音量（0～100）
TapRTC.GetAudioDevice().SetMicVolume(int vol);

// 获取麦克风音量（0～100）
var volume = TapRTC.GetAudioDevice().GetMicVolume();
```

### 设置/获取扬声器音量
```c#
// 设置扬声器音量（0～100）
TapRTC.GetAudioDevice().SetSpeakerVolume(int vol);

// 获取扬声器音量(0~100)
var volume = TapRTC.GetAudioDevice().GetSpeakerVolume();
```

### 打开/关闭声音播放
```c#
TapRTC.GetAudioDevice().EnableAudioPlay(bool enable);
```

### 打开/关闭耳返
```c#
TapRTC.GetAudioDevice().EnableLoopback(bool enable);
```

## 3D以及范围音效

### 开启或者关闭 3D 音效

```c#
var resultCode = TapRTC.GetAudioDevice().EnableSpatializer(bool enable, bool applyToTeam);
```

### 设置小队语音、世界语音

```c#
room.GetRtcRangeAudioCtrl().SetRangeAudioMode(RangeAudioMode mode)
```

### 设置 TeamID

```c#
room.GetRtcRangeAudioCtrl().SetRangeAudioTeam(int teamID);
```

### 更新声源方位
```c#
room.GetRtcRangeAudioCtrl().UpdateAudioReceiverRange(int range);
```

### 更新自身位置
```c#
room.GetRtcRangeAudioCtrl().UpdateSelfPosition(Position position, Forward forward);
```