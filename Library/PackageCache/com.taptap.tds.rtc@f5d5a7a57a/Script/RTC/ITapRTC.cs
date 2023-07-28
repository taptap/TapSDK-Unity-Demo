using System.Threading.Tasks;

namespace TapTap.RTC
{
    public interface ITapRTC
    {
        Task<ResultCode> Init(TapRTCConfig config);

        ResultCode UnInit();

        ResultCode Init(TapRTCConfig config, ProviderResponse response);

        ITapRTCAudioDevice GetAudioDevice();

        ITapRTCRoomDelegate AcquireRoom(string roomId, bool rangeAudio = false);

        ResultCode Poll();

        ResultCode Resume();

        ResultCode Pause();
    }
}