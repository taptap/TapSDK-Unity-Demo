//
//  TapMomentConfig.h
//  TapMomentSDK
//
//  Created by Bottle K on 2021/3/26.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM (NSInteger, TapMomentOrientation) {
    TapMomentOrientationDefault   = -1,
    TapMomentOrientationLandscape = 0,
    TapMomentOrientationPortrait  = 1,
};
NS_ASSUME_NONNULL_BEGIN

@interface TapMomentConfig : NSObject
@property (nonatomic, assign) TapMomentOrientation orientation;

+ (TapMomentConfig *)createWithOrientation:(TapMomentOrientation)orientation;
@end

NS_ASSUME_NONNULL_END
