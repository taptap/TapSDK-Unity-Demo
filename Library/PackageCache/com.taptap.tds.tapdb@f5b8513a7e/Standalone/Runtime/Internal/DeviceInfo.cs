using System;
using System.Runtime.InteropServices;
using System.Globalization;
using System.Diagnostics;
using System.Collections;
using System.Collections.Generic;
using System.Net.NetworkInformation;
using UnityEngine;

namespace TapTap.TapDB.Standalone.Internal {
    public class DeviceInfo {

#if UNITY_EDITOR_OSX || UNITY_STANDALONE_OSX
        [DllImport("TapDBDeviceInfo", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr GetDeviceLanguage();
#endif

        public static string GetLanguage() {
#if UNITY_EDITOR_OSX || UNITY_STANDALONE_OSX
            return Marshal.PtrToStringAnsi(GetDeviceLanguage());
#else
            return CultureInfo.CurrentUICulture.IetfLanguageTag;
#endif
        }

#if UNITY_EDITOR_WIN || UNITY_STANDALONE_WIN
        [DllImport("kernel32.dll")]
        static extern IntPtr GetCurrentProcess();

        [DllImport("kernel32.dll")]
        static extern uint GetProcessTimes(IntPtr processHandle,
            out long creationTime,
            out long exitTime,
            out long kernelTime,
            out long userTime);

        static DateTime GetProcessStartTime()
        {
            IntPtr processHandle = GetCurrentProcess();
            long creationTime;
            GetProcessTimes(processHandle,
                out creationTime,
                out _,
                out _,
                out _);

            return DateTime.FromFileTime(creationTime);
        }
#endif

        //安全组提供的设备识别 ID 算法，用于后续数据串联
        public static string GetLaunchUniqueID() 
        {
#if UNITY_EDITOR_WIN || UNITY_STANDALONE_WIN
          // 获取当前进程对象
          Process currentProcess = Process.GetCurrentProcess();
          // 获取进程启动时间
          DateTime startTime = GetProcessStartTime();
          return toMd5(startTime.ToFileTime().ToString() + "-" + currentProcess.Id.ToString());
#else
          return "";
#endif

        }

        public static void GetMacAddress(out string macAddressList, out string firstMacAddress)
        {
          List<string> mac_addrs = new List<string>();

          try
          {
            NetworkInterface[] nics = NetworkInterface.GetAllNetworkInterfaces();
            foreach (NetworkInterface adapter in nics)
            {
              string physicalAddress = adapter.GetPhysicalAddress().ToString();
              if (string.IsNullOrEmpty(physicalAddress))
                continue;

              physicalAddress = $"\"{physicalAddress}\"";
              if (mac_addrs.IndexOf(physicalAddress) == -1)
                mac_addrs.Add(physicalAddress);
            }
            // sort
            mac_addrs.Sort();
          }
          catch (Exception e)
          {
            UnityEngine.Debug.Log("GetMacAddress Exception " + e.Message);
          }
          macAddressList = $"[{string.Join(",", mac_addrs)}]";
          firstMacAddress = mac_addrs.Count > 0 ? mac_addrs[0].Replace("\"", "") : string.Empty;
        }

        private static string toMd5(string data)
        {
          byte[] buffer = System.Text.Encoding.Default.GetBytes(data);
          try
          {
            System.Security.Cryptography.MD5CryptoServiceProvider chk = new System.Security.Cryptography.MD5CryptoServiceProvider();
            byte[] some = chk.ComputeHash(buffer);
            string ret = "";
            foreach(byte a in some)
            {
                if (a < 16)
                    ret += "0" + a.ToString("X");
                else
                    ret += a.ToString("X");                    
            }
            return ret.ToLower();
          }
          catch
          {
              throw;
            }
        }
    }
}