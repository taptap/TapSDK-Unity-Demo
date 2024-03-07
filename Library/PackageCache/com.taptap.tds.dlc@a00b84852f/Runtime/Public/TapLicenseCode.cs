namespace TapTap.License
{
    public enum TapLicenseQueryCode
    {
        /*
        * 查询成功
        */
        QUERY_RESULT_OK = 0,

        /**
         * 未安装客户端，sdk有相应处理，正常不需要开发者做处理
         */
        QUERY_RESULT_NOT_INSTALL_TAPTAP = 1,

        /**
         * 查询失败
         */
        QUERY_RESULT_ERR = 2,
        
        /*
        * 未知错误
        */
        ERROR_CODE_UNDEFINED = 80000,
    }
    
    public enum TapLicensePurchasedCode
    {
        /*
        * 支付失败
        */
        DLC_NOT_PURCHASED = 0,

        /**
         * 支付成功
         */
        DLC_PURCHASED = 1,

        /**
         * 支付出现问题
         */
        DLC_RETURN_ERROR = -1,
        
        /*
        * 未知错误
        */
        ERROR_CODE_UNDEFINED = 80000,
    }
}