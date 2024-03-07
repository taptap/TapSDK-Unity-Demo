using System;

namespace TapTap.Login.Internal
{
    internal class LoginResult
    {
        public bool IsCanceled { get; set; }

        public bool IsFaulted { get; set; }

        public Exception Exception { get; set; }

        public AccessToken Token { get; set; }
        
        public Profile Profile { get; set; }
    }
}