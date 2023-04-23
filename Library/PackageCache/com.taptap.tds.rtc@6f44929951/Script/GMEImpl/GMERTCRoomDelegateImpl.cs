using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Threading.Tasks;
using TencentMobileGaming;

namespace TapTap.RTC.GMEImpl
{
    public class GMERTCRoomDelegateImpl : ITapRTCRoomDelegate, ITapRTCRangeAudioCtrl
    {
        private readonly ITMGContext context;

        public int TeamId { get; set; }

        public RangeAudioMode RangeAudioMode { get; set; }

        protected internal GMERTCRoomDelegateImpl(TapRTCConfig config, string roomId, bool rangeAudio) : base(config,
            roomId,
            rangeAudio)
        {
            context = ITMGContext.GetInstance();
        }

        public override async Task<ResultCode> Join(string authority)
        {
            return Join(await GetRoomToken(RoomId, authority));
        }

        public override ResultCode Join(JoinRoomResponse response)
        {
            if (context.IsRoomEntered())
            {
                return ResultCode.ERROR_ALREADY_IN_ROOM;
            }

            var roomType = TransformToRoomType(Config.PerfProfile);
            var authBuffer = Convert.FromBase64String(response.AuthBuffer);
            var ret = context.EnterRoom(response.RoomId, roomType, authBuffer);
            return ResultCodeConvert.Convert(ret);
        }

        private static ITMGRoomType TransformToRoomType(AudioPerfProfile perfProfile)
        {
            switch (perfProfile)
            {
                case AudioPerfProfile.DEFAULT:
                    return ITMGRoomType.ITMG_ROOM_TYPE_STANDARD;
                case AudioPerfProfile.LOW:
                    return ITMGRoomType.ITMG_ROOM_TYPE_FLUENCY;
                case AudioPerfProfile.MID:
                    return ITMGRoomType.ITMG_ROOM_TYPE_STANDARD;
                default:
                    return ITMGRoomType.ITMG_ROOM_TYPE_HIGHQUALITY;
            }
        }

        private static AudioPerfProfile TransformToAudioProfile(int roomType)
        {
            switch (roomType)
            {
                case (int) ITMGRoomType.ITMG_ROOM_TYPE_STANDARD:
                    return AudioPerfProfile.MID;
                case (int) ITMGRoomType.ITMG_ROOM_TYPE_FLUENCY:
                    return AudioPerfProfile.LOW;
                default:
                    return AudioPerfProfile.HIGH;
            }
        }

        public override AudioPerfProfile ChangeRoomType(AudioPerfProfile profile)
        {
            var roomType = TransformToRoomType(profile);
            return TransformToAudioProfile(context.GetRoom().ChangeRoomType(roomType));
        }

        public override ResultCode Exit()
        {
            return ResultCodeConvert.Convert(context.ExitRoom());
        }

        public override ResultCode EnableAudioReceiver(bool enable)
        {
            return ResultCodeConvert.Convert(context.GetAudioCtrl().EnableAudioRecv(enable));
        }

        public override bool IsAudioReceiverEnabled()
        {
            return context.GetAudioCtrl().IsAudioRecvEnabled();
        }

        public override ResultCode EnableUserAudio(string id)
        {
            if (string.IsNullOrEmpty(id))
            {
                return ResultCode.ERROR_USER_NOT_EXIST;
            }

            var openId = GetOpenId(id);

            if (string.IsNullOrEmpty(openId))
            {
                return ResultCode.ERROR_USER_NOT_EXIST;
            }

            return ResultCodeConvert.Convert(context.GetAudioCtrl().RemoveAudioBlackList(openId));
        }

        public override ResultCode DisableUserAudio(string id)
        {
            if (string.IsNullOrEmpty(id))
            {
                return ResultCode.ERROR_USER_NOT_EXIST;
            }

            var openId = GetOpenId(id);

            if (string.IsNullOrEmpty(openId))
            {
                return ResultCode.ERROR_USER_NOT_EXIST;
            }

            return ResultCodeConvert.Convert(context.GetAudioCtrl().AddAudioBlackList(openId));
        }

        public ResultCode SetRangeAudioMode(RangeAudioMode mode)
        {
            if (!RangeAudio)
            {
                return ResultCode.ERROR_NOT_RANGE_ROOM;
            }

            var resultCode = ResultCodeConvert.Convert(mode == RangeAudioMode.TEAM
                ? context.SetRangeAudioMode(ITMGRangeAudioMode.ITMG_RANGE_AUDIO_MODE_TEAM)
                : context.SetRangeAudioMode(ITMGRangeAudioMode.ITMG_RANGE_AUDIO_MODE_WORLD));
            if (resultCode == ResultCode.OK)
            {
                RangeAudioMode = mode;
            }

            return resultCode;
        }

        public override ITapRTCRangeAudioCtrl GetRtcRangeAudioCtrl()
        {
            return this;
        }

        public ResultCode SetRangeAudioTeam(int teamId)
        {
            if (!RangeAudio)
            {
                return ResultCode.ERROR_NOT_RANGE_ROOM;
            }

            var resultCode = ResultCodeConvert.Convert(context.SetRangeAudioTeamID(teamId));

            if (resultCode == ResultCode.OK)
            {
                TeamId = teamId;
            }

            return resultCode;
        }

