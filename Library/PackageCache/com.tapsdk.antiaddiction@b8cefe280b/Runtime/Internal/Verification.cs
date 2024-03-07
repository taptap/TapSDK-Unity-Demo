using System;
using System.IO;
using System.Threading.Tasks;
using UnityEngine;
using TapTap.AntiAddiction.Model;
using TapTap.Common;
using TapTap.Login;

namespace TapTap.AntiAddiction.Internal 
{
    public static class Verification 
    {
        internal const int AGE_LIMIT_UNKNOWN = -1;
        internal const int AGE_LIMIT_CHILD = 0;
        internal const int AGE_LIMIT_TEEN = 8;
        internal const int AGE_LIMIT_YOUNG = 16;
        internal const int AGE_LIMIT_ADULT = 18;
        
        internal static readonly string HOST = "https://tds-real-name.tapapis.cn";

        static readonly string VERIFICATION_FILENAME = "verification";
        static readonly bool DEFAULT_VERIFIED = false;
        static readonly bool DEFAULT_VERIFING = false;
        static readonly bool DEFAULT_ADULT = false;

        static LocalVerification current;

        public static LocalVerification Current => current;

        static Persistence persistence;

        /// <summary>
        /// 快速获取身份信息
        /// </summary>
        /// <param name="userId"></param>
        public static async Task Fetch(string userId) 
        {
            string filename = Tool.EncryptString(userId);
            persistence = new Persistence(Path.Combine(Application.persistentDataPath,
                Config.ANTI_ADDICTION_DIR,
                VERIFICATION_FILENAME,
                filename));
            try 
            {
                VerificationResult result = await Network.FetchVerification(userId);
                await Save(userId, TapTapAntiAddictionManager.AntiAddictionConfig.region, result);
            } 
            catch (Exception e) 
            {
                TapLogger.Error(e.ToString());
                LocalVerification localVerification = await persistence.Load<LocalVerification>();
                if (localVerification == null)
                {
                    // 当本地不包含认证信息时，抛出异常
                    throw;
                }
                if ((int)localVerification.Region == 0)
                {
                    localVerification.Region = Region.China;
                }

                current = localVerification;
            }
        }
        
        /// <summary>
        /// 快速获取身份信息
        /// </summary>
        /// <param name="userId"></param>
        public static async Task QuickFetch(string userId, AccessToken token) 
        {
            string filename = Tool.EncryptString(userId);
            persistence = new Persistence(Path.Combine(Application.persistentDataPath,
                Config.ANTI_ADDICTION_DIR,
                VERIFICATION_FILENAME,
                filename));
            var rsaKey = TapTapAntiAddictionManager.GetRsaPublicKey();
            VerificationResult result = await Network.QuickFetchVerification(userId, token, rsaKey);
            await Save(userId, TapTapAntiAddictionManager.AntiAddictionConfig.region, result);
        }
        
        /// <summary>
        /// 快速获取身份信息
        /// </summary>
        /// <param name="userId">用户 ID</param>
        /// <param name="code">通过 Tap 主站获取的 compliance code</param>
        /// <param name="isTapLogin">是否为 Tap 登录用户</param>
        public static async Task FetchByCode(string userId, string code, bool isTapLogin) {
            var filename = Tool.EncryptString(userId);
            persistence = new Persistence(Path.Combine(Application.persistentDataPath,
                Config.ANTI_ADDICTION_DIR,
                VERIFICATION_FILENAME,
                filename));
            var result = await Network.FetchVerificationByCode(userId, code, isTapLogin);
            await Save(userId, TapTapAntiAddictionManager.AntiAddictionConfig.region, result);
        }
        
        /// <summary>
        /// 手动输入身份信息
        /// </summary>
        /// <param name="userId"></param>
        /// <param name="verificationInfo"></param>
        /// <param name="activelyManualVerify">是否为主动手动认证</param>
        /// <returns></returns>
        internal static async Task<VerificationResult> FetchVerificationManual(string userId, string verificationInfo, bool activelyManualVerify)
        {
            var tcs = new TaskCompletionSource<VerificationResult>();
            var filename = Tool.EncryptString(userId);
            persistence = new Persistence(Path.Combine(Application.persistentDataPath,
                Config.ANTI_ADDICTION_DIR,
                VERIFICATION_FILENAME,
                filename));
            try
            {
                var rsaKey = TapTapAntiAddictionManager.GetRsaPublicKey();
                VerificationResult result = await Network.FetchVerificationManual(verificationInfo, rsaKey, activelyManualVerify);
                tcs.SetResult(result);
                await Save(verificationInfo, TapTapAntiAddictionManager.AntiAddictionConfig.region, result);
            } 
            catch (Exception e) 
            {
                tcs.SetException(e);
                TapLogger.Error(e.ToString());
                LocalVerification localVerification = await persistence.Load<LocalVerification>();
                if (localVerification == null) 
                {
                    // 当本地不包含认证信息时，抛出异常
                    throw;
                }
                if ((int)localVerification.Region == 0)
                {
                    localVerification.Region = Region.China;
                }
                
                current = localVerification;
            }

            return await tcs.Task;
        }

        public static async Task Save(string userId, Region region, VerificationResult verification) 
        {
            current = new LocalVerification(verification) 
            {
                UserId = userId,
                Region = region,
            };
            await persistence.Save(current);
        }

        internal static void Logout() 
        {
            if (IsVerified && !IsAdult)
            {
#pragma warning disable CS4014
                Network.CheckPlayable();
#pragma warning restore CS4014
            }
            persistence = null;
            current = null;
        }

        internal static string GetCurrentToken() 
        {
            return current?.AntiAddictionToken;
        }

        /// <summary>
        /// 是否已认证
        /// </summary>
        public static bool IsVerified => current?.IsVerified ?? DEFAULT_VERIFIED;
        
        /// <summary>
        /// 是否在认证中
        /// </summary>
        public static bool IsVerifing => current?.IsVerifing ?? DEFAULT_VERIFING;
        
        /// <summary>
        /// 是否认证失败
        /// </summary>
        public static bool IsVerifyFailed => current?.IsVerifyFailed ?? DEFAULT_VERIFING;

        /// <summary>
        /// 是否是成年人
        /// </summary>
        internal static bool IsAdult => current?.IsAdult ?? DEFAULT_ADULT;

        /// <summary>
        /// 年龄级别
        /// </summary>
        internal static int AgeLimit => current?.AgeLimit ?? AGE_LIMIT_CHILD;
        
    }
}
