using System;

namespace TapTap.RTC
{
    public class TapRTCEvent
    {
        public Action OnEnterSuccess { get; set; }
        public Action<string> OnEnterFailure { get; set; }
        public Action<int,string> OnDisconnect { get; set; }
        public Action OnExit { get; set; }
        public Action<string> OnUserEnter { get; set; }
        public Action<string> OnUserExit { get; set; }
        public Action<string, int> OnUserSpeaker { get; set; }
        public Action<string> OnUserSpeakEnd { get; set; }
        public Action<int> OnRoomTypeChanged { get; set; }
        public Action<int, double, int> OnRoomQualityChanged { get; set; }
    }
}