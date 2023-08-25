using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;

namespace TencentMobileGaming
{
	public enum ITMGRoomType
	{
		ITMG_ROOM_TYPE_FLUENCY      = 1,//流畅音质
		ITMG_ROOM_TYPE_STANDARD     = 2,//标准音质
		ITMG_ROOM_TYPE_HIGHQUALITY  = 3,//高清音质
	};

	public enum ITMG_MAIN_EVENT_TYPE {
		ITMG_MAIN_EVENT_TYPE_NUMBER_OF_USERS_UPDATE=7,// number of users in current room
		ITMG_MAIN_EVENT_TYPE_NUMBER_OF_AUDIOSTREAMS_UPDATE = 8,// number of audioStreams in current room
        ITMG_MAIN_EVENT_TYPE_SWITCH_ROOM = 13,//Notification of switch room happened
        ITMG_MAIN_EVENT_TYPE_SERVER_AUDIO_ROUTE_EVENT = 1091,
        ITMG_MAIN_EVENT_TYPE_CUSTOMDATA_UPDATE = 1092,
        ITMG_MAIN_EVENT_TYPE_REALTIME_ASR = 1093,
        ITMG_MAIN_EVNET_TYPE_ROOM_MANAGEMENT_OPERATOR = 6000,// RoomManager Event
        ITMG_MAIN_EVENT_TYPE_CHANGETEAMID = 1095,
    } ;

    /// <summary>
    /// GME房间管理回调事件类型
    /// </summary>
    public enum ITMG_MAIN_EVNET_TYPE_ROOM_MANAGEMENT_OPERATOR {
        /// <summary>
        /// 房间管理采集设备事件
        /// </summary>
        ITMG_ROOM_MANAGEMENT_CAPTURE_OP = 0,
        /// <summary>
        /// 房间管理播放设备事件
        /// </summary>
        ITMG_ROOM_MANAGEMENT_PLAY_OP = 1,
        /// <summary>
        /// 房间管理上行事件
        /// </summary>
        ITMG_ROOM_MANAGEMENT_AUDIO_SEND_OP = 2,
        /// <summary>
        /// 房间管理下行事件
        /// </summary>
        ITMG_ROOM_MANAGEMENT_AUDIO_REC_OP = 3,
        /// <summary>
        /// 房间管理麦克风事件
        /// </summary>
        ITMG_ROOM_MANAGEMENT_MIC_OP = 4,
        /// <summary>
        /// 房间管理扬声器事件
        /// </summary>
        ITMG_ROOM_MANAGEMENT_SPEAKER_OP = 5,
        /// <summary>
        /// 房间管理麦克风状态事件
        /// </summary>
        ITMG_ROOM_MANAGEMENT_GET_MIC_STATE = 6,
        /// <summary>
        /// 房间管理扬声器状态事件
        /// </summary>
        ITMG_ROOM_MANAGEMENT_GET_SPEAKER_STATE = 7,
        /// <summary>
        /// 房间管理禁止开麦开扬声器事件
        /// </summary>
        ITMG_ROOM_MANAGERMENT_FOBIN_OP = 8,
    } ;

    public enum ITMGRangeAudioMode
    {
	    ITMG_RANGE_AUDIO_MODE_WORLD = 0,
	    ITMG_RANGE_AUDIO_MODE_TEAM = 1,
    } ;

	public enum ITMG_RECORD_PERMISSION{
		ITMG_PERMISSION_GRANTED = 0 ,//麦克风已授权
		ITMG_PERMISSION_Denied = 1,//麦克风被禁用
		ITMG_PERMISSION_NotDetermined = 2 ,//尚未弹出权限框向用户申请权限
		ITMG_PERMISSION_ERROR = 3,//接口调用错误
	};

    public enum ITMG_CHECK_MIC_STATUS{
        ITMG_CHECK_MIC_STATUS_MIC_AVAILABLE = 0,//麦克风可用
        ITMG_CHECK_MIC_STATUS_ERROR_FUNC = 1,//接口调用出错
        ITMG_CHECK_MIC_STATUS_NO_GRANTED = 2,//麦克风未授权
        ITMG_CHECK_MIC_STATUS_INVALID_MIC = 3,//无可用麦克风
        ITMG_CHECK_MIC_STATUS_JNI_ERROR = 4,//JNI调用出错
        ITMG_CHECK_MIC_STATUS_NOT_INIT = 5,//SDK未初始化
    };

    public enum  ITMG_CUSTOMDATA_SUB_EVENT{
        ITMG_CUSTOMDATA_AV_SUB_EVENT_UPDATE = 0,
    };
    
