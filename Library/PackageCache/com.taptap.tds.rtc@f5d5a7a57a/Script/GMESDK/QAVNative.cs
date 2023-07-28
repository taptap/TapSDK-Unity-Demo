using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text;
using UnityEngine;


namespace TencentMobileGaming
{
	public class QAVNative
	{
        //如果编译器提示找不到GMESDK_VERSION_xxx,说明升级sdk的时候没有升级所有文件，请全量升级
        public static string NATIVE_VERSION = QAVError.GMESDK_VERSION_e089f0465e71aeea0cdfd24253f6e1e6c625fdd2;
        static QAVNative ()
        {
			
		}
        
		#region DllImport
		
		#if (UNITY_IPHONE||UNITY_SWITCH) && !UNITY_EDITOR
		public const string MyLibName = "__Internal";
        #else
        public const string MyLibName = "gmesdk";
        #endif
        #endregion

        #region NativeEntry
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_Poll();
		
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern IntPtr QAVSDK_GetSDKVersion();
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern void QAVSDK_SetAppVersion([MarshalAs(UnmanagedType.LPStr)] string sAppVersion);
		
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVContext_CheckMicPermission();

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVContext_SetLogLevel(int levelWrite, int levelPrint);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVContext_SetLogPath([MarshalAs(UnmanagedType.LPStr)] string logDir);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern bool QAVSDK_AVContext_IsContextStarted();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void QAVSDK_AVContext_SetRegion(string region);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVContext_Start([MarshalAs(UnmanagedType.LPStr)] string sdk_version, 
                                                         [MarshalAs(UnmanagedType.LPStr)] string sdkAppId,
		                                                 [MarshalAs(UnmanagedType.LPStr)] string openId);
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVContext_Stop();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVContext_Destroy();
        
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVContext_CheckMic();
        
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern bool QAVSDK_AVContext_IsRoomEntered();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern bool QAVSDK_AVContext_SetDelegate(QAVEnterRoomComplete enterRoomComplete, QAVExitRoomComplete exitRoomComplete, QAVRoomDisconnect roomDisconnect, QAVEndpointsUpdateInfo endpointsUpdateInfo,
            QAVOnRoomTypeChangedEvent onRoomtypeChangeEvent, QAVOnDeviceStateChangedEvent onDeviceStateChangedEvent,
            QAVAudioReadyCallback audioReadyCallback, QAVRoomChangeQualityCallback onRoomChangeQualityEvent, QAVCommonEventCallback commonEventCallback, QAVOnEventCallBack onEventCallback);

		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVContext_EnterRoom([MarshalAs(UnmanagedType.LPStr)] string roomID, [MarshalAs(UnmanagedType.LPArray, SizeParamIndex = 3)] byte[] authBuffer, int authBufferLen, int roomtype);
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVContext_ExitRoom();

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVContext_SetRecvMixStreamCount(int nMixCount);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVContext_Resume();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVContext_Pause();

		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVContext_SetAdvanceParams([MarshalAs(UnmanagedType.LPStr)]string KeyCode,[MarshalAs(UnmanagedType.LPStr)]string value);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVContext_StartRealTimeASR([MarshalAs(UnmanagedType.LPStr)]string language);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVContext_StopRealTimeASR();

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr QAVSDK_AVContext_GetAdvanceParams([MarshalAs(UnmanagedType.LPStr)]string KeyCode);

		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern IntPtr QAVSDK_AVRoom_GetQualityTips();
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVRoom_ChangeRoomType(int roomtype, QAVCallback callback);
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVRoom_GetRoomType();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr QAVSDK_AVRoom_GetRoomID();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVContext_SetRangeAudioMode(int audioMode);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVContext_SetRangeAudioTeamID(int teamID);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVRoom_UpdateAudioRecvRange(int range);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVRoom_UpdateSelfPosition(
            [MarshalAs(UnmanagedType.LPArray, SizeParamIndex = 5)] int[] position,
            [MarshalAs(UnmanagedType.LPArray, SizeParamIndex = 5)] float[] axisForward, 
            [MarshalAs(UnmanagedType.LPArray, SizeParamIndex = 5)] float[] axisRight, 
            [MarshalAs(UnmanagedType.LPArray, SizeParamIndex = 5)] float[] axisUp, int len);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVRoom_StartRoomSharing([MarshalAs(UnmanagedType.LPStr)] string targetRoomID, [MarshalAs(UnmanagedType.LPStr)] string targetOpenID, [MarshalAs(UnmanagedType.LPArray, SizeParamIndex = 4)] byte[] authBuffer, int authBufferLen);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVRoom_StopRoomSharing();

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVRoom_SwitchRoom([MarshalAs(UnmanagedType.LPStr)] string roomID, [MarshalAs(UnmanagedType.LPArray, SizeParamIndex = 3)] byte[] authBuffer, int authBufferLen);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVRoom_SendCustomData( [MarshalAs(UnmanagedType.LPArray, SizeParamIndex = 1)] byte[] customdata, int dataSize,int repeatCout);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVRoom_StopSendCustomData();

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVRoom_SetServerAudioRoute(ITMG_SERVER_AUDIO_ROUTE_SEND_TYPE SendType, [MarshalAs(UnmanagedType.LPArray, SizeParamIndex = 2)]string[] OpenIDforSend, int OpenIDforSendSize, ITMG_SERVER_AUDIO_ROUTE_RECV_TYPE RecvType, [MarshalAs(UnmanagedType.LPArray, SizeParamIndex = 5)] string[] OpenIDforRecv, int OpenIDforRecvSize);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern ITMG_SERVER_AUDIO_ROUTE_SEND_TYPE QAVSDK_AVRoom_GetCurrentSendAudioRoute(StringBuilder OpenIDforSend, int OpenIDforSendSize);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern ITMG_SERVER_AUDIO_ROUTE_RECV_TYPE QAVSDK_AVRoom_GetCurrentRecvAudioRoute(StringBuilder OpenIDforRecve, int OpenIDforRecveSize);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVAudioCtrl_EnableAudioCaptureDevice(bool enabled);
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVAudioCtrl_EnableAudioPlayDevice(bool enabled);
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVAudioCtrl_IsAudioCaptureDeviceEnabled();
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVAudioCtrl_IsAudioPlayDeviceEnabled();
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVAudioCtrl_EnableAudioSend(bool enabled);
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVAudioCtrl_EnableAudioRecv(bool enabled);
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVAudioCtrl_IsAudioSendEnabled();
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVAudioCtrl_IsAudioRecvEnabled();
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVAudioCtrl_GetMicLevel();
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVAudioCtrl_SetMicVolume(int volume);
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVAudioCtrl_GetMicVolume();
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVAudioCtrl_GetSpeakerLevel();
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVAudioCtrl_SetSpeakerVolume(int volume);
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVAudioCtrl_GetSpeakerVolume();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_SetSpeakerVolumeByOpenID([MarshalAs(UnmanagedType.LPStr)] string openId, int volume);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_GetSpeakerVolumeByOpenID([MarshalAs(UnmanagedType.LPStr)] string openId);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_GetVolumeByUin([MarshalAs(UnmanagedType.LPStr)] string openId);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_EnableLoopBack(bool enabled);

		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVAudioCtrl_SetAudioRouteChangeCallback(QAVAudioRouteChangeCallback callback);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVAudioCtrl_CheckDeviceMuteState(QAVAudioIOSMuteSwitchResultCallback callback);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_SetVoiceType(int voiceType);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_SetKaraokeType(int type);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_AddAudioBlackList([MarshalAs(UnmanagedType.LPStr)] string openId);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_RemoveAudioBlackList([MarshalAs(UnmanagedType.LPStr)] string openId);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_GetSendStreamLevel();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_GetRecvStreamLevel([MarshalAs(UnmanagedType.LPStr)] string openId);

		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_InitSpatializer([MarshalAs(UnmanagedType.LPStr)] string modelPath);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_EnableSpatializer(bool enabled, bool applyTeam);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern bool QAVSDK_AVAudioCtrl_IsEnableSpatializer();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_SetAudioMixCount(int nCount);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_AddSameTeamSpatializer([MarshalAs(UnmanagedType.LPStr)] string openid);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_RemoveSameTeamSpatializer([MarshalAs(UnmanagedType.LPStr)] string openid);
        
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_EnableAudioDispatcher(bool enabled);


        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_StartRecord([MarshalAs(UnmanagedType.LPStr)] string filePath,
            int sampleRate, int channels, bool recordLocalMic, bool recordRemote, bool recordAccompany);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_StopRecord();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_PauseRecord();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_ResumeRecord();

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_EnableRecordLocalMic(bool recordLocalMic);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_EnableRecordAccompany(bool recordAccompany);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_EnableRecordRemote(bool recordRemote);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_StartRecording(int type, 
            [MarshalAs(UnmanagedType.LPStr)] string dstFile,
            [MarshalAs(UnmanagedType.LPStr)] string accMixFile,
            [MarshalAs(UnmanagedType.LPStr)] string accPlayFile, 
            QAVAudioRecordCallback callback);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern  int QAVSDK_AVAudioCtrl_StopRecording();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern  int QAVSDK_AVAudioCtrl_PauseRecording();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_ResumeRecording();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_SetAccompanyFile([MarshalAs(UnmanagedType.LPStr)] string accPlayFile);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_GetAccompanyTotalTimeByMs();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_GetRecordTimeByMs();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_SetRecordTimeByMs(int timePlay, int timeRecord);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_SetRecordKaraokeType(int type);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_GetRecordFileDurationByMs();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_StartPreview(QAVAudioRecordPreviewCallback callback);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_StopPreview();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_PausePreview();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_ResumePreview();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_SetPreviewTimeByMs(int time);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_GetPreviewTimeByMs();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_SetMixWeights(float mic, float acc);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_AdjustAudioTimeByMs(int time);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_MixRecordFile(bool needMicData, QAVAudioRecordMixCallback callback);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_CancelMixRecordFile();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_CleanTask();
		


        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_PlayEffect(
            int soundId, string filePath, bool loop, 
            double pitch, double pan, int volume);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_PauseEffect(int soundId);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_PauseAllEffects();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_ResumeEffect(int soundId);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_ResumeAllEffects();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_StopEffect(int soundId);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_StopAllEffects();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_GetEffectsVolume();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_SetEffectsVolume(int volume);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_GetEffectVolume(int soundId);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_SetEffectVolume(int soundId, int volume);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVAudioCtrl_StartAccompany(string filePath, bool loopBack, int loopCount, int duckerTimeMs,int fileSize, QAVAccompanyFileCompleteHandler callback);
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVAudioCtrl_StopAccompany(int duckerTimeMs);
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern bool QAVSDK_AVAudioCtrl_IsAccompanyPlayEnd();
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVAudioCtrl_PauseAccompany();
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVAudioCtrl_ResumeAccompany();
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVAudioCtrl_EnableAccompanyPlay(bool enable);
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVAudioCtrl_EnableAccompanyLoopBack(bool enable);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVAudioCtrl_SetAccompanyKey(int nKey);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVAudioCtrl_SetAccompanyVolume(int vol);
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVAudioCtrl_GetAccompanyVolume();
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern uint QAVSDK_AVAudioCtrl_GetAccompanyFileTotalTimeByMs();
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_AVAudioCtrl_SetAccompanyFileCurrentPlayedTimeByMs(uint timeMs);
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern uint QAVSDK_AVAudioCtrl_GetAccompanyFileCurrentPlayedTimeByMs();
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern uint QAVSDK_AVAudioCtrl_GetAccompanyFileTotalTimeMsById([MarshalAs(UnmanagedType.LPStr)] string openid);
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern uint QAVSDK_AVAudioCtrl_GetAccompanyFileCurrentPlayedTimeMsById([MarshalAs(UnmanagedType.LPStr)] string openid);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_PTT_ApplyPTTAuthbuffer([MarshalAs(UnmanagedType.LPArray, SizeParamIndex = 1)] byte[] authBuffer, int authBufferLen);
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_PTT_SetAppInfo([MarshalAs(UnmanagedType.LPStr)] string appid, 
		                                               [MarshalAs(UnmanagedType.LPStr)] string openid);
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_PTT_SetMaxMessageLength(int msTime);

		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_PTT_StartRecording([MarshalAs(UnmanagedType.LPStr)] string filePath, QAVRecordFileCompleteCallback callback);
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_PTT_StopRecording();
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_PTT_CancelRecording();

		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_PTT_UploadRecordedFile([MarshalAs(UnmanagedType.LPStr)] string filePath, QAVUploadFileCompleteCallback callback);
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_PTT_DownloadRecordedFile([MarshalAs(UnmanagedType.LPStr)] string fileID, [MarshalAs(UnmanagedType.LPStr)] string filePath, QAVDownloadFileCompleteCallback callback);
		
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_PTT_StartPlayFileWithVoiceType([MarshalAs(UnmanagedType.LPStr)] string filePath, int voiceType, QAVPlayFileCompleteCallback callback);
        
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_PTT_StartPlayFile([MarshalAs(UnmanagedType.LPStr)] string filePath, QAVPlayFileCompleteCallback callback);

		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_PTT_StopPlayFile();
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_PTT_GetFileSize([MarshalAs(UnmanagedType.LPStr)] string filePath);
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_PTT_GetVoiceFileDuration([MarshalAs(UnmanagedType.LPStr)] string filePath);
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
		public static extern int QAVSDK_PTT_SpeechToText([MarshalAs(UnmanagedType.LPStr)] string fileID, [MarshalAs(UnmanagedType.LPStr)] string speechLanguage, [MarshalAs(UnmanagedType.LPStr)] string translateLanguage, QAVSpeechToTextCallback callback);
		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_PTT_StartRecordingWithStreamingRecognition([MarshalAs(UnmanagedType.LPStr)] string filePath, [MarshalAs(UnmanagedType.LPStr)] string speechLanguage, [MarshalAs(UnmanagedType.LPStr)] string translatelanguage, QAVStreamingRecognitionNativeCallback callback);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_PTT_GetMicLevel();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_PTT_GetMicVolume();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_PTT_SetMicVolume(int vol);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_PTT_GetSpeakerLevel();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_PTT_GetSpeakerVolume();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_PTT_SetSpeakerVolume(int vol);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_PTT_PauseRecording();
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_PTT_ResumeRecording();

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVRoomManager_EnableMic(bool enable, [MarshalAs(UnmanagedType.LPStr)] string receiverID);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVRoomManager_EnableSpeaker(bool enable, [MarshalAs(UnmanagedType.LPStr)] string receiverID);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVRoomManager_EnableAudioCaptureDevice(bool enable, [MarshalAs(UnmanagedType.LPStr)] string receiverID);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVRoomManager_EnableAudioPlayDevice(bool enable, [MarshalAs(UnmanagedType.LPStr)] string receiverID);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVRoomManager_EnableAudioSend(bool enable, [MarshalAs(UnmanagedType.LPStr)] string receiverID);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVRoomManager_EnableAudioRecv(bool enable, [MarshalAs(UnmanagedType.LPStr)] string receiverID);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVRoomManager_ForbidUserOperation(bool enable, [MarshalAs(UnmanagedType.LPStr)] string receiverID);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVRoomManager_GetMicState([MarshalAs(UnmanagedType.LPStr)] string receiverID);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int QAVSDK_AVRoomManager_GetSpeakerState([MarshalAs(UnmanagedType.LPStr)] string receiverID);
        #endregion
    }

