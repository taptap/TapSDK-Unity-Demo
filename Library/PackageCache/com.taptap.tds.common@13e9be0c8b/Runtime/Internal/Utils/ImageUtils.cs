using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using System.Security.Cryptography;
using System.Text;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;

namespace TapTap.Common.Internal.Utils {
    public class ImageUtils {
        private readonly static string CacheDirName = "tap-cache";

        private readonly static MD5 md5 = MD5.Create();

        private readonly static Dictionary<string, WeakReference<Texture>> cachedTextures = new Dictionary<string, WeakReference<Texture>>();

        public static async Task<Texture> LoadImage(string url, int timeout = 30, bool useMemoryCache = true) {
            if (string.IsNullOrEmpty(url)) {
                TapLogger.Warn(string.Format($"ImageUtils Fetch image is null! url is null or empty!"));
                return null;
            }

            if (cachedTextures.TryGetValue(url, out WeakReference<Texture> refTex) &&
                refTex.TryGetTarget(out Texture tex)) {
                // 从内存加载
                return tex;
            } else {
                try {
                    // 从本地缓存加载
                    Texture cachedImage = await LoadCachedImaged(url, timeout);

                    if (useMemoryCache) {
                        cachedTextures[url] = new WeakReference<Texture>(cachedImage);
                    }

                    return cachedImage;
                } catch (Exception e) {
                    TapLogger.Warn(e.Message);
                    try {
                        // 从网络加载
                        Texture2D newTex = await FetchImage(url, timeout);

                        if (useMemoryCache) {
                            cachedTextures[url] = new WeakReference<Texture>(newTex);
                        }

                        // 缓存到本地
                        _ = CacheImage(url, newTex);

                        return newTex;
                    } catch (Exception ex) {
                        TapLogger.Warn(ex.Message);
                        return null;
                    }
                }
            }
        }

        public static async Task<Texture2D> FetchImage(string url, int timeout = 30) {
            using (UnityWebRequest request = UnityWebRequestTexture.GetTexture(url)) {
                request.timeout = timeout;
                UnityWebRequestAsyncOperation operation = request.SendWebRequest();
                while (!operation.isDone) {
                    await Task.Delay(30);
                }

                if (request.isNetworkError || request.isHttpError) {
                    throw new Exception("Fetch image error.");
                } else {
                    Texture2D texture = ((DownloadHandlerTexture)request.downloadHandler)?.texture;
                    if (texture == null) {
                        TapLogger.Warn($"ImageUtils Fetch image is null! url: {url}");
                    }
                    return texture;
                }
            }
        }

        static async Task<Texture> LoadCachedImaged(string url, int timeout = 30) {
            string cachedImagePath = GetCachedPath(url);
            if (!File.Exists(cachedImagePath)) {
                throw new Exception("No cached image.");
            }
            string cachedImageUrl = $"file://{cachedImagePath}";
            using (UnityWebRequest request = UnityWebRequestTexture.GetTexture(cachedImageUrl)) {
                request.timeout = timeout;
                UnityWebRequestAsyncOperation operation = request.SendWebRequest();
                while (!operation.isDone) {
                    await Task.Delay(30);
                }

                if (request.isNetworkError || request.isHttpError) {
                    RemoveCachedImage(cachedImagePath);
                    throw new Exception("Load cache image error.");
                } else {
                    var texture = ((DownloadHandlerTexture)request.downloadHandler)?.texture;
                    if (texture == null) {
                        RemoveCachedImage(cachedImagePath);
                        throw new Exception("Cached image is invalid.");
                    }
                    return texture;
                }
            }
        }

        static async Task CacheImage(string url, Texture2D tex) {
            string cacheImagePath = GetCachedPath(url);
            // 写入缓存
            byte[] imageData = tex.EncodeToPNG();
            using (FileStream fileStream = new FileStream(cacheImagePath, FileMode.Create, FileAccess.Write, FileShare.None, bufferSize: 4096, useAsync: true)) {
                await fileStream.WriteAsync(imageData, 0, imageData.Length);
            }
        }

        static void RemoveCachedImage(string cachedImagePath) {
            try {
                File.Delete(cachedImagePath);
            } finally {

            }
        }

        static string ToHex(byte[] bytes) {
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < bytes.Length; i++) {
                sb.Append(bytes[i].ToString("x2"));
            }
            return sb.ToString();
        }

        static string GetCachedPath(string url) {
            string cachedHashName = ToHex(md5.ComputeHash(Encoding.UTF8.GetBytes(url)));
            return Path.Combine(CacheDirPath, cachedHashName);
        }

        static string CacheDirPath {
            get {
                string path = Path.Combine(Application.persistentDataPath, CacheDirName);
                if (!Directory.Exists(path)) {
                    Directory.CreateDirectory(path);
                }
                return path;
            }
        }
    }
}
