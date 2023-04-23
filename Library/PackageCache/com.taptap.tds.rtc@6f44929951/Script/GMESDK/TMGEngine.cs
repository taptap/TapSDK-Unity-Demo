using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using AOT;
using System.Text;

namespace TencentMobileGaming
{
    #region Interface
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    public delegate void QAVCallback(int result, string error_info);

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    public delegate void QAVEnterRoomComplete(int result, string error_info);

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    public delegate void QAVRoomChangeQualityCallback(int nQualityEVA,float fLostRate,int nDealy);

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    public delegate void QAVAudioReadyCallback();

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    public delegate void QAVExitRoomComplete();
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    public delegate void QAVRoomDisconnect(int result, string error_info);
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    public delegate void QAVEndpointsUpdateInfo(int eventID, int count, [MarshalAs(UnmanagedType.LPArray, SizeParamIndex = 1)]string[] openIdList);

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    public delegate void QAVOnRoomTypeChangedEvent(int roomtype);

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    public delegate void QAVCommonEventCallback(int type, int param0, int param1);

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	public delegate void QAVOnEventCallBack(int type, int subType, string data);

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    public delegate void QAVOnDeviceStateChangedEvent(int deviceType, string deviceId, bool openOrClose);

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    public delegate void QAVAudioCallback(bool enabled, int result, string error_info);
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    public delegate void QAVAudioRouteChangeCallback(int code);

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    public delegate void QAVAudioIOSMuteSwitchResultCallback(bool muteSwitchIsOn);

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    public delegate void QAVAccompanyFileCompleteHandler(int code, bool isfinished, string filepath);
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    public delegate void QAVRecordFileCompleteCallback(int code, string filepath);
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    public delegate void QAVUploadFileCompleteCallback(int code, string filepath, string fileid);
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    public delegate void QAVDownloadFileCompleteCallback(int code, string filepath, string fileid);
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    public delegate void QAVPlayFileCompleteCallback(int code, string filepath);
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    public delegate void QAVSpeechToTextCallback(int code, string fileid, string result);

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    public delegate void QAVStreamingRecognitionCallback(int code, string fileid, string filepath, string result);	

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    public delegate void QAVStreamingRecognitionNativeCallback(int code, string fileid, string filepath, string result,bool isComplete);

	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    public delegate void QAVAudioRecordMixCallback(int code, string dstFile, string micFile, int duration);
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    public delegate void QAVAudioRecordPreviewCallback(int code);
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    public delegate void QAVAudioRecordCallback(int code, string dstFile, int duration);

    #endregion

    public class QAVContext : ITMGContext
    {
        //如果编译器提示找不到GMESDK_VERSION_xxx,说明升级sdk的时候没有升级所有文件，请全量升级
        public static string ENGINE_VERSION = QAVError.GMESDK_VERSION_e089f0465e71aeea0cdfd24253f6e1e6c625fdd2;
        #region Interface
        public static new QAVContext GetInstance()
        {
            if (sInstance == null)
            {
                sInstance = new QAVContext();
                QAVNative.QAVSDK_Poll();
            }
            return sInstance;
        }

        ~QAVContext()
        {
            Debug.LogFormat("~QAVContext");

            QAVNative.QAVSDK_AVContext_Destroy();
        }

        public override int Poll()
        {
            return QAVNative.QAVSDK_Poll();
        }

        public override int Pause()
        {
            return QAVNative.QAVSDK_AVContext_Pause();
        }

        public override int Resume()
        {
            return QAVNative.QAVSDK_AVContext_Resume();
        }

        public override int Init(string sdkAppID, string openID)
        {
            QAVNative.QAVSDK_AVContext_SetDelegate(QAVContext.s_OnEnterRoomComplete, QAVContext.s_OnExitRoomComplete, QAVContext.s_OnRoomDisconnect, QAVContext.s_OnEndpointsUpdateInfo,
                QAVContext.s_QAVOnRoomTypeChangedEvent, QAVContext.s_OnDeviceStateChangedEvent, QAVContext.s_OnAudioReady, QAVContext.s_AVRoomChangeQualityCallback, QAVContext.s_QAVCommonEventCallback, QAVContext.s_QAVOnEventCallBack);
            
            if (QAVNative.QAVSDK_AVContext_IsContextStarted()
                && string.Equals(mSdkAppID, sdkAppID) && string.Equals(mOpenID, openID))
            {
                return QAVError.OK;
            }

            int ret = QAVNative.QAVSDK_AVContext_Stop();
            if (ret == QAVError.OK || ret == QAVError.ERR_HAS_IN_THE_STATE)
            {
                mSdkAppID = sdkAppID;
                mOpenID = openID;
                ret = QAVNative.QAVSDK_AVContext_Start(ENGINE_VERSION, mSdkAppID, mOpenID);
                QAVNative.QAVSDK_AVAudioCtrl_SetAudioRouteChangeCallback(QAVAudioCtrl.s_OnAudioRouteChangeComplete);
                QAVPTT.GetInstance().SetAppInfo(sdkAppID, openID);
                return ret;
            }
            else
            {
                return ret;
            }
        }

