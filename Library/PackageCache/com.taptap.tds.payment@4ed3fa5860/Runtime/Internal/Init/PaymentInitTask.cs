using TapTap.Common;
using TapTap.Common.Internal.Init;

namespace TapTap.Payment.Internal.Init {
    public class PaymentInitTask : IInitTask {
        public int Order => 104;

        public void Init(TapConfig config) {
            TapPayment.Init(config);
        }
    }
}