    public enum ITMG_SERVER_AUDIO_ROUTE_SEND_TYPE {
        /// <summary>
        /// 获取出错，检查是否进入房间，是否已经初始化 SDK
        /// </summary>
        AUDIO_ROUTE_SEND_INQUIRE_ERROR = 0,
        /// <summary>
        /// 本端音频上行发送到后台，但后台不转发给任何人，相当于将自己静音
        /// </summary>
        AUDIO_ROUTE_NOT_SEND_TO_ANYONE = 1,
        /// <summary>
        /// 本端音频上行将转发给所有人
        /// </summary>
        AUDIO_ROUTE_SEND_TO_ALL = 2,
        /// <summary>
        /// 本端音频上行将不转发给黑名单的人
        /// </summary>
        AUDIO_ROUTE_SEND_BLACK_LIST = 3,
        /// <summary>
        /// 本端音频上行将只转发给白名单的人
        /// </summary>
        AUDIO_ROUTE_SEND_WHITE_LIST = 4,
    };

    public enum ITMG_SERVER_AUDIO_ROUTE_RECV_TYPE {
        /// <summary>
        /// 获取出错，检查是否进入房间，是否已经初始化 SDK
        /// </summary>
        AUDIO_ROUTE_RECV_INQUIRE_ERROR = 0,
        /// <summary>
        /// 本端不接受任何音频，相当于关闭房间内扬声器效果
        /// </summary>
        AUDIO_ROUTE_NOT_RECV_FROM_ANYONE = 1,
        /// <summary>
        /// 本端接收所有人的音频
        /// </summary>
        AUDIO_ROUTE_RECV_FROM_ALL = 2,
        /// <summary>
        /// 本端不接收黑名单的人的音频声音
        /// </summary>
        AUDIO_ROUTE_RECV_BLACK_LIST = 3,
        /// <summary>
        /// 本端只接收白名单的人的音频声音
        /// </summary>
        AUDIO_ROUTE_RECV_WHITE_LIST = 4,
    }

    public abstract class ITMGContext
	{
        //如果编译器提示找不到GMESDK_VERSION_xxx,说明升级sdk的时候没有升级所有文件，请全量升级
        public static string IENGINE_VERSION = QAVError.GMESDK_VERSION_e089f0465e71aeea0cdfd24253f6e1e6c625fdd2;
        static ITMGContext(){         
            QAVSDKInit.InitSDK();
			QAVContext.GetInstance();
        }
		public static ITMGContext GetInstance()
        {          
			return QAVContext.GetInstance();
		}
        
        public abstract int Poll();
        public abstract int Pause();
        public abstract int Resume();

        /// <summary>
        /// 获取SDK版本号，用于App侧数据上报
        /// </summary>
        /// <returns></returns>
        public abstract string GetSDKVersion();
		
		/// <summary>
		/// 设置App版本号，用于SDK内数据上报
		/// </summary>
		/// <param name="sAppVersion">App版本号</param>
		public abstract void SetAppVersion(string sAppVersion);

        /// <summary>
        /// 设置SDK可以服务的区域
        /// </summary>
        /// <param name="region">参见文档，服务的区域简称</param>
        public abstract void SetRegion(string region);

        public static int LOG_LEVEL_NONE = -1;   //Do not print the log
        public static int LOG_LEVEL_ERROR = 1;  //Used for critical log
        public static int LOG_LEVEL_INFO = 2; //Used to prompt for information
        public static int LOG_LEVEL_DEBUG = 3; //For development and debugging
        public static int LOG_LEVEL_VERBOSE = 4; //For high-frequency printing information

        public abstract int SetLogLevel(int levelWrite, int levelPrint);
        public abstract int SetLogPath(string logDir);


		/// <summary>
		/// 初始化 SDK
		/// </summary>
		/// <param name="sdkAppID">唯一标识一个App，来自腾讯云控制台</param>
		/// <param name="openID">唯一标识一个用户，规则由App开发者自行制定，目前openID只支持INT64</param>
		/// <returns>参见QAVError。如果当前已在房间内，则必定失败</returns>
		public abstract int Init(string sdkAppID, string openID);

		/// <summary>
		/// 反初始化
		/// </summary>
		/// <returns>参见QAVError。如果当前已在房间内，则必定失败</returns>
		public abstract int Uninit();

		public abstract bool IsRoomEntered();
        // 当返回值为AV_OK时，异步执行并通过OnEnterRoomComplete/ExitRoomComplete异步返回执行结果。当返回值为非AV_OK时，表示执行失败，没有异步回调。
		public abstract int EnterRoom(string roomID, ITMGRoomType roomType, byte[] authBuffer);
		public abstract int ExitRoom();
		public abstract int SetAdvanceParams(string KeyCode,string value);
        public abstract string GetAdvanceParams(string KeyCode);

        public abstract int StartRealTimeASR();
        public abstract int StartRealTimeASR(string language);
        public abstract int StopRealTimeASR();


		public abstract ITMGRoom GetRoom();
		public abstract ITMGAudioCtrl GetAudioCtrl();
        public abstract ITMGAudioEffectCtrl GetAudioEffectCtrl();
        public abstract ITMGRoomManager GetRoomManager();

		public abstract ITMG_RECORD_PERMISSION CheckMicPermission();

		public abstract ITMGPTT GetPttCtrl();
		
