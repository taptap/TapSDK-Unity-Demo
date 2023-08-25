using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using TapTap.Common;
using UnityEngine;
using UnityEngine.Networking;

namespace TapTap.RTC
{
    public abstract class ITapRTCRoomDelegate : ITapRTCEvent
    {
        protected readonly string RoomId;

        protected readonly TapRTCConfig Config;

        public readonly bool RangeAudio;

        public HashSet<string> Users { get; }

        public readonly ConcurrentDictionary<string, string> TapIdMaps = new ConcurrentDictionary<string, string>();

        public readonly ConcurrentDictionary<string, string> OpenIdMaps = new ConcurrentDictionary<string, string>();

        private readonly HashSet<TapRTCEvent> actions = new HashSet<TapRTCEvent>();

        protected internal ITapRTCRoomDelegate(TapRTCConfig config, string roomId, bool rangeAudio)
        {
            Config = config;
            RoomId = roomId;
            RangeAudio = rangeAudio;
            Users = new HashSet<string>();
        }

        public abstract Task<ResultCode> Join(string authority);

        public abstract ResultCode Join(JoinRoomResponse response);

        public abstract ResultCode Exit();

        public abstract ITapRTCRangeAudioCtrl GetRtcRangeAudioCtrl();

        public abstract AudioPerfProfile ChangeRoomType(AudioPerfProfile profile);

        public abstract ResultCode EnableAudioReceiver(bool enable);

        public abstract bool IsAudioReceiverEnabled();

        public abstract ResultCode EnableUserAudio(string openId);

        public abstract ResultCode DisableUserAudio(string openId);

        public void RegisterEventAction(TapRTCEvent action)
        {
            actions.Add(action);
        }

        public void RemoveEventAction(TapRTCEvent action)
        {
            actions.Remove(action);
        }

        public void ClearAction()
        {
            actions.Clear();
        }

        public void ForeachEventAction(ForeachRoomAction action)
        {
            foreach (var eventAction in actions)
            {
                action.Each(eventAction);
            }
        }

        protected async Task<JoinRoomResponse> GetRoomToken(string roomId, string authority)
        {
            return new JoinRoomResponse(await TapRTCHttpClient.GetInstance()
                .Get(TapRTCConstants.GET_AUTH_BUFF, null, new Dictionary<string, object>
                {
                    ["userId"] = Config.UserId,
                    ["deviceId"] = Config.DeviceId,
                    ["provider"] = Config.Provider.TransformToString(),
                    ["authBuffer"] = UnityWebRequest.EscapeURL(authority),
                    ["roomId"] = roomId
                }));
        }

        public string GetOpenId(string tapId)
        {
            return OpenIdMaps.ContainsKey(tapId) ? OpenIdMaps[tapId] : null;
        }

        protected async Task<string> FetchTapId(string openId)
        {
            if (TapIdMaps.ContainsKey(openId) && !string.IsNullOrEmpty(TapIdMaps[openId]))
            {
                return TapIdMaps[openId];
            }

            var id = await TapRTCHttpClient.GetInstance().Get(TapRTCConstants.TRANSFORM_CONVERT_USER, null,
                new Dictionary<string, object>
                {
                    ["userId"] = openId,
                    ["deviceId"] = Config.DeviceId,
                    ["provider"] = Config.Provider.TransformToString(),
                });

            TapIdMaps[openId] = id;
            OpenIdMaps[id] = openId;
            return id;
        }

        protected async Task UpdateTapIds(List<object> openIds)
        {
            var providerUserIds = new StringBuilder();
            for (var i = 0; i < openIds.Count; i++)
            {
                providerUserIds.Append(openIds[i]);
                if (i + 1 < openIds.Count)
                {
                    providerUserIds.Append(",");
                }
            }

            var response = await TapRTCHttpClient.GetInstance().Get(TapRTCConstants.TRANSFORM_CONVERT_USERS, null,
                new Dictionary<string, object>()
                {
                    ["providerUserIds"] = UnityWebRequest.EscapeURL(providerUserIds.ToString()),
                    ["deviceId"] = Config.DeviceId,
                    ["provider"] = Config.Provider.TransformToString(),
                });

            var dic = Json.Deserialize(response) as Dictionary<string, object>;
            if (dic?.ContainsKey("results") != true)
            {
                return;
            }

            if (!(dic["results"] is List<object> list))
            {
                return;
            }

            foreach (var item in list)
            {
                var itemDic = item as Dictionary<string, object>;
                var providerUserId = itemDic?["providerUserId"] as string;
                var userId = itemDic?["userId"] as string;
                TapIdMaps[providerUserId ?? string.Empty] = userId;
                OpenIdMaps[userId ?? string.Empty] = providerUserId;
            }
        }

        public async Task<List<string>> FetchUserIds()
        {
            var response = await TapRTCHttpClient.GetInstance().Get($"rtc/v1/room/{RoomId}/users", null,
                new Dictionary<string, object>()
                {
                    ["provider"] = Config.Provider.TransformToString()
                });
            var dic = Json.Deserialize(response) as Dictionary<string, object>;
            var result = new List<string>();
            if (!(dic?["results"] is List<object> list)) return result;
            foreach (var item in list)
            {
                result.Add((item as Dictionary<string, object>)?["userId"] as string);
            }
            return result;
        }

        public virtual void OnEvent(EventType type, string data)
        {
        }
    }
}