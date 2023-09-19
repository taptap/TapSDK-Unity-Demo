//
//  TDSHUD.h
//  AFNetworking
//
//  Created by HarryHuang on 2018/8/29.
//

#import <UIKit/UIKit.h>

@interface TDSHUD : NSObject

//在window上显示等待
+ (void)showWait;
+ (void)showWaitWithString:(NSString *)string;
+ (void)dismiss;

//在指定的view上显示等待
+ (void)showWaitOnView:(UIView *)view;
+ (void)showWaitWithString:(NSString *)string onView:(UIView *)view;
+ (void)dismissOnView:(UIView *)view;

//toast，显示提示语；
+ (void)showString:(NSString *)string;
+ (void)showString:(NSString *)string timeInterval:(NSTimeInterval)timeInterval;
+ (void)showString:(NSString *)string timeInterval:(NSTimeInterval)timeInterval offsetY:(CGFloat)offset;

//toast，显示提示语和自定义图片；
+ (void)showImageName:(NSString *)imageName string:(NSString *)string;
+ (void)showImage:(UIImage *)image string:(NSString *)string;
+ (void)showImage:(UIImage *)image string:(NSString *)string timeInterval:(NSTimeInterval)timeInterval;
+ (void)showImage:(UIImage *)image string:(NSString *)string timeInterval:(NSTimeInterval)timeInterval offsetY:(CGFloat)offset;

@end

