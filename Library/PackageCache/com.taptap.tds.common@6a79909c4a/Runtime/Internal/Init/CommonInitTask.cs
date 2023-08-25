namespace TapTap.Common.Internal.Init {
    public class CommonInitTask : IInitTask {
        public int Order => 1;

        public void Init(TapConfig config) {
            TapCommon.Init(config);
            UnityMonobehaviorWrapper.Instance.Init();
        }
    }
}