    public class QAVSDKInit
    {
        public static void InitSDK()
        {
            if (inited == false)
            {
#if UNITY_ANDROID && !UNITY_EDITOR
                AndroidJavaClass jc = new AndroidJavaClass("com.unity3d.player.UnityPlayer");

                AndroidJavaObject curActivity = jc.GetStatic<AndroidJavaObject>("currentActivity");
                AndroidJavaObject javaObj = new AndroidJavaObject("com.tencent.av.wrapper.OpensdkGameWrapper", curActivity);
                int isSuc = javaObj.Call<int>("initOpensdk");
                Debug.Log("initOpensdk Complete." + isSuc);
#endif
                inited = true;
            }
            return;
        }

        private static Boolean inited = false;
    }
}

/*
 * Platform Defines
The platform defines that Unity supports for your scripts are:
Property: Function: 
UNITY_EDITOR Define for calling Unity Editor scripts from your game code. 
UNITY_EDITOR_WIN Platform define for editor code on Windows. 
UNITY_EDITOR_OSX Platform define for editor code on Mac OSX. 
UNITY_STANDALONE_OSX Platform define for compiling/executing code specifically for Mac OS (This includes Universal, PPC and Intel architectures). 
UNITY_DASHBOARD_WIDGET Platform define when creating code for Mac OS dashboard widgets. 
UNITY_STANDALONE_WIN Use this when you want to compile/execute code for Windows stand alone applications. 
UNITY_STANDALONE_LINUX Use this when you want to compile/execute code for Linux stand alone applications. 
UNITY_STANDALONE Use this to compile/execute code for any standalone platform (Mac, Windows or Linux). 
UNITY_WEBPLAYER Platform define for web player content (this includes Windows and Mac Web player executables). 
UNITY_WII Platform define for compiling/executing code for the Wii console. 
UNITY_IPHONE Platform define for compiling/executing code for the iPhone platform. 
UNITY_ANDROID Platform define for the Android platform. 
UNITY_PS3 Platform define for running PlayStation 3 code. 
UNITY_XBOX360 Platform define for executing Xbox 360 code. 
UNITY_FLASH Platform define when compiling code for Adobe Flash. 
UNITY_BLACKBERRY Platform define for a Blackberry10 device. 
UNITY_WP8 Platform define for Windows Phone 8. 
UNITY_METRO Platform define for Windows Store Apps (additionally NETFX_CORE is defined when compiling C# files against .NET Core). 
UNITY_WINRT Equivalent to UNITY_WP8 |UNITY_METRO 
Also you can compile code selectively depending on the version of the engine you are working on. Currently the supported ones are:

UNITY_2_6 Platform define for the major version of Unity 2.6. 
UNITY_2_6_1 Platform define for specific version 2.6.1. 
UNITY_3_0 Platform define for the major version of Unity 3.0. 
UNITY_3_0_0 Platform define for specific version 3.0.0. 
UNITY_3_1 Platform define for major version of Unity 3.1. 
UNITY_3_2 Platform define for major version of Unity 3.2. 
UNITY_3_3 Platform define for major version of Unity 3.3. 
UNITY_3_4 Platform define for major version of Unity 3.4. 
UNITY_3_5 Platform define for major version of Unity 3.5. 
UNITY_4_0 Platform define for major version of Unity 4.0. 
UNITY_4_0_1 Platform define for specific version 4.0.1. 
UNITY_4_1 Platform define for major version of Unity 4.1. 
UNITY_4_2 Platform define for major version of Unity 4.2. 
UNITY_4_3 Platform define for major version of Unity 4.3. 
UNITY_4_5 Platform define for major version of Unity 4.5. 
Note: For versions before 2.6.0 there are no platform defines as this feature was first introduced in that version.
*/
