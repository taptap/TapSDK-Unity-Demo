namespace TencentMobileGaming
{


    public enum ITMGRecordingType
    {
        ITMG_AUDIO_RECORDING_SELF = 0,//录制自己的声音,包括伴奏和人声
        ITMG_AUDIO_RECORDING_KTV = 1,//录制KTV模式歌曲
    };

    public abstract class ITMGAudioRecordCtrl
    {
        public static ITMGAudioRecordCtrl GetInstance()
        {
            return QAVAudioRecordCtrl.GetInstance();
        }
        public abstract event QAVAudioRecordCallback OnAudioRecordComplete;
        public abstract event QAVAudioRecordPreviewCallback OnAudioRecordPreviewComplete;
        public abstract event QAVAudioRecordMixCallback OnAudioRecordMixComplete;

        public abstract int StartRecord(ITMGRecordingType type, string dstFile, string accMixFile, string accPlayFile);
        public abstract int StopRecord();
        public abstract int PauseRecord();
        public abstract int ResumeRecord();
        public abstract int SetAccompanyFile(string accMixFile);
        public abstract int GetAccompanyTotalTimeByMs();
        public abstract int GetRecordTimeByMs();
        public abstract int SetRecordTimeByMs(int timePlay, int timeRecord);
        public abstract int SetRecordKaraokeType(int type);
        public abstract int GetRecordFileDurationByMs();

        public abstract int StartPreview();
        public abstract int StopPreview();
        public abstract int PausePreview();
        public abstract int ResumePreview();
        public abstract int SetPreviewTimeByMs(int time);
        public abstract int GetPreviewTimeByMs();

        public abstract int SetMixWeights(float mic, float acc);
        public abstract int AdjustAudioTimeByMs(int time);
        public abstract int MixRecordFile(bool needMicData);
        public abstract int CancelMixRecordFile();
        public abstract int CleanTask();
    }
}