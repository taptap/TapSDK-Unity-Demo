using System;
namespace TapTap.UI
{
    public enum EOpenMode
    {
        Sync,

        Async,
    }

    [Flags]
    public enum EAnimationMode
    {
        None = 0,

        Alpha = 1 << 0,

        Scale = 1 << 1,
        
        RightSlideIn = 1 << 2,
        
        UpSlideIn = 1 << 3,
        ToastSlideIn = 1 << 4,

        AlphaAndScale =  Alpha | Scale,
    }
}