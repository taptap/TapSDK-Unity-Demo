//
//  TapPhoneLoginManager.h
//  TapLoginSDK
//
//  Created by Fattycat on 2023/7/12.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^TapClientLoginResultHandler)(NSError *_Nullable error);

typedef void (^TapPhoneLoginResultHandler)(Boolean isCancel, NSString *_Nullable phoneVerifyToken, NSString *_Nullable perferedLoginType);

@interface TapPhoneLoginManager : NSObject

@property (nonatomic, strong, nullable) TapClientLoginResultHandler clientResultHandler;
@property (nonatomic, strong, nullable) TapPhoneLoginResultHandler phoneResultHandler;

+ (instancetype)sharedInstance;

NS_ASSUME_NONNULL_END

@end
