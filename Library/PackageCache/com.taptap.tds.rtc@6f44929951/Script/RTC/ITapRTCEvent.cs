namespace TapTap.RTC
{
    public interface ITapRTCEvent
    {
        void OnEvent(EventType type, string data);
    }
}