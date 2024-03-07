using System.Collections.Generic;
using ZXing;
using ZXing.Common;
using ZXing.QrCode.Internal;
using UnityEngine;

namespace TapTap.Login.Internal {
    public class QRCodeUtils {
        public static Texture2D EncodeQrImage(string content, int width, int height) {
            var writer = new MultiFormatWriter();
            var hints = new Dictionary<EncodeHintType, object> {
                { EncodeHintType.CHARACTER_SET, "UTF-8" },
                //hints.Add(EncodeHintType.MARGIN, 0);
                { EncodeHintType.ERROR_CORRECTION, ErrorCorrectionLevel.M }
            };
            var bitMatrix = writer.encode(content, BarcodeFormat.QR_CODE, width, height, hints);
            bitMatrix = DeleteWhite(bitMatrix);
            var w = bitMatrix.Width;
            var h = bitMatrix.Height;
            var texture = new Texture2D(w, h);
            for (var x = 0; x < h; x++) {
                for (var y = 0; y < w; y++) {
                    texture.SetPixel(y, x, bitMatrix[x, y] ? Color.black : Color.white);
                }
            }

            texture.Apply();
            texture.filterMode = FilterMode.Point;
            return texture;
        }

        private static BitMatrix DeleteWhite(BitMatrix matrix) {
            var rec = matrix.getEnclosingRectangle();
            var resWidth = rec[2];
            var resHeight = rec[3];

            var resMatrix = new BitMatrix(resWidth, resHeight);
            resMatrix.clear();
            for (var i = 0; i < resWidth; i++) {
                for (var j = 0; j < resHeight; j++){
                    if (matrix[i + rec[0], j + rec[1]]) {
                        resMatrix.flip(i, j);
                    }
                }
            }

            return resMatrix;
        }
    }
}
