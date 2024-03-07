using System;
using System.Collections.Generic;
using System.IO;
using System.Net.NetworkInformation;
using System.Security.Cryptography;
using System.Text;
using UnityEngine;

namespace TapTap.Common
{
    public static class DataStorage
    {
        private static Dictionary<string, string> dataCache;
        private static byte[] Keys = { 0x12, 0x34, 0x56, 0x78, 0x90, 0xAB, 0xCD, 0xEF };
        public static void SaveString(string key, string value)
        {
            SaveStringToCache(key, value);
            PlayerPrefs.SetString(key, EncodeString(value));
        }

        public static string LoadString(string key)
        {
            string value = LoadStringFromCache(key);
            if (!string.IsNullOrEmpty(value))
            {
                return value;
            }
            value = PlayerPrefs.HasKey(key) ? DecodeString(PlayerPrefs.GetString(key)) : null;
            if (value != null)
            {
                SaveStringToCache(key, value);
            }
            return value;
        }

        private static void SaveStringToCache(string key, string value)
        {
            if (dataCache == null)
            {
                dataCache = new Dictionary<string, string>();
            }
            if (dataCache.ContainsKey(key))
            {
                dataCache[key] = value;
            }
            else
            {
                dataCache.Add(key, value);
            }
        }
        
        private static string LoadStringFromCache(string key)
        {
            if (dataCache == null)
            {
                dataCache = new Dictionary<string, string>();
            }
            return dataCache.ContainsKey(key) ? dataCache[key] : null;
        }
        
        private static string EncodeString(string encryptString)
        {
            if (Platform.IsAndroid() || Platform.IsIOS())
            {
                return encryptString;
            }
            try
            {
                byte[] rgbKey = Encoding.UTF8.GetBytes(GetMacAddress().Substring(0, 8));
                byte[] rgbIV = Keys;
                byte[] inputByteArray = Encoding.UTF8.GetBytes(encryptString);
                DESCryptoServiceProvider dCSP = new DESCryptoServiceProvider();
                MemoryStream mStream = new MemoryStream();
                CryptoStream cStream = new CryptoStream(mStream, dCSP.CreateEncryptor(rgbKey, rgbIV), CryptoStreamMode.Write);
                cStream.Write(inputByteArray, 0, inputByteArray.Length);
                cStream.FlushFinalBlock();
                cStream.Close();
                return Convert.ToBase64String(mStream.ToArray());
            }
            catch
            {
                return encryptString;
            }
        }

        private static string DecodeString(string decryptString)
        {
            if (Platform.IsAndroid() || Platform.IsIOS())
            {
                return decryptString;
            }
            try
            {
                byte[] rgbKey = Encoding.UTF8.GetBytes(GetMacAddress().Substring(0, 8));
                byte[] rgbIV = Keys;
                byte[] inputByteArray = Convert.FromBase64String(decryptString);
                DESCryptoServiceProvider DCSP = new DESCryptoServiceProvider();
                MemoryStream mStream = new MemoryStream();
                CryptoStream cStream = new CryptoStream(mStream, DCSP.CreateDecryptor(rgbKey, rgbIV), CryptoStreamMode.Write);
                cStream.Write(inputByteArray, 0, inputByteArray.Length);
                cStream.FlushFinalBlock();
                cStream.Close();
                return Encoding.UTF8.GetString(mStream.ToArray());
            }
            catch (Exception e)
            {
                Debug.Log(e.Message);
                return decryptString;
            }
        }

        private static string GetMacAddress()
        {
            string physicalAddress = "FFFFFFFFFFFF";
            if (Platform.IsAndroid() || Platform.IsIOS())
            {
                return physicalAddress;
            }
            NetworkInterface[] nice = NetworkInterface.GetAllNetworkInterfaces();

            foreach (NetworkInterface adaper in nice)
            {
                if (adaper.Description == "en0")
                {
                    physicalAddress = adaper.GetPhysicalAddress().ToString();
                    break;
                }
                else
                {
                    physicalAddress = adaper.GetPhysicalAddress().ToString();

                    if (physicalAddress != "")
                    {
                        break;
                    };
                }
            }
            return physicalAddress;
        }
    }
}