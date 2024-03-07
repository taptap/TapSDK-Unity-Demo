using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace TapTap.Billboard.Mobile {
    public static class Utils {
        public static Marquee ConvertToMarquee(MarqueeBridgeModel model) {
            return new Marquee {
                Id = model.Id,
                Type = model.Type,
                Content = model.Content,
                Template = model.Template,
                ShortTitle = model.ShortTitle,
                LongTitle = model.LongTitle,
                JumpLocation = model.JumpLocation,
                JumpLink = model.JumpLink,
                PublishTime = model.PublishTime,
                ExpireTime = model.ExpireTime
            };
        }

        public static MarqueeConfig ConvertToMarqueeConfig(MarqueeConfigBridgeModel model) {
            return new MarqueeConfig {
                DefaultTextColor = ConvertToColor(model.DefaultTextColor),
                ContentBackgroundColor = ConvertToColor(model.ContentBackgroundColor),
                UseSystemFont = model.UseSystemFont,
                CustomFont = model.CustomFont,
                RepeatCount = model.RepeatCount,
                Icon = ConvertToIcon(model.Icon),
                Horizontal = ConvertToOrientation(model.Horizontal),
                Vertical = ConvertToOrientation(model.Vertical)
            };
        }

        private static Icon ConvertToIcon(IconBridgeModel model) {
            return new Icon {
                Url = model.Url
            };
        }

        private static Orientation ConvertToOrientation(OrientationBridgeModel model) {
            return new Orientation {
                ScrollWidthType = ConvertToScrollWidthType(model.ScrollWidthType),
                ScrollWidth = model.ScrollWidth,
                Position = ConvertToPosition(model.Position),
                HorizontalOffset = model.HorizontalOffset,
                VerticalOffset = model.VerticalOffset,
                HorizontalScrollMargin = model.HorizontalScrollMargin,
                VerticalScrollMargin = model.VerticalScrollMargin
            };
        }

        private static ScrollWidthType ConvertToScrollWidthType(string str) {
            if (str == "FILL") {
                return ScrollWidthType.Fill;
            }
            return ScrollWidthType.Fixed;
        }

        private static Position ConvertToPosition(string str) {
            switch (str) {
                case "TOP_LEFT":
                    return Position.TopLeft;
                case "TOP":
                    return Position.Top;
                case "TOP_RIGHT":
                    return Position.TopRight;
                case "BOTTOM_LEFT":
                    return Position.BottomLeft;
                case "BOTTOM":
                    return Position.Bottom;
                case "BOTTOM_RIGHT":
                    return Position.BottomRight;
                default:
                    return Position.Top;
            }
        }

        private static Color ConvertToColor(int rgbValue) {
            return new Color(
                ((rgbValue >> 16) & 0xFF) / 255f,  // R
                ((rgbValue >> 8) & 0xFF) / 255f,   // G
                (rgbValue & 0xFF) / 255f           // B
            );
        }
    }
}