		public abstract event QAVEnterRoomComplete OnEnterRoomCompleteEvent;
		public abstract event QAVExitRoomComplete OnExitRoomCompleteEvent;
		public abstract event QAVRoomDisconnect OnRoomDisconnectEvent;
		public abstract event QAVEndpointsUpdateInfo OnEndpointsUpdateInfoEvent;		// 成员状态变化，EventID详见EVENT_ID_ENDPOINT_XXX
		public abstract event QAVOnRoomTypeChangedEvent OnRoomTypeChangedEvent;				//当房间类型发生变化的时候,会调用这个回调函数
		public abstract event QAVAudioReadyCallback OnAudioReadyEvent;
        public abstract event QAVRoomChangeQualityCallback OnRoomChangeQualityEvent;
        public abstract event QAVCommonEventCallback OnCommonEventCallback;
		public abstract event QAVOnEventCallBack onEventCallBack;

		public static int EVENT_ID_ENDPOINT_ENTER = 1;	// 成员进入房间事件
		public static int EVENT_ID_ENDPOINT_EXIT = 2;	// 成员退出房间事件
		public static int EVENT_ID_ENDPOINT_HAS_CAMERA_VIDEO = 3;	// 成员发送摄像头视频事件
		public static int EVENT_ID_ENDPOINT_NO_CAMERA_VIDEO = 4;		// 成员停止发送摄像头视频事件
		public static int EVENT_ID_ENDPOINT_HAS_AUDIO = 5;	// 收到成员音频事件
		public static int EVENT_ID_ENDPOINT_NO_AUDIO = 6;	// 连续2秒未收到成员音频事件


        //////////////////////////////////////////////////////////////////////////
        // Advanced API, don't use unless you know what would happen
		public abstract int SetRecvMixStreamCount(int nCount);
        public abstract int SetRangeAudioMode(ITMGRangeAudioMode gameAudioMode);
        public abstract int SetRangeAudioTeamID(int teamID);
       
        public abstract ITMG_CHECK_MIC_STATUS CheckMic();
    }

	public abstract class ITMGRoom
	{
		/// <summary>
		/// 获取音视频通话的实时通话质量的相关信息。该函数主要用来查看实时通话质量、排查问题等，业务侧可以不用关心它
		/// </summary>
		/// <returns>返回音视频通话的实时通话质量的相关参数，并以字符串形式返回</returns>
		public abstract string GetQualityTips();

		/// <summary> 设置房间类型 </summary>
		/// <returns>成功返回OK，ERR_FAIL表示操作失败，可能是因为房间不存在等。</returns>
		/// <remarks>如参见RoomType </remarks>
		public abstract int ChangeRoomType(ITMGRoomType roomType);

		/// <summary>
		/// 调用 ChangeRoomType(RoomType roomtype);函数时候,结果会通过这个回掉函数返回,
		/// 如果成功改变房间类型,返回OK
		/// </summary>
		public abstract event QAVCallback OnChangeRoomtypeCallback;

		/// <summary> 获取房间房间类型 </summary>
		public abstract int GetRoomType();

        /// <summary>
        /// 获取本端实时语音房间号
        /// </summary>
        /// <returns>房间号</returns>
        public abstract string GetRoomID();

        // range : if Spatializer is enabled or WorldMode is selected:
        //		user can't hear the speaker if the distance between them is larger than the range;
        //		by default, range = 0. which means without calling UpdateAudioRecvRange no audio would be available.
        public abstract int UpdateAudioRecvRange(int range);
        // Tell Self's position and rotation information to GME for function: Spatializer && WorldMode
        // position and rotate should be under the world coordinate system specified by forward, rightward, upward direction.
        // for example: in Unreal(forward->X, rightward->Y, upward->Z); in Unity(forward->Z, rightward->X, upward->Y)
        // position: self's position
        // axisForward: the forward axis of self's camera rotation
        // axisRightward: the rightward axis of self's camera rotation
        // axisUpward: the upward axis of self's camera rotation
        public abstract int UpdateSelfPosition(int[] position, float[] axisForward, float[] axisRight, float[] axisUp);

        /// <summary>
        /// 跨房连麦功能
        /// </summary>
        /// <param name="targetRoomID">将要连麦的房间号</param>
        /// <param name="targetOpenID">将要连麦的目标OpenID</param>
        /// <param name="authBuffer">保留标志位，只需填NULL(byte[] authBuffer = NULL)</param>
        /// <returns></returns>
        public abstract int StartRoomSharing(string targetRoomID, string targetOpenID, byte[] authBuffer);

        /// <summary>
        /// 停止连麦
        /// </summary>
        /// <returns></returns>
        public abstract int StopRoomSharing();

        // roomID : the room you want to switch to
        // authBuffer : Authentication code in Tencent Cloud
        public abstract int SwitchRoom(string roomID, byte[] authBuffer);

        public abstract int SendCustomData(byte[] customdata,int repeatCout);

        public abstract int StopSendCustomData();