        public ResultCode UpdateAudioReceiverRange(int range)
        {
            return !RangeAudio
                ? ResultCode.ERROR_NOT_RANGE_ROOM
                : ResultCodeConvert.Convert(context.GetRoom().UpdateAudioRecvRange(range));
        }

        public ResultCode UpdateSelfPosition(Position position, Forward forward)
        {
            return !RangeAudio
                ? ResultCode.ERROR_NOT_RANGE_ROOM
                : ResultCodeConvert.Convert(context.GetRoom()
                    .UpdateSelfPosition(new[] {position.x, position.y, position.z}, forward?.asixForward,
                        forward?.asixRight,
                        forward?.asixUp));
        }

        public override async void OnEvent(EventType type, string data)
        {
            switch (type)
            {
                case EventType.MAIN_EVENT_TYPE_USER_UPDATE:
                {
                    var dic = Json.Deserialize(data) as Dictionary<string, object>;

                    var eventID = Json.GetValue<int>(dic, "eventID");

                    if (!(dic?["openIdList"] is List<object> openIdList)) return;

                    await UpdateTapIds(openIdList);
                    
                    foreach (var openId in openIdList)
                    {
                        var tapId = await FetchTapId((string) openId);

                        if (string.IsNullOrEmpty(tapId)) return;

                        ForeachEventAction(new ForeachRoomAction
                        {
                            Each = @event =>
                            {
                                if (eventID == ITMGContext.EVENT_ID_ENDPOINT_ENTER)
                                {
                                    //有成员进入房间
                                    Users.Add(tapId);
                                    @event.OnUserEnter(tapId);
                                }
                                else if (eventID == ITMGContext.EVENT_ID_ENDPOINT_EXIT)
                                {
                                    //有成员退出房间
                                    Users.Remove(tapId);
                                    @event.OnUserExit(tapId);
                                }
                                else if (eventID == ITMGContext.EVENT_ID_ENDPOINT_HAS_AUDIO)
                                {
                                    //有成员发送音频包
                                    @event.OnUserSpeaker(tapId,
                                        ITMGContext.GetInstance().GetAudioCtrl().GetRecvStreamLevel((string) openId));
                                }
                                else if (eventID == ITMGContext.EVENT_ID_ENDPOINT_NO_AUDIO)
                                {
                                    //有成员停止发送音频包
                                    @event.OnUserSpeakEnd(tapId);
                                }
                            }
                        });
                    }

                    return;
                }
                case EventType.MAIN_EVENT_TYPE_ENTER_ROOM:
                    ForeachEventAction(new ForeachRoomAction
                    {
                        Each = @event =>
                        {
                            if (!(Json.Deserialize(data) is Dictionary<string, object> dataDic))
                            {
                                return;
                            }

                            var result = Json.GetValue<int>(dataDic, "result");
                            var errorInfo = Json.GetValue<string>(dataDic, "errorInfo");
                            if (result == 0)
                            {
                                @event.OnEnterSuccess();
                            }
                            else
                            {
                                @event.OnEnterFailure(errorInfo);
                            }
                        }
                    });
                    break;
                case EventType.MAIN_EVENT_TYPE_EXIT_ROOM:
                    ForeachEventAction(new ForeachRoomAction
                    {
                        Each = @event => { @event.OnExit(); }
                    });
                    break;
                case EventType.MAIN_EVENT_TYPE_DISCONNECT:
                    ForeachEventAction(new ForeachRoomAction
                    {
                        Each = @event =>
                        {
                            if (!(Json.Deserialize(data) is Dictionary<string, object> dataDic))
                            {
                                return;
                            }

                            var result = Json.GetValue<int>(dataDic, "result");
                            var errorInfo = Json.GetValue<string>(dataDic, "errorInfo");
                            @event.OnDisconnect(result, errorInfo);
                        }
                    });
                    break;
                case EventType.MAIN_EVENT_TYPE_ROOM_TYPE_CHANGE:
                    ForeachEventAction(new ForeachRoomAction
                    {
                        Each = @event =>
                        {
                            if (!(Json.Deserialize(data) is Dictionary<string, object> dataDic))
                            {
                                return;
                            }

                            var roomType = Json.GetValue<int>(dataDic, "roomType");
                            @event.OnRoomTypeChanged(roomType);
                        }
                    });
                    break;
                case EventType.MAIN_EVENT_TYPE_CHANGE_ROOM_QUALITY:
                    ForeachEventAction(new ForeachRoomAction
                    {
                        Each = @event =>
                        {
                            if (!(Json.Deserialize(data) is Dictionary<string, object> dataDic))
                            {
                                return;
                            }

                            var weight = Json.GetValue<int>(dataDic, "weight");
                            var loss = Json.GetValue<double>(dataDic, "loss");
                            var delay = Json.GetValue<int>(dataDic, "delay");
                            @event.OnRoomQualityChanged(weight, loss, delay);
                        }
                    });
                    break;
                case EventType.MAIN_EVENT_TYPE_NONE:
                    break;
                default:
                    throw new ArgumentOutOfRangeException(nameof(type), type, null);
            }
        }
    }
}