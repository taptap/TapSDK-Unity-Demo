//
//  TapPhoneLoginManager.h
//  TapLoginSDK
//
//  Created by Fattycat on 2023/7/12.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^TapClientLoginResultHandler)(NSError *_Nullable error);
typedef void (^TapClientLoginResultHandler2)(NSError *_Nullable error, NSArray *permissions);

typedef void (^TapPhoneLoginResultHandler)(Boolean isCancel, NSString *_Nullable phoneVerifyToken, NSString *_Nullable perferedLoginType);
typedef void (^TapPhoneLoginResultHandler2)(Boolean isCancel, NSString *_Nullable phoneVerifyToken, NSString *_Nullable perferedLoginType, NSArray *permissions);

@interface TapPhoneLoginManager : NSObject

@property (nonatomic, strong, nullable) TapClientLoginResultHandler clientResultHandler;
@property (nonatomic, strong, nullable) TapPhoneLoginResultHandler phoneResultHandler;

@property (nonatomic, strong, nullable) TapClientLoginResultHandler2 clientResultHandler2;
@property (nonatomic, strong, nullable) TapPhoneLoginResultHandler2 phoneResultHandler2;

+ (instancetype)sharedInstance;

NS_ASSUME_NONNULL_END

@end