        /// <summary>
        /// 设置音频路由转发接口
        /// </summary>
        /// <param name="Sendtype">发送音频规则</param>
        /// <param name="OpenIDforSend">发送规则openid</param>
        /// <param name="Recvtype">接收音频规则</param>
        /// <param name="OpenIDforRecv">接收规则openid</param>
        /// <returns></returns>
        public abstract int SetServerAudioRouteSendOperateType(ITMG_SERVER_AUDIO_ROUTE_SEND_TYPE Sendtype, string[] OpenIDforSend, ITMG_SERVER_AUDIO_ROUTE_RECV_TYPE Recvtype, string[] OpenIDforRecv);

        /// <summary>
        /// 获取发送音频规则
        /// </summary>
        /// <param name="OpenIDforSend"></param>
        /// <returns></returns>
        public abstract ITMG_SERVER_AUDIO_ROUTE_SEND_TYPE GetCurrentSendAudioRoute(List<string> OpenIDforSend);

        /// <summary>
        /// 获取接收音频规则
        /// </summary>
        /// <param name="OpenIDforRecve"></param>
        /// <returns></returns>
        public abstract ITMG_SERVER_AUDIO_ROUTE_RECV_TYPE GetCurrentRecvAudioRoute(List<string> OpenIDforRecve);
    }

    public abstract class ITMGAudioCtrl
	{

        /// <summary>
        /// 推荐使用此方法开关麦克风。EnableMic(value) = EnableAudioCaptureDevice(value) + EnableAudioSend(value)
        /// </summary>
        /// <returns>成功返回OK</returns>
        public abstract int EnableMic(bool isEnabled);

        /// <summary>
        /// 只是快捷方式。GetMicState() = IsAudioSendEnabled() && IsAudioCaptureDeviceEnabled()
        /// </summary>
        /// <returns> [0 is off; 1 is on]</returns>
        public abstract int GetMicState();

        /// <summary>
        /// 推荐使用此方法开关扬声器。EnableSpeaker(value) = EnableAudioPlayDevice(value) + EnableAudioRecv(value)
        /// </summary>
        /// <returns>成功返回OK</returns>
        public abstract int EnableSpeaker(bool isEnabled);

        /// <summary>
        /// 只是快捷方式。GetSpeakerState() = IsAudioRecvEnabled() && IsAudioPlayDeviceEnabled()
        /// </summary>
        /// <returns> [0 is off; 1 is on]</returns>
        public abstract int GetSpeakerState();

        /// <summary>
        /// 检测 iPhone 静音键状态，仅iOS生效
        /// </summary>
        /// <returns> 该次请求的结果，不是状态，状态需要在回调中查看。</returns>
        public abstract int CheckDeviceMuteState();

		/// <summary>
		/// 开启采集和播放设备。默认情况下，GME不会打开设备。
		/// 注意：只能在进房后调用此API，退房会自动关闭设备
		/// 注意：在移动端，打开采集设备通常会伴随权限申请，音量类型调整等操作。
		/// 
		/// 调用场景举例：
		/// 1、当用户界面点击打开/关闭麦克风/扬声器按钮时，建议：
        /// 	Option 1: 对于大部分的游戏类App，总是应该同时调用EnableAudioCaptureDevice/EnableAudioSend 和 EnableAudioPlayDevice/EnableAudioRecv，
        ///		Option 2: 只有特定的社交类App，需要在进房后一次性调用EnableAudioCapture/PlayDevice(true)，后续只使用EnableAudioSend和EnableAudioRecv进行控制
		///	2、如目的是互斥（释放录音权限给其他模块使用），建议使用PauseAudio/ResumeAudio
		/// 
		/// </summary>
		public abstract int EnableAudioCaptureDevice (bool enabled);
		public abstract int EnableAudioPlayDevice (bool enabled);

		/// <summary>
		/// 获取音频采集设备开启状态
		/// </summary>
		public abstract bool IsAudioCaptureDeviceEnabled();
		/// <summary>
		/// 获取音频播放设备开启状态
		/// </summary>
		public abstract bool IsAudioPlayDeviceEnabled();

		/// <summary>
		/// 打开/关闭音频上行，如果采集设备已经打开，那么会发送采集到的音频数据。如果采集设备没有打开，那么仍旧无声。参见EnableAudioCaptureDevice
		/// </summary>
		/// <returns>成功返回OK</returns>
		public abstract int EnableAudioSend(bool isEnabled);
		
		/// <summary>
		/// 打开/关闭音频下行，如果播放设备已经打开，那么会接收并播放房间里其他人的音频数据。如果播放设备没有打开，那么仍旧无声。参见EnableAudioPlayDevice
		/// </summary>
		/// <returns>成功返回OK</returns>
		public abstract int EnableAudioRecv(bool isEnabled);

		/// <summary>
		/// 获取音频数据上行开启状态
		/// </summary>
		public abstract bool IsAudioSendEnabled();
		/// <summary>
		/// 获取音频数据下行开启状态
		/// </summary>
		public abstract bool IsAudioRecvEnabled();

