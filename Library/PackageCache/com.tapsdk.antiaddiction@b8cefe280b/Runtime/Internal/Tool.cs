using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Security.Cryptography;
using System.Text;
using UnityEngine;

namespace TapTap.AntiAddiction.Internal
{
    public static class Tool
    {
        public static int GetMonthDayCount(int year, int month)
        {
            switch (month)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    return 31;
                case 2:
                    return IsLeapYear(year) ? 29 : 28;
                default:
                    return 30;
            }
        }

        public static bool IsLeapYear(int year)
        {
            return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
        }
        
        /// <summary>
        /// md5加密
        /// </summary>
        /// <param name="str"></param>
        /// <returns></returns>
        public static string EncryptString(string str)
        {
            MD5 md5 = MD5.Create();
            // 将字符串转换成字节数组
            byte[] byteOld = Encoding.UTF8.GetBytes(str);
            // 调用加密方法
            byte[] byteNew = md5.ComputeHash(byteOld);
            // 将加密结果转换为字符串
            StringBuilder sb = new StringBuilder();
            foreach (byte b in byteNew)
            {
                // 将字节转换成16进制表示的字符串，
                sb.Append(b.ToString("x2"));
            }

            // 返回加密的字符串
            return sb.ToString();
        }

        /// <summary>
        /// Encrypt the content with public key (in string)
        /// </summary>
        /// <param name="input"></param>
        /// <param name="key"></param>
        /// <returns></returns>
        public static string RsaEncrypt(string input, string key)
        {
            //https://stackoverflow.com/questions/11506891/how-to-load-the-rsa-public-key-from-file-in-c-sharp
            try
            {
                var base64Info = Convert.FromBase64String(key);
                RSACryptoServiceProvider rsa = DecodeX509PublicKey(base64Info);
                int chunckSize = 245;
                var encodeInfo = Encoding.UTF8.GetBytes(input);
                
                // 用来存储加密后的数据的列表
                List<byte[]> encryptedDataList = new List<byte[]>();

                // 分段加密
                for (int i = 0; i < encodeInfo.Length; i += chunckSize) {
                    int blockSize = Math.Min(chunckSize, encodeInfo.Length - i);
                    byte[] blockData = new byte[blockSize];
                    Buffer.BlockCopy(encodeInfo, i, blockData, 0, blockSize);
                    byte[] encryptedBlock = rsa.Encrypt(blockData, false);
                    encryptedDataList.Add(encryptedBlock);
                }
                // 将加密后的数据拼接在一起
                byte[] encryptedData = encryptedDataList.SelectMany(x => x).ToArray();
                // 最终的加密结果可以保存到文件或通过网络传输
                string encryptedString = Convert.ToBase64String(encryptedData);
                return encryptedString;
            }
            catch (Exception e)
            {
                Debug.LogErrorFormat("RSA Encrypt Error! input: {0} key: {1}\n Msg: {2}", input, key, e.Message);
                return null;
            }
        }

        private static bool CompareBytearrays(byte[] a, byte[] b)
        {
            if (a.Length != b.Length)
                return false;
            int i = 0;
            foreach (byte c in a)
            {
                if (c != b[i])
                    return false;
                i++;
            }

            return true;
        }

        private static RSACryptoServiceProvider DecodeX509PublicKey(byte[] x509Key)
        {
            // encoded OID sequence for  PKCS #1 rsaEncryption szOID_RSA_RSA = "1.2.840.113549.1.1.1"
            byte[] seqOid = { 0x30, 0x0D, 0x06, 0x09, 0x2A, 0x86, 0x48, 0x86, 0xF7, 0x0D, 0x01, 0x01, 0x01, 0x05, 0x00 };
            // ---------  Set up stream to read the asn.1 encoded SubjectPublicKeyInfo blob  ------
            MemoryStream mem = new MemoryStream(x509Key);
            BinaryReader binaryReader = new BinaryReader(mem);    //wrap Memory Stream with BinaryReader for easy reading

            try
            {

                var twoBytes = binaryReader.ReadUInt16();
                if (twoBytes == 0x8130) //data read as little endian order (actual data order for Sequence is 30 81)
                    binaryReader.ReadByte();    //advance 1 byte
                else if (twoBytes == 0x8230)
                    binaryReader.ReadInt16();   //advance 2 bytes
                else
                    return null;

                var seq = binaryReader.ReadBytes(15);
                if (!CompareBytearrays(seq, seqOid))    //make sure Sequence for OID is correct
                    return null;

                twoBytes = binaryReader.ReadUInt16();
                if (twoBytes == 0x8103) //data read as little endian order (actual data order for Bit String is 03 81)
                    binaryReader.ReadByte();    //advance 1 byte
                else if (twoBytes == 0x8203)
                    binaryReader.ReadInt16();   //advance 2 bytes
                else
                    return null;

                var bt = binaryReader.ReadByte();
                if (bt != 0x00)     //expect null byte next
                    return null;

                twoBytes = binaryReader.ReadUInt16();
                if (twoBytes == 0x8130) //data read as little endian order (actual data order for Sequence is 30 81)
                    binaryReader.ReadByte();    //advance 1 byte
                else if (twoBytes == 0x8230)
                    binaryReader.ReadInt16();   //advance 2 bytes
                else
                    return null;

                twoBytes = binaryReader.ReadUInt16();
                byte lowByte;
                byte highByte = 0x00;

                if (twoBytes == 0x8102) //data read as little endian order (actual data order for Integer is 02 81)
                    lowByte = binaryReader.ReadByte();  // read next bytes which is bytes in modulus
                else if (twoBytes == 0x8202)
                {
                    highByte = binaryReader.ReadByte(); //advance 2 bytes
                    lowByte = binaryReader.ReadByte();
                }
                else
                    return null;
                byte[] modInt = { lowByte, highByte, 0x00, 0x00 };   //reverse byte order since asn.1 key uses big endian order
                int modSize = BitConverter.ToInt32(modInt, 0);

                byte firstByte = binaryReader.ReadByte();
                binaryReader.BaseStream.Seek(-1, SeekOrigin.Current);

                if (firstByte == 0x00)
                {   //if first byte (highest order) of modulus is zero, don't include it
                    binaryReader.ReadByte();    //skip this null byte
                    modSize -= 1;   //reduce modulus buffer size by 1
                }

                byte[] modulus = binaryReader.ReadBytes(modSize);   //read the modulus bytes

                if (binaryReader.ReadByte() != 0x02)            //expect an Integer for the exponent data
                    return null;
                int expBytes = binaryReader.ReadByte();        // should only need one byte for actual exponent data (for all useful values)
                byte[] exponent = binaryReader.ReadBytes(expBytes);

                // ------- create RSACryptoServiceProvider instance and initialize with public key -----
                RSACryptoServiceProvider rsa = new RSACryptoServiceProvider();
                RSAParameters rsaKeyInfo = new RSAParameters
                {
                    Modulus = modulus,
                    Exponent = exponent
                };
                rsa.ImportParameters(rsaKeyInfo);
                return rsa;
            }
            catch (Exception)
            {
                return null;
            }

            finally { binaryReader.Close(); }
            
        }
    }
}