        public override int Uninit()
        {
            mSdkAppID = "";
            mOpenID = "";
            QAVNative.QAVSDK_AVAudioCtrl_SetAudioRouteChangeCallback(null);
            return QAVNative.QAVSDK_AVContext_Stop();
        }

        public override string GetSDKVersion()
        {
            return Marshal.PtrToStringAnsi(QAVNative.QAVSDK_GetSDKVersion());
        }

        public override void SetAppVersion(string sAppVersion)
        {
            QAVNative.QAVSDK_SetAppVersion(sAppVersion);
        }

        public override void SetRegion(string region)
        {
            QAVNative.QAVSDK_AVContext_SetRegion(region);
        }

        public override int SetLogLevel(int levelWrite, int levelPrint)
        {
            return QAVNative.QAVSDK_AVContext_SetLogLevel(levelWrite, levelPrint);
        }

        public override int SetLogPath(string logDir)
        {
            return QAVNative.QAVSDK_AVContext_SetLogPath(logDir);
        }

        public override int SetRecvMixStreamCount(int nCount)
        {
            return QAVNative.QAVSDK_AVContext_SetRecvMixStreamCount(nCount);
        }

        public override int SetRangeAudioMode(ITMGRangeAudioMode gameAudioMode)
        {
            return QAVNative.QAVSDK_AVContext_SetRangeAudioMode((int)gameAudioMode);
        }

        public override int SetRangeAudioTeamID(int teamID)
        {
            return QAVNative.QAVSDK_AVContext_SetRangeAudioTeamID(teamID);
        }


        public override bool IsRoomEntered()
        {
            return QAVNative.QAVSDK_AVContext_IsRoomEntered();
        }

        public override ITMG_CHECK_MIC_STATUS CheckMic()
        {
            int retCode = QAVNative.QAVSDK_AVContext_CheckMic();
            if(retCode < 0 || retCode > 5)
            {
              retCode = 1;  
            }
            return (ITMG_CHECK_MIC_STATUS)retCode;
        }

		public override ITMG_RECORD_PERMISSION CheckMicPermission()
        {
            int retCode = QAVNative.QAVSDK_AVContext_CheckMicPermission();
            if(retCode<0||retCode>3)
            {
                retCode = 3;
            }
            return (ITMG_RECORD_PERMISSION)retCode;
        }

        public override int EnterRoom(string roomID, ITMGRoomType roomtype, byte[] authBuffer)
        {
            return QAVNative.QAVSDK_AVContext_EnterRoom(roomID, authBuffer, authBuffer.Length, (int)roomtype);
        }


        public override int ExitRoom()
        {
            return QAVNative.QAVSDK_AVContext_ExitRoom();
        }

        public override ITMGRoom GetRoom()
        {
            return this.GetRoomInner();
        }

        public override ITMGRoomManager GetRoomManager() {
            return this.GetRoomManagerInner();
        }
        public override string GetAdvanceParams(string KeyCode)
        {

            return Marshal.PtrToStringAnsi(QAVNative.QAVSDK_AVContext_GetAdvanceParams(KeyCode));
        }

        public override int StartRealTimeASR(){
            return QAVNative.QAVSDK_AVContext_StartRealTimeASR("cmn-Hans-CN");
        }

        public override int StartRealTimeASR(string language) {
            return QAVNative.QAVSDK_AVContext_StartRealTimeASR(language);
        }


        public override int StopRealTimeASR(){
            return QAVNative.QAVSDK_AVContext_StopRealTimeASR();
        }

        public override int SetAdvanceParams(string KeyCode, string value)
        {
            return QAVNative.QAVSDK_AVContext_SetAdvanceParams(KeyCode, value);
        }

        public QAVRoom GetRoomInner()
        {
            if (null == mAVRoom)
            {
                mAVRoom = new QAVRoom();
            }
            return mAVRoom;
        }

        public ITMGRoomManager GetRoomManagerInner()
        {
            if (null == mAVRoomManager)
            {
                mAVRoomManager = new QAVRoomManager();
            }
            return mAVRoomManager;
        }

        public override ITMGAudioCtrl GetAudioCtrl()
        {
            return this.GetAudioCtrlInner();
        }
        public QAVAudioCtrl GetAudioCtrlInner()
        {
            if (null == mAVAudioCtrl)
            {
                mAVAudioCtrl = new QAVAudioCtrl();
            }
            return mAVAudioCtrl;
        }

        public override ITMGAudioEffectCtrl GetAudioEffectCtrl()
        {
            return this.GetAudioEffectCtrlInner();
        }

        public QAVAudioEffectCtrl GetAudioEffectCtrlInner()
        {
            if (null == mAVAudioEffectCtrl)
            {
                mAVAudioEffectCtrl = new QAVAudioEffectCtrl();
            }
            return mAVAudioEffectCtrl;
        }

        public override ITMGPTT GetPttCtrl()
        {
            return QAVPTT.GetInstance();
        }

