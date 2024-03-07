//
//  UIColor+TDS.h
//  TapCommonSDK
//
//  Created by 黄驿峰 on 2023/8/7.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN


FOUNDATION_EXPORT UIColor * UIColorMakeFromRGB(NSInteger, NSInteger, NSInteger);
FOUNDATION_EXPORT UIColor * UIColorMakeFromRGBA(NSInteger, NSInteger, NSInteger, CGFloat);
//argb或者rgb，就是6位或者8位，确保hex正确，不做错误判断(因为程序员可控)，不可控的字符串（列如从网络获取的）自己在封装一层，确保传入的是正确的。
FOUNDATION_EXPORT UIColor * UIColorMakeFromHex(NSString *);

// UIColorHex(FFF4ED)
#ifndef UIColorHex
#define UIColorHex(_hex_)   UIColorMakeFromHex((__bridge NSString *)CFSTR(#_hex_))
#endif


@interface UIColor (TDS)

@property (nonatomic, readonly, assign) NSInteger interger;

+ (UIColor *)makeWithRed:(NSInteger)red green:(NSInteger)green blue:(NSInteger)blue alpha:(NSInteger)alpha;
+ (UIColor *)makeWithHex:(NSString *)hex;

@end



NS_ASSUME_NONNULL_END
