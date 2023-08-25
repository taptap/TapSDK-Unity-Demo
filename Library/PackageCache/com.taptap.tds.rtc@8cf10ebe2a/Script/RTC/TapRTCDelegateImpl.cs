using System;
using System.Collections.Generic;
using System.Threading.Tasks;

namespace TapTap.RTC
{
    public class TapRTCDelegateImpl : ITapRTC
    {
        private static TapRTCDelegateImpl _sInstance;

        private static readonly object Locker = new object();

        private bool init = false;

        public static TapRTCDelegateImpl GetInstance()
        {
            lock (Locker)
            {
                if (_sInstance == null)
                {
                    _sInstance = new TapRTCDelegateImpl();
                }
            }

            return _sInstance;
        }

        public TapRTCConfig Config { get; set; }

        private ITapRTC rtcDelegate;

        public async Task<ResultCode> Init(TapRTCConfig config)
        {
            if (init)
            {
                return ResultCode.OK;
            }

            Config = config;
            rtcDelegate = ProviderFactory.Create(Config);
            TapRTCHttpClient.GetInstance().Init(Config);
            var resultCode = Init(config, await GetProviderConfig());
            if (resultCode == ResultCode.OK)
            {
                init = true;
            }

            return resultCode;
        }

        public ResultCode Init(TapRTCConfig config, ProviderResponse response)
        {
            return rtcDelegate.Init(config, response);
        }


        public ResultCode UnInit()
        {
            init = false;
            TapRTCEventDispatcher.GetInstance().Clear();
            return rtcDelegate?.UnInit() ?? ResultCode.ERROR_UNKNOWN;
        }

        public ITapRTCAudioDevice GetAudioDevice()
        {
            return rtcDelegate?.GetAudioDevice();
        }

        public ITapRTCRoomDelegate AcquireRoom(string roomId, bool range)
        {
            return rtcDelegate?.AcquireRoom(roomId, range);
        }

        public ResultCode Poll()
        {
            return rtcDelegate?.Poll() ?? ResultCode.ERROR_UNKNOWN;
        }

        public ResultCode Resume()
        {
            return rtcDelegate?.Resume() ?? ResultCode.ERROR_UNKNOWN;
        }

        public ResultCode Pause()
        {
            return rtcDelegate?.Pause() ?? ResultCode.ERROR_UNKNOWN;
        }

        private async Task<ProviderResponse> GetProviderConfig()
        {
            return new ProviderResponse(await TapRTCHttpClient.GetInstance().Get(
                TapRTCConstants.GET_PROVIDER_CONFIG, null,
                new Dictionary<string, object>
                {
                    ["userId"] = Config.UserId,
                    ["deviceId"] = Config.DeviceId,
                    ["provider"] = Config.Provider.TransformToString()
                }));
        }
    }
}