        public override event QAVEnterRoomComplete OnEnterRoomCompleteEvent;
        public override event QAVExitRoomComplete OnExitRoomCompleteEvent;
        public override event QAVRoomDisconnect OnRoomDisconnectEvent;
        public override event QAVEndpointsUpdateInfo OnEndpointsUpdateInfoEvent;        // 成员状态变化，EventID详见EVENT_ID_ENDPOINT_XXX
        public override event QAVOnRoomTypeChangedEvent OnRoomTypeChangedEvent;
        public override event QAVAudioReadyCallback OnAudioReadyEvent;
        public override event QAVRoomChangeQualityCallback OnRoomChangeQualityEvent;
        public override event QAVCommonEventCallback OnCommonEventCallback;
		public override event QAVOnEventCallBack onEventCallBack;
        #endregion

        #region Implement
        [MonoPInvokeCallback(typeof(QAVAudioReadyCallback))]
        private static void s_OnAudioReady()
        {
            if (QAVContext.GetInstance().OnAudioReadyEvent != null)
            {
                QAVContext.GetInstance().OnAudioReadyEvent();
            }
        }


        [MonoPInvokeCallback(typeof(QAVRoomChangeQualityCallback))]
        private static void s_AVRoomChangeQualityCallback(int nQualityEVA,float fLostRate,int nDealy)
        {
           // Debug.LogFormat("s_AVRoomChangeQualityCallback:nQualityEVA:{0},fLostRate:{1},nDealy{2} {3}", nQualityEVA, fLostRate,nDealy,QAVContext.GetInstance().OnRoomChangeQualityEvent);
            if (QAVContext.GetInstance().OnRoomChangeQualityEvent != null)
            {
                QAVContext.GetInstance().OnRoomChangeQualityEvent(nQualityEVA, fLostRate, nDealy);
            }
        }


        [MonoPInvokeCallback(typeof(QAVEnterRoomComplete))]
        private static void s_OnEnterRoomComplete(int result, string error_info)
        {
            Debug.LogFormat("s_OnEnterRoomComplete:code:{0},Msg:{1},{2}", result, error_info, QAVContext.GetInstance().OnEnterRoomCompleteEvent);
            if (QAVContext.GetInstance().OnEnterRoomCompleteEvent != null)
            {
                QAVContext.GetInstance().OnEnterRoomCompleteEvent(result, error_info);
            }
        }

        [MonoPInvokeCallback(typeof(QAVExitRoomComplete))]
        private static void s_OnExitRoomComplete()
        {
            Debug.LogFormat("s_OnExitRoomComplete");
            if (QAVContext.GetInstance().OnExitRoomCompleteEvent != null)
            {
                QAVContext.GetInstance().OnExitRoomCompleteEvent();
            }
        }

        [MonoPInvokeCallback(typeof(QAVRoomDisconnect))]
        private static void s_OnRoomDisconnect(int result, string error_info)
        {
            Debug.LogFormat("s_OnRoomDisconnect");
            if (QAVContext.GetInstance().OnRoomDisconnectEvent != null)
            {
                QAVContext.GetInstance().OnRoomDisconnectEvent(result, error_info);
            }
        }

        [MonoPInvokeCallback(typeof(QAVEndpointsUpdateInfo))]
        private static void s_OnEndpointsUpdateInfo(int eventID, int count, string[] openIdList)
        {
            if (QAVContext.GetInstance().OnEndpointsUpdateInfoEvent != null)
            {
                QAVContext.GetInstance().OnEndpointsUpdateInfoEvent(eventID, count, openIdList);
            }
        }

        [MonoPInvokeCallback(typeof(QAVOnDeviceStateChangedEvent))]
        private static void s_OnDeviceStateChangedEvent(int deviceType, string deviceId, bool openOrClose)
        {
            
        }

        [MonoPInvokeCallback(typeof(QAVOnRoomTypeChangedEvent))]
        private static void s_QAVOnRoomTypeChangedEvent(int roomtype)
        {
            Debug.LogFormat("s_QAVOnRoomTypeChangedEvent:coderoomtype{0}", roomtype);
            if (QAVContext.GetInstance().OnRoomTypeChangedEvent != null)
            {
                QAVContext.GetInstance().OnRoomTypeChangedEvent(roomtype);
            }
        }




		[MonoPInvokeCallback(typeof(QAVOnEventCallBack))]
		private static void s_QAVOnEventCallBack(int type, int subType, string data)
		{
			Debug.LogFormat("s_QAVOnEventCallBack:type={0},subTtpe={1} info:{2}", type,subType,data);
			if (QAVContext.GetInstance().onEventCallBack != null)
			{
                QAVContext.GetInstance().onEventCallBack(type, subType, data);
			}
		}



        [MonoPInvokeCallback(typeof(QAVCommonEventCallback))]
        private static void s_QAVCommonEventCallback(int type, int param0, int param1)
        {
            Debug.LogFormat("s_QAVCommonEventCallback:type={0}", type);
            if (QAVContext.GetInstance().OnCommonEventCallback != null)
            {
                QAVContext.GetInstance().OnCommonEventCallback(type, param0, param1);
            }
        }

        private QAVRoom mAVRoom;
        private QAVAudioCtrl mAVAudioCtrl;
        private QAVAudioEffectCtrl mAVAudioEffectCtrl;
        private QAVRoomManager mAVRoomManager;

        #endregion

        #region Constructor

        private QAVContext()
        {
        }

        private static QAVContext sInstance;
        private static readonly System.Object sLock = new System.Object();
        private string mSdkAppID = "";
        public string mOpenID = "";

