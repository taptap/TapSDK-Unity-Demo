using System;

namespace TapTap.RTC
{
    public class TapRTCException : Exception
    {
        public int Code { get; set; }

        public new string Message { get; set; }

        public TapRTCException(int code, string message)
        {
            this.Code = code;
            this.Message = message;
        }

        public override string ToString() => $"{Code} - {Message}";
                
    }
}