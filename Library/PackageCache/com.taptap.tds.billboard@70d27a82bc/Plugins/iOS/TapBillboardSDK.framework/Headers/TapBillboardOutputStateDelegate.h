//
//  TapBillboardOutputStateDelegate.h
//  TapBillboardSDK
//
//  Created by SeraphLi on 2022/12/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TapBillboardOutputStateDelegate<NSObject>

- (void)onPlayVoice;

- (void)onStopVoice;

@end

NS_ASSUME_NONNULL_END
