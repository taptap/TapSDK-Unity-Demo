//
//  TDSTrackerConfig.h
//  TDSCommon
//
//  Created by TapTap-David on 2021/1/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NSString * TDSTrackerType NS_STRING_ENUM;
FOUNDATION_EXPORT TDSTrackerType const TDSTrackerForTapsdk;
FOUNDATION_EXPORT TDSTrackerType const TDSTrackerForFriends;
FOUNDATION_EXPORT TDSTrackerType const TDSTrackerForNetwork;
FOUNDATION_EXPORT TDSTrackerType const TDSTrackerForTapSDKNetwork;


@interface TDSTrackerConfig : NSObject
@property (nonatomic, copy) NSString *accessKeyId;
@property (nonatomic, copy) NSString *accessKeySecret;
@property (nonatomic, copy) NSString *project;
@property (nonatomic, copy) NSString *endPoint;
@property (nonatomic, copy) NSString *logStore;
@property (nonatomic, copy) NSString *sdkVersionName;
@property (nonatomic, copy) NSString *sdkVersionCode;
@property (nonatomic, copy) TDSTrackerType trackerType;
@property (nonatomic, assign) NSInteger groupSize;
@end

NS_ASSUME_NONNULL_END
