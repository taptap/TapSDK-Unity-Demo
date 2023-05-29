using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using AOT;

namespace TencentMobileGaming
{
    public class QAVAudioRecordCtrl : ITMGAudioRecordCtrl
    {
        static QAVAudioRecordCtrl sInstance = new QAVAudioRecordCtrl();
        public static new QAVAudioRecordCtrl GetInstance()
        {
            return sInstance;
        }

        public override event QAVAudioRecordCallback OnAudioRecordComplete;
        [MonoPInvokeCallback(typeof(QAVAudioRecordCallback))]
        private static void s_OnAudioRecordComplete(int code, string dstfile, int durationMs)
        {
            if (GetInstance().OnAudioRecordComplete != null)
            {
                GetInstance().OnAudioRecordComplete(code, dstfile, durationMs);
            }
        }

        public override event QAVAudioRecordPreviewCallback OnAudioRecordPreviewComplete;
        [MonoPInvokeCallback(typeof(QAVAudioRecordPreviewCallback))]
        private static void s_OnAudioRecordPreviewComplete(int code)
        {
            if (GetInstance().OnAudioRecordPreviewComplete != null)
            {
                GetInstance().OnAudioRecordPreviewComplete(code);
            }
        }

        public override event QAVAudioRecordMixCallback OnAudioRecordMixComplete;
        [MonoPInvokeCallback(typeof(QAVAudioRecordMixCallback))]
        private static void s_OnAudioRecordMixComplete(int code, string dstfile, string micFile,int durationMs)
        {
            if (GetInstance().OnAudioRecordMixComplete != null)
            {
                GetInstance().OnAudioRecordMixComplete(code, dstfile, micFile, durationMs);
            }
        }

        public override int StartRecord(ITMGRecordingType type, string dstFile, string accMixFile, string accPlayFile)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_StartRecording((int)type, dstFile, accMixFile, accPlayFile, s_OnAudioRecordComplete);
        }
        public override int StopRecord()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_StopRecording();
        }
        public override int PauseRecord()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_PauseRecording();
        }
        public override int ResumeRecord()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_ResumeRecording();
        }

        public override int SetAccompanyFile(string accMixFile)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_SetAccompanyFile(accMixFile);
        }
        public override int GetAccompanyTotalTimeByMs()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_GetAccompanyTotalTimeByMs();
        }
        public override int GetRecordTimeByMs()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_GetRecordTimeByMs();
        }

        public override int SetRecordTimeByMs(int timePlay, int timeRecord)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_SetRecordTimeByMs(timePlay, timeRecord);
        }
        public override int SetRecordKaraokeType(int type)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_SetRecordKaraokeType(type);
        }
        public override int GetRecordFileDurationByMs()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_GetRecordFileDurationByMs();
        }

        public override int StartPreview()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_StartPreview(s_OnAudioRecordPreviewComplete);
        }
        public override int StopPreview()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_StopPreview();
        }
        public override int PausePreview()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_PausePreview();
        }
        public override int ResumePreview()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_ResumePreview();
        }
        public override int SetPreviewTimeByMs(int time)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_SetPreviewTimeByMs(time);
        }
        public override int GetPreviewTimeByMs()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_GetPreviewTimeByMs();
        }

        public override int SetMixWeights(float mic, float acc)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_SetMixWeights(mic, acc);
        }
        public override int AdjustAudioTimeByMs(int time)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_AdjustAudioTimeByMs(time);
        }
        public override int MixRecordFile(bool needMicData)
        {
            return QAVNative.QAVSDK_AVAudioCtrl_MixRecordFile(needMicData, s_OnAudioRecordMixComplete);
        }

        public override int CancelMixRecordFile()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_CancelMixRecordFile();
        }

        public override int CleanTask()
        {
            return QAVNative.QAVSDK_AVAudioCtrl_CleanTask();
        }

        public QAVAudioRecordCtrl()
        {
        }
        ~QAVAudioRecordCtrl()
        {
        }
    }
}