		/// <summary>
		/// 获取麦克风的实时音量
		/// </summary>
		/// <returns>值域0-100</returns>
		public abstract int GetMicLevel();
		
		/// <summary>
		/// 设置麦克风的软件音量，默认100，100为不增不减，值域0-200
		/// </summary>
		/// <returns>成功返回OK</returns>
		public abstract int SetMicVolume(int volume);
		
		/// <summary>
		/// 返回麦克风的软件音量，默认100
		/// </summary>
		/// <returns>返回setMicVolume</returns>
		public abstract int GetMicVolume();
		
		/// <summary>
		/// 获取扬声器的实时音量
		/// </summary>
		/// <returns>值域0-100</returns>
		public abstract int GetSpeakerLevel();
		
		/// <summary>
		/// 设置扬声器的软件音量，默认100，100为不增不减，值域0-200
		/// </summary>
		/// <returns>成功返回OK</returns>
		public abstract int SetSpeakerVolume(int volume);
		
		/// <summary>
		/// 获取扬声器的软件音量
		/// </summary>
		/// <returns>返回SetSpeakerVolume</returns>
		public abstract int GetSpeakerVolume();

        /// <summary>
        /// 设置房间内某个成员声音大小
        /// </summary>
        /// <param name="openid">某成员openid</param>
        /// <param name="volume">期望的音量，范围为0-200，100表示无增强也无衰减</param>
        /// <returns></returns>
        public abstract int SetSpeakerVolumeByOpenID(string openid, int volume);

        /// <summary>
        /// 获取音量设置的声音百分比
        /// </summary>
        /// <param name="openid">某成员openid</param>
        /// <returns></returns>
        public abstract int GetSpeakerVolumeByOpenID(string openid);

        /// <summary>
        /// 获取某个说成员音量
        /// </summary>
        /// <returns>返回GetVolumeById</returns>
        public abstract int GetVolumeById(string openid);

		/// <summary>
		/// 启用耳返
		/// </summary>
		/// <returns>成功返回OK</returns>
		/// <param name="enable">启用或是不启用</param>
		public abstract int EnableLoopBack(bool enable);

		public static int AUDIOROUTE_OTHERS = -1;	//使用其他设备播放
		public static int AUDIOROUTE_BUILDINRECIEVER = 0;	//使用听筒设备播放
		public static int AUDIOROUTE_SPEAKER = 1;	//使用扬声器设备播放
		public static int AUDIOROUTE_HEADPHONE = 2;	//使用耳机设备播放
		public static int AUDIOROUTE_BLUETOOTH = 3;		//使用蓝牙设备播放

		public abstract event QAVAudioRouteChangeCallback OnAudioRouteChangeComplete;
        public abstract event QAVAudioIOSMuteSwitchResultCallback OnIOSMuteSwitchResult;       

        /// <summary>
        /// 黑名单功能
        /// </summary>
        /// <param name="openId">不希望收到其音频数据的成员列表</param>
        /// <returns>成功返回OK</returns>
        /// <remarks> 加入到列表中的用户的声音不会播放 </remarks>
		public abstract int AddAudioBlackList(string openId);
		public abstract int RemoveAudioBlackList(string openId);

        /// <summary>
        /// 获取自己上行的实时音量
        /// </summary>
        /// <returns>音量值，取值范围[0,100]</returns>
        public abstract int GetSendStreamLevel();

        /// <summary>
        /// 获取房间内其他成员下行流的实时音量
        /// </summary>
        /// <param name="openId">房间内其他成员的openid</param>
        /// <returns>音量值，取值范围[0,100]</returns>
        public abstract int GetRecvStreamLevel(string openId);

		public abstract int InitSpatializer(string modelPath);
        public abstract int EnableSpatializer(bool enable, bool applyTeam);
        public abstract bool IsEnableSpatializer();
        public abstract int SetAudioMixCount(int nCount);

        public abstract int AddSameTeamSpatializer(string openId);

        public abstract int RemoveSameTeamSpatializer(string openId);

        public abstract int EnableAudioDispatcher(bool enable);
    }

	public abstract class ITMGAudioEffectCtrl
	{
		// 播放结束时的回调
		public abstract event QAVAccompanyFileCompleteHandler OnAccompanyFileCompleteHandler;
		
		// 控制接口，一次仅能播放一个伴奏
		// loopBack:是否混音发送，一般都设置为true
		// loopCount:循环次数，-1为无限循环
		public abstract int StartAccompany(string filePath, bool loopBack, int loopCount, int duckerTimeMs);
        public abstract int StartAccompanyDownloading(string filePath, bool loopBack, int loopCount, int duckerTimeMs, int fileSize);
		public abstract int StopAccompany(int duckerTimeMs);
		public abstract bool IsAccompanyPlayEnd();
		public abstract int PauseAccompany();
		public abstract int ResumeAccompany();

