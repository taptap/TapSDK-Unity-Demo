using System;
using System.Collections.Generic;

namespace TapTap.RTC
{
    [Serializable]
    public class JoinRoomResponse
    {
        public string AuthBuffer { get; set; }

        public string RoomId { get; set; }

        public JoinRoomResponse(string json)
        {
            if (!(Json.Deserialize(json) is Dictionary<string, object> dic)) return;
            AuthBuffer = dic["authBuffer"] as string;
            RoomId = dic["roomId"] as string;
        }
    }
}