        #endregion
    }

    public class QAVRoom : ITMGRoom
    {
        #region Interface

        public override string GetQualityTips()
        {
            return Marshal.PtrToStringAnsi(QAVNative.QAVSDK_AVRoom_GetQualityTips());
        }

        [MonoPInvokeCallback(typeof(QAVCallback))]
        private static void s_ChangeRoomtypeCallback(int result, string error_info)
        {
            Debug.Log("s_ChangeRoomtypeCallback, result=" + result + "err:" + error_info);
            if (QAVContext.GetInstance().GetRoomInner().OnChangeRoomtypeCallback != null)
            {
                QAVContext.GetInstance().GetRoomInner().OnChangeRoomtypeCallback(result, error_info);
            }
        }

        public override event QAVCallback OnChangeRoomtypeCallback;

        public override int ChangeRoomType(ITMGRoomType roomType)
        {

            return QAVNative.QAVSDK_AVRoom_ChangeRoomType((int)roomType, QAVRoom.s_ChangeRoomtypeCallback);
        }

        public override string GetRoomID()
        {
            return Marshal.PtrToStringAnsi(QAVNative.QAVSDK_AVRoom_GetRoomID());
        }

        public override int GetRoomType()
        {
            int roomtype = QAVNative.QAVSDK_AVRoom_GetRoomType();
            if (roomtype > 0 && roomtype < 4)
            {
                return roomtype;
            }
            else
            {
                return 0;
            }
        }


        public override int UpdateAudioRecvRange(int range)
        {
            return QAVNative.QAVSDK_AVRoom_UpdateAudioRecvRange(range);
        }

        public override int UpdateSelfPosition(int[] position, float[] axisForward, float[] axisRight, float[] axisUp)
        {
            return QAVNative.QAVSDK_AVRoom_UpdateSelfPosition(position, axisForward, axisRight, axisUp, 3);
        }

        public override int StartRoomSharing(string targetRoomID, string targetOpenID, byte[] authBuffer)
        {
            return QAVNative.QAVSDK_AVRoom_StartRoomSharing(targetRoomID, targetOpenID, authBuffer, 0);
        }

        public override int StopRoomSharing()
        {
            return QAVNative.QAVSDK_AVRoom_StopRoomSharing();
        }

        public override int SwitchRoom(string roomID, byte[] authBuffer)
        {
            return QAVNative.QAVSDK_AVRoom_SwitchRoom(roomID, authBuffer, authBuffer.Length);
        }

        public override int SendCustomData(byte[] customdata,int repeatCout) {
             return QAVNative.QAVSDK_AVRoom_SendCustomData(customdata,customdata.Length,repeatCout);
        }

        public override int StopSendCustomData() {
             return QAVNative.QAVSDK_AVRoom_StopSendCustomData();
        }


        public override int SetServerAudioRouteSendOperateType(ITMG_SERVER_AUDIO_ROUTE_SEND_TYPE Sendtype, string[] OpenIDforSend, ITMG_SERVER_AUDIO_ROUTE_RECV_TYPE Recvtype, string[] OpenIDforRecv)
        {
            int OpenIDforSendSize = 0;
            int OpenIDforRecvSize = 0;
            if (OpenIDforSend != null) {
                OpenIDforSendSize = OpenIDforSend.Length;
            }
            if (OpenIDforRecv != null) {
                OpenIDforRecvSize = OpenIDforRecv.Length;
            }

            return QAVNative.QAVSDK_AVRoom_SetServerAudioRoute(Sendtype, OpenIDforSend, OpenIDforSendSize, Recvtype, OpenIDforRecv, OpenIDforRecvSize);
        }

        public override ITMG_SERVER_AUDIO_ROUTE_SEND_TYPE GetCurrentSendAudioRoute(List<string> OpenIDforSend)
        {
            OpenIDforSend.Clear();
            StringBuilder strBuilder = new StringBuilder(2048);
            ITMG_SERVER_AUDIO_ROUTE_SEND_TYPE sendType =  QAVNative.QAVSDK_AVRoom_GetCurrentSendAudioRoute(strBuilder, 2048);
            if (strBuilder != null) {
                string[] sendArray = strBuilder.ToString().Split(',');
                for (int i = 0; i < sendArray.Length; i++)
                {
                    OpenIDforSend.Add(sendArray[i]);
                }
            }
            return sendType;
        }

        public override ITMG_SERVER_AUDIO_ROUTE_RECV_TYPE GetCurrentRecvAudioRoute(List<string> OpenIDforRecve)
        {
            OpenIDforRecve.Clear();
            StringBuilder strBuilder = new StringBuilder(2048);
            ITMG_SERVER_AUDIO_ROUTE_RECV_TYPE recvType = QAVNative.QAVSDK_AVRoom_GetCurrentRecvAudioRoute(strBuilder, 2048);
            if (strBuilder != null)
            {
                string[] sendArray = strBuilder.ToString().Split(',');
                for (int i = 0; i < sendArray.Length; i++)
                {
                    OpenIDforRecve.Add(sendArray[i]);
                }
            }
            return recvType;
        }

        #endregion

        #region Constructor
        public QAVRoom()
        {

        }

        #endregion
    }