		public abstract int EnableAccompanyPlay(bool enable);
		public abstract int EnableAccompanyLoopBack(bool enable);
        public abstract int SetAccompanyKey(int nKey);

        // 播放伴奏的音量，为线性音量，默认值为100，大于100增益，小于100减益
        public abstract int SetAccompanyVolume(int vol);
		public abstract int GetAccompanyVolume();
		
		// 获得伴奏播放进度
		// 需要注意，Current / Total = 当前循环次数，Current % Total = 当前循环播放位置
		public abstract uint GetAccompanyFileTotalTimeByMs();
		public abstract uint GetAccompanyFileCurrentPlayedTimeByMs();

        public abstract uint GetAccompanyFileTotalTimeByMs(string openId);
        public abstract uint GetAccompanyFileCurrentPlayedTimeByMs(string openId);
        public abstract int SetAccompanyFileCurrentPlayedTimeByMs(uint time);

		// 播放音效的音量，为线性音量，默认值为100，大于100增益，小于100减益
		public abstract int GetEffectsVolume();
		public abstract int SetEffectsVolume(int volume);
        public abstract int GetEffectVolume(int soundId);
        public abstract int SetEffectVolume(int soundId, int volume);

        // 控制接口，soundId需App侧进行管理，唯一标识一个独立文件；
        // loop:是否进行循环播放；
        // pitch:未实现，预期未修改音调，默认值1.0；
        // pan:未实现，预期为音效空间位置，默认值0表示音效出现在正前方，-1表示音效出现在左方，1表示音效出现在右方
        public abstract int PlayEffect(int soundId, string filePath, bool loop = false, double pitch = 1.0f, double pan = 0.0f, int volume = 100);
		public abstract int PauseEffect(int soundId);
		public abstract int PauseAllEffects();
		public abstract int ResumeEffect(int soundId);
		public abstract int ResumeAllEffects();
		public abstract int StopEffect(int soundId);
		public abstract int StopAllEffects();

        public abstract int StartRecord(string filePath, int sampleRate, int channels, bool recordLocalMic, bool recordRemote, bool recordAccompany);
        public abstract int StopRecord();
        public abstract int PauseRecord();
        public abstract int ResumeRecord();

        public abstract int EnableRecordLocalMic(bool recordLocalMic);
        public abstract int EnableRecordAccompany(bool recordAccompany);
        public abstract int EnableRecordRemote(bool recordRemote);

        public static int VOICE_TYPE_ORIGINAL_SOUND = 0;	/// 原声
		public static int VOICE_TYPE_LOLITA = 1;			/// 萝莉
		public static int VOICE_TYPE_UNCLE = 2;				/// 大叔
		public static int VOICE_TYPE_INTANGIBLE = 3;		/// 空灵
		public static int VOICE_TYPE_DEAD_FATBOY = 4;		/// 死肥宅
		public static int VOICE_TYPE_HEAVY_MENTAL = 5;	 	/// 重金属
		public static int VOICE_TYPE_DIALECT = 6;			/// 歪果仁
		public static int VOICE_TYPE_INFLUENZA = 7;			/// 感冒
		public static int VOICE_TYPE_CAGED_ANIMAL = 8;		/// 困兽
		public static int VOICE_TYPE_HEAVY_MACHINE = 9;		/// 重机器
		public static int VOICE_TYPE_STRONG_CURRENT = 10;	/// 强电流
		public static int VOICE_TYPE_KINDER_GARTEN = 11;	/// 幼稚园
		public static int VOICE_TYPE_HUANG = 12;			/// 小黄人
		public abstract int SetVoiceType(int voiceType);
		
		public static int KARAOKE_TYPE_ORIGINAL = 0;
		public static int KARAOKE_TYPE_POP = 1;
		public static int KARAOKE_TYPE_ROCK = 2;
		public static int KARAOKE_TYPE_RB = 3;
		public static int KARAOKE_TYPE_DANCE = 4;
		public static int KARAOKE_TYPE_HEAVEN = 5;
        public static int KARAOKE_TYPE_TTS = 6;
        public abstract int SetKaraokeType(int type);
	}

	public abstract class ITMGPTT
	{
        static ITMGPTT()
        {
            ITMGContext.GetInstance().GetPttCtrl();
        }
		public static ITMGPTT GetInstance()
		{
			return ITMGContext.GetInstance().GetPttCtrl();
		}

		public abstract event QAVRecordFileCompleteCallback OnRecordFileComplete;
		public abstract event QAVUploadFileCompleteCallback OnUploadFileComplete;
		public abstract event QAVDownloadFileCompleteCallback OnDownloadFileComplete;
		public abstract event QAVPlayFileCompleteCallback OnPlayFileComplete;
		public abstract event QAVSpeechToTextCallback OnSpeechToTextComplete;
		public abstract event QAVStreamingRecognitionCallback OnStreamingSpeechComplete;
		public abstract event QAVStreamingRecognitionCallback OnStreamingSpeechisRunning;
	

