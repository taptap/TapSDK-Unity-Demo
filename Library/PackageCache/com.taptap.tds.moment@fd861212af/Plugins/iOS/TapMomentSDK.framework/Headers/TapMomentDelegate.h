//
//  TapMomentDelegate.h
//  TapMomentSDK
//
//  Created by Bottle K on 2021/3/26.
//
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TapMomentDelegate<NSObject>

- (void)onMomentCallbackWithCode:(NSInteger)code msg:(NSString *)msg;

@end

NS_ASSUME_NONNULL_END