    public class QAVAudioCtrl : ITMGAudioCtrl
    {
        public override int EnableAudioCaptureDevice(bool enabled)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_EnableAudioCaptureDevice(enabled);
        }
        public override int EnableAudioPlayDevice(bool enabled)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_EnableAudioPlayDevice(enabled);
        }
        public override bool IsAudioCaptureDeviceEnabled()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_IsAudioCaptureDeviceEnabled() != 0;
        }
        public override bool IsAudioPlayDeviceEnabled()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_IsAudioPlayDeviceEnabled() != 0;
        }
        public override int EnableAudioSend(bool isEnabled)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_EnableAudioSend(isEnabled);
        }
        public override int EnableAudioRecv(bool isEnabled)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_EnableAudioRecv(isEnabled);
        }
        public override bool IsAudioSendEnabled()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_IsAudioSendEnabled() != 0;
        }
        public override bool IsAudioRecvEnabled()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_IsAudioRecvEnabled() != 0;
        }

        public override int CheckDeviceMuteState() 
        {
            return QAVNative.QAVSDK_AVAudioCtrl_CheckDeviceMuteState(s_OnIOSMuteSwitchResult);
        }
        public override int EnableMic(bool isEnabled)
        {
            int ret1 = EnableAudioCaptureDevice(isEnabled);
            int ret2 = EnableAudioSend(isEnabled);
            if (ret1 == QAVError.OK && ret2 == QAVError.OK)
            {
                return QAVError.OK;
            }
            else
            {
                if (ret1 != QAVError.OK)
                {
                    return ret1;
                }
                else
                {
                    return ret2;
                }
            }
        }

        public override int GetMicState()
        {
            return (IsAudioCaptureDeviceEnabled() && IsAudioSendEnabled()) ? 1 : 0;
        }

        public override int EnableSpeaker(bool isEnabled)
        {
            int ret1 = EnableAudioPlayDevice(isEnabled);
            int ret2 = EnableAudioRecv(isEnabled);
            if (ret1 == QAVError.OK && ret2 == QAVError.OK)
            {
                return QAVError.OK;
            }
            else
            {
                if (ret1 != QAVError.OK)
                {
                    return ret1;
                }
                else
                {
                    return ret2;
                }
            }
        }

        public override int GetSpeakerState()
        {
            return (IsAudioPlayDeviceEnabled() && IsAudioRecvEnabled()) ? 1 : 0;
        }

        public override int GetMicLevel()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_GetMicLevel();
        }
        public override int SetMicVolume(int volume)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_SetMicVolume(volume);
        }
        public override int GetMicVolume()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_GetMicVolume();
        }
        public override int GetSpeakerLevel()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_GetSpeakerLevel();
        }
        public override int SetSpeakerVolume(int volume)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_SetSpeakerVolume(volume);
        }
        public override int GetSpeakerVolume()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_GetSpeakerVolume();
        }

        public override int SetSpeakerVolumeByOpenID(string openid, int volume)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_SetSpeakerVolumeByOpenID(openid, volume);
        }

        public override int GetSpeakerVolumeByOpenID(string openid)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_GetSpeakerVolumeByOpenID(openid);
        }

        public override int GetVolumeById(string openid)
		{
            return QAVNative.QAVSDK_AVAudioCtrl_GetVolumeByUin(openid);
		}

        public override int EnableLoopBack(bool enable)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_EnableLoopBack(enable);
        }

        public override event QAVAudioRouteChangeCallback OnAudioRouteChangeComplete;

        [MonoPInvokeCallback(typeof(QAVAudioRouteChangeCallback))]
        public static void s_OnAudioRouteChangeComplete(int code)
        {
            if (QAVContext.GetInstance().GetAudioCtrlInner().OnAudioRouteChangeComplete != null)
            {
                QAVContext.GetInstance().GetAudioCtrlInner().OnAudioRouteChangeComplete(code);
            }
        }

        public override event QAVAudioIOSMuteSwitchResultCallback OnIOSMuteSwitchResult;

        [MonoPInvokeCallback(typeof(QAVAudioIOSMuteSwitchResultCallback))]
        public static void s_OnIOSMuteSwitchResult(bool muteSwitchIsOn)
        {
            if (QAVContext.GetInstance().GetAudioCtrlInner().OnIOSMuteSwitchResult != null)
            {
                QAVContext.GetInstance().GetAudioCtrlInner().OnIOSMuteSwitchResult(muteSwitchIsOn);
            }
        }		

        public override int AddAudioBlackList(string openId)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_AddAudioBlackList(openId);
        }

        public override int RemoveAudioBlackList(string openId)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_RemoveAudioBlackList(openId);
        }

        public override int GetSendStreamLevel()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_GetSendStreamLevel();
        }

        public override int GetRecvStreamLevel(string openId)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_GetRecvStreamLevel(openId);
        }

        public override int InitSpatializer(string modelPath)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_InitSpatializer(modelPath);
        }

        public override int EnableSpatializer(bool enable, bool applyTeam)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_EnableSpatializer(enable, applyTeam);
        }

        public override bool IsEnableSpatializer()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_IsEnableSpatializer();
        }

        public override int SetAudioMixCount(int nCount)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_SetAudioMixCount(nCount);
        }

        public override int AddSameTeamSpatializer(string openId)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_AddSameTeamSpatializer(openId);
        }

        public override int RemoveSameTeamSpatializer(string openId)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_RemoveSameTeamSpatializer(openId);
        }

        public override int EnableAudioDispatcher(bool enable)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_EnableAudioDispatcher(enable);
        }

        public QAVAudioCtrl()
        {
        }
        ~QAVAudioCtrl()
        {
        }
    }

    public class QAVAudioEffectCtrl : ITMGAudioEffectCtrl
    {
        #region Interface
        [MonoPInvokeCallback(typeof(QAVAccompanyFileCompleteHandler))]
        private static void s_OnAccompanyComplete(int code, bool isfinished, string filepath)
        {
            if (QAVContext.GetInstance().GetAudioEffectCtrlInner().OnAccompanyFileCompleteHandler != null)
            {
                QAVContext.GetInstance().GetAudioEffectCtrlInner().OnAccompanyFileCompleteHandler(code, isfinished, filepath);
            }
        }

        public override event QAVAccompanyFileCompleteHandler OnAccompanyFileCompleteHandler;

        public override int StartAccompany(string filePath, bool loopBack, int loopCount, int duckerTimeMs)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_StartAccompany(filePath, loopBack, loopCount, duckerTimeMs, 0,s_OnAccompanyComplete);
        }

        public override int StartAccompanyDownloading(string filePath, bool loopBack, int loopCount, int duckerTimeMs, int fileSize)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_StartAccompany(filePath, loopBack, loopCount, duckerTimeMs, fileSize, s_OnAccompanyComplete);
        }

        public override int StopAccompany(int duckerTimeMs)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_StopAccompany(duckerTimeMs);
        }

        public override bool IsAccompanyPlayEnd()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_IsAccompanyPlayEnd();
        }

        public override int PauseAccompany()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_PauseAccompany();
        }

        public override int ResumeAccompany()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_ResumeAccompany();
        }

        public override int EnableAccompanyPlay(bool enable)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_EnableAccompanyPlay(enable);
        }

        public override int EnableAccompanyLoopBack(bool enable)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_EnableAccompanyLoopBack(enable);
        }

        public override int SetAccompanyKey(int nKey)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_SetAccompanyKey(nKey);
        }

        public override int SetAccompanyVolume(int vol)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_SetAccompanyVolume(vol);
        }

        public override int GetAccompanyVolume()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_GetAccompanyVolume();
        }

        public override uint GetAccompanyFileTotalTimeByMs()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_GetAccompanyFileTotalTimeByMs();
        }

        public override uint GetAccompanyFileCurrentPlayedTimeByMs()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_GetAccompanyFileCurrentPlayedTimeByMs();
        }

        public override uint GetAccompanyFileTotalTimeByMs(string openId)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_GetAccompanyFileTotalTimeMsById(openId);
        }

        public override uint GetAccompanyFileCurrentPlayedTimeByMs(string openId)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_GetAccompanyFileCurrentPlayedTimeMsById(openId);
        }

        public override int SetAccompanyFileCurrentPlayedTimeByMs(uint timeMs)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_SetAccompanyFileCurrentPlayedTimeByMs(timeMs);
        }

        public override int GetEffectsVolume()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_GetEffectsVolume();
        }

        public override int SetEffectsVolume(int volume)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_SetEffectsVolume(volume);
        }

        public override int GetEffectVolume(int soundId)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_GetEffectVolume(soundId);
        }

        public override int SetEffectVolume(int soundId, int volume)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_SetEffectVolume(soundId, volume);
        }


        public override int PlayEffect(int soundId, string filePath, bool loop = false, double pitch = 1.0f, double pan = 0.0f, int volume = 100)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_PlayEffect(soundId, filePath, loop, pitch, pan, volume);
        }

        public override int PauseEffect(int soundId)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_PauseEffect(soundId);
        }

        public override int PauseAllEffects()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_PauseAllEffects();
        }

        public override int ResumeEffect(int soundId)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_ResumeEffect(soundId);
        }

        public override int ResumeAllEffects()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_ResumeAllEffects();
        }

        public override int StopEffect(int soundId)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_StopEffect(soundId);
        }

        public override int StopAllEffects()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_StopAllEffects();
        }

        public override int StartRecord(string filePath, int sampleRate, int channels, bool recordLocalMic, bool recordRemote, bool recordAccompany)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_StartRecord(filePath, sampleRate, channels, recordLocalMic, recordRemote, recordAccompany);
        }

        public override int StopRecord()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_StopRecord();
        }

        public override int PauseRecord()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_PauseRecord();
        }

        public override int ResumeRecord()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_ResumeRecord();
        }

        public override int EnableRecordLocalMic(bool recordLocalMic)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_EnableRecordLocalMic(recordLocalMic);
        }

         public override int EnableRecordAccompany(bool recordAccompany)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_EnableRecordAccompany(recordAccompany);
        }

         public override int EnableRecordRemote(bool recordRemote)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_EnableRecordRemote(recordRemote);
        }

        public override int SetVoiceType(int voiceType)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_SetVoiceType(voiceType);
        }

        public override int SetKaraokeType(int type)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_SetKaraokeType(type);
        }


        #endregion

        #region Constructor

        public QAVAudioEffectCtrl()
        {
        }

        #endregion
    }
    public class QAVPTT : ITMGPTT
    {
        #region Interface
        public static new QAVPTT GetInstance()
        {
            if (sInstance == null)
            {
                sInstance = new QAVPTT();
            }
            return sInstance;
        }

        public override event QAVRecordFileCompleteCallback OnRecordFileComplete;
        public override event QAVUploadFileCompleteCallback OnUploadFileComplete;
        public override event QAVDownloadFileCompleteCallback OnDownloadFileComplete;
        public override event QAVPlayFileCompleteCallback OnPlayFileComplete;
        public override event QAVSpeechToTextCallback OnSpeechToTextComplete;
        public override event QAVStreamingRecognitionCallback OnStreamingSpeechComplete;
    	public override event QAVStreamingRecognitionCallback OnStreamingSpeechisRunning;

        public override int ApplyPTTAuthbuffer(byte[] authBuffer)
        {
            return QAVNative.QAVSDK_PTT_ApplyPTTAuthbuffer(authBuffer, authBuffer.Length);
        }

        public override int SetMaxMessageLength(int msTime)
        {
            return QAVNative.QAVSDK_PTT_SetMaxMessageLength(msTime);
        }

        public override int StartRecording(string filePath)
        {
            return QAVNative.QAVSDK_PTT_StartRecording(filePath, s_OnRecordFileComplete);
        }

        public override int StopRecording()
        {
            return QAVNative.QAVSDK_PTT_StopRecording();
        }

        public override int CancelRecording()
        {
            return QAVNative.QAVSDK_PTT_CancelRecording();
        }

        public override int UploadRecordedFile(string filePath)
        {
            return QAVNative.QAVSDK_PTT_UploadRecordedFile(filePath, s_OnUploadFileComplete);
        }

        public override int DownloadRecordedFile(string fileID, string downloadFilePath)
        {
            return QAVNative.QAVSDK_PTT_DownloadRecordedFile(fileID, downloadFilePath, s_OnDownloadFileComplete);
        }

        public override int PlayRecordedFile(string filePath)
        {
            return QAVNative.QAVSDK_PTT_StartPlayFile(filePath, s_OnPlayFileComplete);
        }
    
         public override int PlayRecordedFile(string filePath, int voiceType)
         {
              return QAVNative.QAVSDK_PTT_StartPlayFileWithVoiceType(filePath, voiceType, s_OnPlayFileComplete);
         }


        public override int StopPlayFile()
        {
            return QAVNative.QAVSDK_PTT_StopPlayFile();
        }

        public override int GetMicLevel()
        {
            return QAVNative.QAVSDK_PTT_GetMicLevel();
        }

        public override int SetMicVolume(int volume)
        {
            return QAVNative.QAVSDK_PTT_SetMicVolume(volume);
        }

        public override int GetMicVolume()
        {
            return QAVNative.QAVSDK_PTT_GetMicVolume();
        }

        public override int GetSpeakerLevel()
        {
            return QAVNative.QAVSDK_PTT_GetSpeakerLevel();
        }

        public override int SetSpeakerVolume(int volume)
        {
            return QAVNative.QAVSDK_PTT_SetSpeakerVolume(volume);
        }

        public override int GetSpeakerVolume()
        {
            return QAVNative.QAVSDK_PTT_GetSpeakerVolume();
        }

        public override int GetFileSize(string filePath)
        {
            return QAVNative.QAVSDK_PTT_GetFileSize(filePath);
        }

        public override int GetVoiceFileDuration(string filePath)
        {
            return QAVNative.QAVSDK_PTT_GetVoiceFileDuration(filePath);
        }

        public override int SpeechToText(string fileID)
        {
            return QAVNative.QAVSDK_PTT_SpeechToText(fileID, "cmn-Hans-CN", "cmn-Hans-CN", s_OnSpeechToTextComplete);
        }
        public override int SpeechToText(string fileID, string speechLanguage)
        {
            return QAVNative.QAVSDK_PTT_SpeechToText(fileID, speechLanguage, speechLanguage, s_OnSpeechToTextComplete);
        }

        public override int SpeechToText(string fileID, string speechLanguage, string translatelanguage)
        {
            return QAVNative.QAVSDK_PTT_SpeechToText(fileID, speechLanguage, translatelanguage, s_OnSpeechToTextComplete);
        }

        public override int StartRecordingWithStreamingRecognition(string filePath)
        {
            return QAVNative.QAVSDK_PTT_StartRecordingWithStreamingRecognition(filePath, "cmn-Hans-CN", "cmn-Hans-CN", s_OnStreamingRecognitionComplete); 
        }

        public override int StartRecordingWithStreamingRecognition(string filePath, string speechLanguage)
        {
            return QAVNative.QAVSDK_PTT_StartRecordingWithStreamingRecognition(filePath,speechLanguage,speechLanguage, s_OnStreamingRecognitionComplete);
        }

        public override int StartRecordingWithStreamingRecognition(string filePath, string speechLanguage, string translatelanguage)
        {

            return QAVNative.QAVSDK_PTT_StartRecordingWithStreamingRecognition(filePath, speechLanguage, translatelanguage, s_OnStreamingRecognitionComplete);
        }

        public override int PauseRecording()
        {
            return QAVNative.QAVSDK_PTT_PauseRecording();
        }

        public override int ResumeRecording()
        {
            return QAVNative.QAVSDK_PTT_ResumeRecording();
        }


        #endregion

        #region Implement
        public int SetAppInfo(string appID, string openID)
        {
            return QAVNative.QAVSDK_PTT_SetAppInfo(appID, openID);
        }


        [MonoPInvokeCallback(typeof(QAVRecordFileCompleteCallback))]
        private static void s_OnRecordFileComplete(int code, string filepath)
        {
            if (QAVPTT.GetInstance().OnRecordFileComplete != null)
            {
                QAVPTT.GetInstance().OnRecordFileComplete(code, filepath);
            }
        }

        [MonoPInvokeCallback(typeof(QAVUploadFileCompleteCallback))]
        private static void s_OnUploadFileComplete(int code, string filepath, string fileid)
        {
            if (QAVPTT.GetInstance().OnUploadFileComplete != null)
            {
                QAVPTT.GetInstance().OnUploadFileComplete(code, filepath, fileid);
            }
        }

        [MonoPInvokeCallback(typeof(QAVDownloadFileCompleteCallback))]
        private static void s_OnDownloadFileComplete(int code, string filepath, string fileid)
        {
            if (QAVPTT.GetInstance().OnDownloadFileComplete != null)
            {
                QAVPTT.GetInstance().OnDownloadFileComplete(code, filepath, fileid);
            }
        }

        [MonoPInvokeCallback(typeof(QAVPlayFileCompleteCallback))]
        private static void s_OnPlayFileComplete(int code, string filepath)
        {
            if (QAVPTT.GetInstance().OnPlayFileComplete != null)
            {
                QAVPTT.GetInstance().OnPlayFileComplete(code, filepath);
            }
        }
        [MonoPInvokeCallback(typeof(QAVSpeechToTextCallback))]
        private static void s_OnSpeechToTextComplete(int code, string fileid, string result)
        {
            if (QAVPTT.GetInstance().OnSpeechToTextComplete != null)
            {
                QAVPTT.GetInstance().OnSpeechToTextComplete(code, fileid, result);
            }
        }

        [MonoPInvokeCallback(typeof(QAVStreamingRecognitionNativeCallback))]
        private static void s_OnStreamingRecognitionComplete(int code, string filepath, string fileid, string result,bool isComplete)
        {
            if (QAVPTT.GetInstance().OnStreamingSpeechComplete != null && isComplete)
            {
                QAVPTT.GetInstance().OnStreamingSpeechComplete(code, fileid, filepath, result);
            } else if (QAVPTT.GetInstance().OnStreamingSpeechisRunning != null){
                QAVPTT.GetInstance().OnStreamingSpeechisRunning(code, fileid, filepath, result);
            }
        }

        #endregion

        #region Constructor

        public QAVPTT()
        {
        }

        private static QAVPTT sInstance;
        private static readonly System.Object sLock = new System.Object();
        #endregion
    }

    public class QAVRoomManager : ITMGRoomManager {

        #region Interface
        public override int EnableMic(bool enable, string receiverID)
        {
            return QAVNative.QAVSDK_AVRoomManager_EnableMic(enable, receiverID);
        }

        public override int EnableSpeaker(bool enable, string receiverID)
        {
            return QAVNative.QAVSDK_AVRoomManager_EnableSpeaker(enable, receiverID);
        }

        public override int EnableAudioCaptureDevice(bool enable, string receiverID)
        {
            return QAVNative.QAVSDK_AVRoomManager_EnableAudioCaptureDevice(enable, receiverID);
        }

        public override int EnableAudioPlayDevice(bool enable, string receiverID)
        {
            return QAVNative.QAVSDK_AVRoomManager_EnableAudioPlayDevice(enable, receiverID);
        }

        public override int EnableAudioSend(bool enable, string receiverID)
        {
            return QAVNative.QAVSDK_AVRoomManager_EnableAudioSend(enable, receiverID);
        }

        public override int EnableAudioRecv(bool enable, string receiverID)
        {
            return QAVNative.QAVSDK_AVRoomManager_EnableAudioRecv(enable, receiverID);
        }

        public override int ForbidUserOperation(bool enable, string receiverID)
        {
            return QAVNative.QAVSDK_AVRoomManager_ForbidUserOperation(enable, receiverID);
        }

        public override int GetMicState(string receiverID)
        {
            return QAVNative.QAVSDK_AVRoomManager_GetMicState(receiverID);
        }

        public override int GetSpeakerState(string receiverID)
        {
            return QAVNative.QAVSDK_AVRoomManager_GetSpeakerState(receiverID);
        }

      
        #endregion

        #region Constructor
        public QAVRoomManager()
        {

        }

        ~QAVRoomManager() {
        }
        

        public static new QAVRoomManager GetInstance()
        {
            if (sInstance == null)
            {
                sInstance = new QAVRoomManager();
            }
            return sInstance;
        }
        private static QAVRoomManager sInstance;
        private static readonly System.Object sLock = new System.Object();
        #endregion
    }
}
