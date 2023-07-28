using System;

namespace TapTap.RTC
{
    public class ForeachRoomAction
    {
        public Action<TapRTCEvent> Each { get; set; }
    }
}