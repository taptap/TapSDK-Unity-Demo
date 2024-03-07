//
//  MarqueeListener.h
//  TapBillboardSDK
//
//  Created by 郭铠源 on 2023/11/1.
//
#import <Foundation/Foundation.h>

#import <TapBillboardSDK/Marquee.h>
#import <TapBillboardSDK/MarqueeConfig.h>


NS_ASSUME_NONNULL_BEGIN

/**
 * 跑马灯监听器
 * 用于监听跑马灯的展示和关闭
 */
@protocol TapBillboardMarqueeDelegate <NSObject>

/**
 * 展示时回调
 * @param marquee 跑马灯信息
 */
- (void)onShow:(TapBillboardMarquee *)marquee config:(TapBillboardMarqueeConfig *)config;

/**
 * 关闭时回调
 */
- (void)onClose;

@end

NS_ASSUME_NONNULL_END
