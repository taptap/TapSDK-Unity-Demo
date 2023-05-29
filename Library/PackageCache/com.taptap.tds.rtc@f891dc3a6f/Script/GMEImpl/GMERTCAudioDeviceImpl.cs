using System;
using System.IO;
using TencentMobileGaming;
using UnityEngine;

namespace TapTap.RTC.GMEImpl
{
    public class GMERTCAudioDeviceImpl : ITapRTCAudioDevice
    {
        private ITMGContext _context;

        public GMERTCAudioDeviceImpl(ITMGContext context)
        {
            _context = context;
        }

        public ResultCode EnableMic(bool enable)
        {
            return ResultCodeConvert.Convert(_context.GetAudioCtrl().EnableMic(enable));
        }

        public bool IsMicEnable()
        {
            return _context.GetAudioCtrl().GetMicState() == 0;
        }

        public ResultCode SetMicVolume(int value)
        {
            return ResultCodeConvert.Convert(_context.GetAudioCtrl().SetMicVolume(value));
        }

        public int GetMicVolume()
        {
            return _context.GetAudioCtrl().GetMicVolume();
        }

        public ResultCode EnableAudioPlay(bool enable)
        {
            return ResultCodeConvert.Convert(_context.GetAudioCtrl().EnableAudioPlayDevice(enable));
        }

        public bool IsAudioPlayEnabled()
        {
            return _context.GetAudioCtrl().IsAudioPlayDeviceEnabled();
        }

        public ResultCode EnableSpeaker(bool enable)
        {
            return ResultCodeConvert.Convert(_context.GetAudioCtrl().EnableSpeaker(enable));
        }

        public bool IsSpeakerEnabled()
        {
            return _context.GetAudioCtrl().IsEnableSpatializer();
        }

        public ResultCode EnableLoopback(bool enable)
        {
            return ResultCodeConvert.Convert(_context.GetAudioCtrl().EnableLoopBack(enable));
        }

        public ResultCode SetSpeakerVolume(int volume)
        {
            return ResultCodeConvert.Convert(_context.GetAudioCtrl().SetSpeakerVolume(volume));
        }

        public int GetSpeakerVolume()
        {
            return _context.GetAudioCtrl().GetSpeakerVolume();
        }

        public ResultCode EnableSpatializer(bool enable, bool applyToTeam)
        {
            return ResultCodeConvert.Convert(_context.GetAudioCtrl().EnableSpatializer(enable, applyToTeam));
        }

        public bool InitSpatializer()
        {
            var modelPath = Application.persistentDataPath + "/GME_2.8_3d_model.dat";
            if (File.Exists(modelPath))
            {
                return _context.GetAudioCtrl().InitSpatializer(modelPath) == QAVError.OK;
            }

            var textAsset = Resources.Load<TextAsset>("GME_2.8_3d_model");
            if (textAsset == null)
            {
                Debug.Log("can't find resources dat file");
                return false;
            }

            var binaryWrite = new BinaryWriter(new FileStream(modelPath, FileMode.CreateNew));
            try
            {
                binaryWrite.Write(textAsset.bytes);
            }
            catch (Exception e)
            {
                Debug.Log(e);
                throw;
            }
            finally
            {
                binaryWrite.Close();
            }

            return _context.GetAudioCtrl().InitSpatializer(modelPath) == QAVError.OK;
        }
    }
}