
namespace TapTap.Common.Internal.Init {
    public interface IInitTask {
        /// <summary>
        /// 初始化顺序
        /// </summary>
        int Order { get; }

        /// <summary>
        /// 初始化
        /// </summary>
        /// <param name="config"></param>
        void Init(TapConfig config);
    }
}
