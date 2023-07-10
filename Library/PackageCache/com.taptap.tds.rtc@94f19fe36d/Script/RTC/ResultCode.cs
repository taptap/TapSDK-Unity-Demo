using System.Collections.Generic;
using TencentMobileGaming;
using ZXing;

namespace TapTap.RTC
{
    public enum ResultCode
    {
        OK = 0,
        ERROR_UNKNOWN = 1,
        ERROR_UNIMPLEMENTED = 2,
        ERROR_NOT_ON_MAIN_THREAD = 3,
        ERROR_INVAIDARGS = 4,
        ERROR_NOT_INIT = 5,
        ERROR_CONFIG_ERROR = 11,
        ERROR_NET = 21,
        ERROR_NET_TIMEOUT = 22,
        ERROR_USER_NOT_EXIST = 101,
        ERROR_ROOM_NOT_EXIST = 102,
        ERROR_DEVICE_NOT_EXIST = 103,
        ERROR_TEAM_ID_NOT_NULL = 104,
        ERROR_ALREADY_IN_ROOM = 105,
        ERROR_NO_PERMISSION = 106,
        ERROR_AUTH_FAILED = 107,
        ERROR_LIB_ERROR = 108,
        ERROR_NOT_RANGE_ROOM = 109,
    }

    public static class ResultCodeConvert
    {
        public static Dictionary<int, ResultCode> GmeCodeConvertDictionary = new Dictionary<int, ResultCode>()
        {
            {QAVError.OK, ResultCode.OK},
            {QAVError.ERR_NOT_IMPLEMENTED, ResultCode.ERROR_UNIMPLEMENTED},
            {QAVError.ERR_NOT_IN_MAIN_THREAD, ResultCode.ERROR_NOT_ON_MAIN_THREAD},
            {QAVError.ERR_INVALID_ARGUMENT, ResultCode.ERROR_INVAIDARGS},
            {QAVError.ERR_CONTEXT_NOT_START, ResultCode.ERROR_NOT_INIT},
            {QAVError.ERR_SERVER_CONNECT_ROOM_FAIL, ResultCode.ERROR_NET},
            {QAVError.ERR_HTTP_REQ_FAIL, ResultCode.ERROR_NET},
            {QAVError.AV_ERR_NET_REQUEST_FALLED, ResultCode.ERROR_NET},
            {QAVError.ERR_TIMEOUT, ResultCode.ERROR_NET_TIMEOUT},
            {QAVError.ERR_IMSDK_TIMEOUT, ResultCode.ERROR_NET_TIMEOUT},
            {QAVError.ERR_ROOM_NOT_EXIST, ResultCode.ERROR_ROOM_NOT_EXIST},
            {QAVError.AV_ERR_IN_OTHER_ROOM, ResultCode.ERROR_ALREADY_IN_ROOM},
            {QAVError.ERR_DEVICE_NOT_EXIST, ResultCode.ERROR_DEVICE_NOT_EXIST},
            {QAVError.AV_ERR_NO_PERMISSION, ResultCode.ERROR_NO_PERMISSION},
            {QAVError.AV_ERR_AUTH_FIALD, ResultCode.ERROR_AUTH_FAILED},
            {QAVError.AV_ERR_LOAD_LIB_FAILED, ResultCode.ERROR_LIB_ERROR},
        };

        public static ResultCode Convert(int code, Provider provider = Provider.GME)
        {
            if (provider != Provider.GME)
            {
                return ResultCode.ERROR_UNKNOWN;
            }

            if (GmeCodeConvertDictionary.ContainsKey(code))
            {
                return GmeCodeConvertDictionary[code];
            }

            return ResultCode.ERROR_UNKNOWN;
        }
    }
}