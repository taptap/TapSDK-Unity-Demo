using System;

namespace TapTap.Common
{
    public class TapException : Exception
    {
        public int code;

        public int Code {
            get => code;
            set {
                code = value;
            }
        }

        public string message;

        public TapException(int code, string message) : base(message)
        {
            this.code = code;
            this.message = message;
        }
    }
}