		/// <summary>
		/// 设置ptt的鉴权buffer
		/// </summary>
		/// <param name="authBuffer">鉴权buffer </param>
		/// <returns> if success return OK</returns>
		public abstract int ApplyPTTAuthbuffer (byte[] authBuffer);

        /// <summary>
        /// 设置ptt message的最大时长，最大支持60s
        /// </summary>
        /// <param name="msTimeout">timeout for ptt</param>
        /// <returns> if success return OK, failed return other errno @see QAVError</returns>
		public abstract int SetMaxMessageLength(int msTime);

        /// <summary>
        /// 开始录制ptt message.
        /// </summary>
		/// <param name="filePath">voice data to store. file path should be such as: "your_dir/your_file_name" be sure to use "/" not "\"</param>
        /// <returns>if success return OK, failed return other errno @see QAVError</returns>
		public abstract int StartRecording(string filePath);

        /// <summary>
        /// 停止录制ptt message.
        /// </summary>
        ///<returns>if success return OK, failed return other errno @see QAVError</returns>
		public abstract int StopRecording();

        /// <summary>
        /// almost same with StopRecording, except for without throwing RecordFileCompleteHandler
        /// </summary>
        /// <returns><c>true</c> if success return OK, failed return other errno @see QAVError</returns>
		public abstract int CancelRecording();

        /// <summary>
        /// 上传指定路径的ptt message文件
        /// </summary>
        /// <param name="filePath">voice data to store. file path should be such as: "your_dir/your_file_name" be sure to use "/" not "\"</param>
        /// <returns>if success return OK, failed return other errno @see QAVError</returns>
		public abstract int UploadRecordedFile(string filePath);

        /// <summary>
        /// 下载指定ID的ptt message文件
        /// </summary>
        /// <param name="fileID">file to be download</param>
        /// <param name="downloadFilePath">voice data to store. file path should be such as: "your_dir/your_file_name" be sure to use "/" not "\"</param>
        /// <param name="msTimeout">time for download, it is micro second. value range[5000, 60000]</param>
        /// <returns>if success return OK, failed return other errno @see QAVError</returns>
		public abstract int DownloadRecordedFile(string fileID, string downloadFilePath);

        /// <summary>
        /// 播放ptt message文件
        /// </summary>
		/// <param name="filePath">voice data to store. file path should be such as: "your_dir/your_file_name" be sure to use "/" not "\"</param>
        /// <returns>if success return OK, failed return other errno @see QAVError</returns>
		public abstract int PlayRecordedFile(string filePath);

        /// <summary>
        /// 播放ptt message文件
        /// </summary>
		/// <param name="filePath">voice data to store. file path should be such as: "your_dir/your_file_name" be sure to use "/" not "\"</param>
        /// <param name="voiceType">voice change type value from 0-12</param>
        /// <returns>if success return OK, failed return other errno @see QAVError</returns>
        public abstract int PlayRecordedFile(string filePath,int voiceType);

        /// <summary>
        /// 停止播放ptt message文件
        /// </summary>
        /// <returns>if success return OK, failed return other errno @see QAVError</returns>
		public abstract int StopPlayFile();

        /// <summary>
		/// 把指定的语音文件识别成文字
        /// </summary>
		/// <param name="fileID">file to be recognize</param>
		/// <param name="language">a language id indicate which language to be recognize</param>
        /// <returns> if success return OK</returns>
		public abstract int SpeechToText(string fileID);


		/// <summary>
		/// 把指定的语音文件识别成文字
		/// </summary>
		/// <param name="fileID">file to be recognize</param>
		/// <param name="language">a language id indicate which language to be recognize</param>
		/// <returns> if success return OK</returns>
		public abstract int SpeechToText(string fileID, string speechLanguage);

        /// <summary>
        /// 把指定的语音文件识别成文字并翻译到指定的语音
        /// </summary>
        /// <param name="fileID">file to be recognize</param>
        /// <param name="language">说明待识别文件的语种</param>
        //// <param name="translatelanguage">将识别出来的结果翻译到指定的语种</param> 
        /// <returns> if success return OK</returns>
        public abstract int SpeechToText(string fileID, string speechLanguage, string translatelanguage);
        
        /// <summary>
        /// 获取指定语音文件的大小
        /// </summary>
		/// <param name="filePath">file path</param>
        /// <returns> if success return OK</returns>
        public abstract int GetFileSize(string filePath);

        /// <summary>
        /// 获取指定语音文件的时长,ms
        /// </summary>
        /// <param name="filePath">file path</param>
        /// <returns> if success return OK</returns>
		public abstract int GetVoiceFileDuration(string filePath);

        /// <summary>
        /// 流式的语音转文本
        /// </summary>
        /// <param name="filePath">file path</param>
        public abstract int StartRecordingWithStreamingRecognition(string filePath);

        /// <summary>
        /// 流式的语音转文本
        /// </summary>
        /// <param name="filePath">file path</param>
        /// <returns> if success return OK</returns>
        public abstract int StartRecordingWithStreamingRecognition(string filePath, string speechLanguage);

