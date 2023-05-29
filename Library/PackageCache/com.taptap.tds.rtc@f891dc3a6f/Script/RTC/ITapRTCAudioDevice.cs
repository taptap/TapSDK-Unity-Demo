namespace TapTap.RTC
{
    public interface ITapRTCAudioDevice
    {
        ResultCode EnableSpatializer(bool enable, bool applyToTeam);

        ResultCode EnableMic(bool enable);

        bool IsMicEnable();

        ResultCode SetMicVolume(int value);

        int GetMicVolume();

        ResultCode EnableAudioPlay(bool enable);

        bool IsAudioPlayEnabled();

        ResultCode EnableSpeaker(bool enable);

        bool IsSpeakerEnabled();

        ResultCode EnableLoopback(bool enable);

        ResultCode SetSpeakerVolume(int volume);

        int GetSpeakerVolume();

        bool InitSpatializer();
    }
}