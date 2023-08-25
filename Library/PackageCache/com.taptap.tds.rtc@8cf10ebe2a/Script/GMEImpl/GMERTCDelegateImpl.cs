using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using TencentMobileGaming;
using UnityEngine;

namespace TapTap.RTC.GMEImpl
{
    public class GMERTCDelegateImpl : ITapRTC
    {
        private TapRTCConfig config;

        private ITapRTCAudioDevice tapRtcAudioDevice;

        public Task<ResultCode> Init(TapRTCConfig config)
        {
            throw new NotImplementedException();
        }

        public ResultCode Init(TapRTCConfig config, ProviderResponse response)
        {
            this.config = config;

            var ret = ITMGContext.GetInstance().Init(response.ProviderId, response.OpenId);

            if (ret != QAVError.OK)
            {
                Debug.Log($"GME Init failure:{ret}");
                return ResultCodeConvert.Convert(ret);
            }

            ITMGContext.GetInstance().OnEnterRoomCompleteEvent += OnEnterRoomComplete;
            ITMGContext.GetInstance().OnExitRoomCompleteEvent += OnExitRoomComplete;
            ITMGContext.GetInstance().OnRoomDisconnectEvent += OnRoomDisconnect;
            ITMGContext.GetInstance().OnEndpointsUpdateInfoEvent += OnEndpointsUpdateInfo;
            ITMGContext.GetInstance().OnRoomTypeChangedEvent += OnRoomTypeChanged;
            ITMGContext.GetInstance().OnRoomChangeQualityEvent += OnRoomChangeQualityEvent;

            return ResultCode.OK;
        }

        public ResultCode UnInit()
        {
            ITMGContext.GetInstance().OnEnterRoomCompleteEvent -= OnEnterRoomComplete;
            ITMGContext.GetInstance().OnExitRoomCompleteEvent -= OnExitRoomComplete;
            ITMGContext.GetInstance().OnRoomDisconnectEvent -= OnRoomDisconnect;
            ITMGContext.GetInstance().OnEndpointsUpdateInfoEvent -= OnEndpointsUpdateInfo;
            ITMGContext.GetInstance().OnRoomTypeChangedEvent -= OnRoomTypeChanged;
            ITMGContext.GetInstance().OnRoomChangeQualityEvent -= OnRoomChangeQualityEvent;

            return ResultCodeConvert.Convert(ITMGContext.GetInstance().Uninit());
        }

        private static void OnRoomChangeQualityEvent(int weight, float loss, int delay)
        {
            var dic = new Dictionary<string, object>(3)
            {
                ["weight"] = weight,
                ["loss"] = loss,
                ["delay"] = delay
            };
            TapRTCEventDispatcher.GetInstance()
                .OnEvent(EventType.MAIN_EVENT_TYPE_CHANGE_ROOM_QUALITY, Json.Serialize(dic));
        }

        private static void OnRoomTypeChanged(int roomType)
        {
            var dic = new Dictionary<string, int>(1) {["roomType"] = roomType};
            TapRTCEventDispatcher.GetInstance()
                .OnEvent(EventType.MAIN_EVENT_TYPE_ROOM_TYPE_CHANGE, Json.Serialize(dic));
        }

        private static void OnEnterRoomComplete(int result, string errorInfo)
        {
            var dic = new Dictionary<string, object>
            {
                ["result"] = result,
                ["errorInfo"] = errorInfo
            };
            TapRTCEventDispatcher.GetInstance().OnEvent(EventType.MAIN_EVENT_TYPE_ENTER_ROOM, Json.Serialize(dic));
        }

        private static void OnExitRoomComplete()
        {
            TapRTCEventDispatcher.GetInstance().OnEvent(EventType.MAIN_EVENT_TYPE_EXIT_ROOM, null);
        }

        private static void OnRoomDisconnect(int result, string errorInfo)
        {
            var dic = new Dictionary<string, object>
            {
                ["result"] = result,
                ["errorInfo"] = errorInfo
            };
            TapRTCEventDispatcher.GetInstance().OnEvent(EventType.MAIN_EVENT_TYPE_DISCONNECT, Json.Serialize(dic));
        }

        private static void OnEndpointsUpdateInfo(int eventID, int count, string[] openIdList)
        {
            var dic = new Dictionary<string, object>
            {
                ["eventID"] = eventID,
                ["count"] = count,
                ["openIdList"] = openIdList
            };
            TapRTCEventDispatcher.GetInstance()
                .OnEvent(EventType.MAIN_EVENT_TYPE_USER_UPDATE, Json.Serialize(dic));
        }

        public ITapRTCAudioDevice GetAudioDevice()
        {
            return tapRtcAudioDevice ?? (tapRtcAudioDevice = new GMERTCAudioDeviceImpl(ITMGContext.GetInstance()));
        }

        public ITapRTCRoomDelegate AcquireRoom(string roomId, bool range)
        {
            ITapRTCRoomDelegate roomDelegate = new GMERTCRoomDelegateImpl(config, roomId, range);
            TapRTCEventDispatcher.GetInstance().Add(roomId, roomDelegate);
            return roomDelegate;
        }

        public ResultCode Poll()
        {
            return ResultCodeConvert.Convert(ITMGContext.GetInstance().Poll());
        }

        public ResultCode Resume()
        {
            return ResultCodeConvert.Convert(ITMGContext.GetInstance().Resume());
        }

        public ResultCode Pause()
        {
            return ResultCodeConvert.Convert(ITMGContext.GetInstance().Pause());
        }
    }
}