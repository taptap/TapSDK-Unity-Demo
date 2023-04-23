using System.Threading.Tasks;

namespace TapTap.RTC
{
    public class TapRTC
    {
        public static Task<ResultCode> Init(TapRTCConfig config)
        {
            return TapRTCDelegateImpl.GetInstance().Init(config);
        }

        public static ResultCode UnInit()
        {
            return TapRTCDelegateImpl.GetInstance().UnInit();
        }

        public static ITapRTCAudioDevice GetAudioDevice()
        {
            return TapRTCDelegateImpl.GetInstance().GetAudioDevice();
        }

        public static ITapRTCRoomDelegate AcquireRoom(string roomId, bool rangeAudio = false)
        {
            return TapRTCDelegateImpl.GetInstance().AcquireRoom(roomId, rangeAudio);
        }

        public static ResultCode Poll()
        {
            return TapRTCDelegateImpl.GetInstance().Poll();
        }

        public static ResultCode Resume()
        {
            return TapRTCDelegateImpl.GetInstance().Resume();
        }


        public static ResultCode Pause()
        {
            return TapRTCDelegateImpl.GetInstance().Pause();
        }

        public static string GetVersion()
        {
            return TapRTCConstants.VERISON;
        }
    }
}