		/// <summary>
		/// 流式的语音转文本
		/// </summary>
		/// <param name="filePath">file path</param>
		///  <param name="language">音频文件的语种</param>
        ///    <param name="translatelanguage">将音频文件的识别结果翻译成指定的语种</param>
		/// <returns> if success return OK</returns>
        public abstract int StartRecordingWithStreamingRecognition(string filePath, string speechLanguage, string translatelanguage);


        /// <summary>
        /// 获取麦克风的实时音量
        /// </summary>
        /// <returns>值域0-100</returns>
        public abstract int GetMicLevel();

        /// <summary>
        /// 设置麦克风的软件音量，默认100，100为不增不减，值域0-200
        /// </summary>
        /// <returns>成功返回OK</returns>
        public abstract int SetMicVolume(int volume);

        /// <summary>
        /// 返回麦克风的软件音量，默认100
        /// </summary>
        /// <returns>返回setMicVolume</returns>
        public abstract int GetMicVolume();

        /// <summary>
        /// 获取扬声器的实时音量
        /// </summary>
        /// <returns>值域0-100</returns>
        public abstract int GetSpeakerLevel();

        /// <summary>
        /// 设置扬声器的软件音量，默认100，100为不增不减，值域0-200
        /// </summary>
        /// <returns>成功返回OK</returns>
        public abstract int SetSpeakerVolume(int volume);

        /// <summary>
        /// 获取扬声器的软件音量
        /// </summary>
        /// <returns>返回SetSpeakerVolume</returns>
        public abstract int GetSpeakerVolume();

        /// <summary>
        /// 离线语音录制暂停
        /// </summary>
        /// <returns>成功返回OK</returns>
        public abstract int PauseRecording();

        /// <summary>
        /// 离线语音录制恢复
        /// </summary>
        /// <returns>成功返回OK</returns>
        public abstract int ResumeRecording();

	}

    /// <summary>
    /// GME房间管理接口
    /// </summary>
    public abstract class ITMGRoomManager
    {
        static ITMGRoomManager()
        {
            ITMGContext.GetInstance().GetRoomManager();
        }
        public static ITMGRoomManager GetInstance()
        {
            return ITMGContext.GetInstance().GetRoomManager();
        }

        /// <summary>
        /// 打开或关闭指定用户的麦克风
        /// </summary>
        /// <param name="enable">打开或者关闭</param>
        /// <param name="receiverID">接收方openId</param>
        /// <returns>成功返回OK</returns>
        public abstract int EnableMic(bool enable, string receiverID);

        /// <summary>
        /// 打开或关闭指定用户的扬声器
        /// </summary>
        /// <param name="enable">打开或者关闭</param>
        /// <param name="receiverID">接收方openId</param>
        /// <returns>成功返回OK</returns>
        public abstract int EnableSpeaker(bool enable, string receiverID);

        /// <summary>
        /// 打开或关闭指定用户的采集设备
        /// </summary>
        /// <param name="enable">打开或者关闭</param>
        /// <param name="receiverID">接收方openId</param>
        /// <returns>成功返回OK</returns>
        public abstract int EnableAudioCaptureDevice(bool enable, string receiverID);

        /// <summary>
        /// 打开或关闭指定用户的播放设备
        /// </summary>
        /// <param name="enable">打开或者关闭</param>
        /// <param name="receiverID">接收方openId</param>
        /// <returns>成功返回OK</returns>
        public abstract int EnableAudioPlayDevice(bool enable, string receiverID);

        /// <summary>
        /// 打开或关闭指定用户的上行
        /// </summary>
        /// <param name="enable">打开或者关闭</param>
        /// <param name="receiverID">接收方openId</param>
        /// <returns>成功返回OK</returns>
        public abstract int EnableAudioSend(bool enable, string receiverID);

        /// <summary>
        /// 打开或关闭指定用户的下行
        /// </summary>
        /// <param name="enable">打开或者关闭</param>
        /// <param name="receiverID">接收方openId</param>
        /// <returns>成功返回OK</returns>
        public abstract int EnableAudioRecv(bool enable, string receiverID);

        /// <summary>
        /// 禁止或允许指定用户操作扬声器或麦克风
        /// </summary>
        /// <param name="enable">打开或者关闭</param>
        /// <param name="receiverID">接收方openId</param>
        /// <returns>成功返回OK</returns>
        public abstract int ForbidUserOperation(bool enable, string receiverID);

        /// <summary>
        /// 获取指定用户的麦克风状态
        /// </summary>
        /// <param name="receiverID">接收方openId</param>
        /// <returns>成功返回OK</returns>
        public abstract int GetMicState(string receiverID);

        /// <summary>
        /// 获取指定用户的扬声器状态
        /// </summary>
        /// <param name="receiverID">接收方openId</param>
        /// <returns>成功返回OK</returns>
        public abstract int GetSpeakerState(string receiverID);
    }
}
