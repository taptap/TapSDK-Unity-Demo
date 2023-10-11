//
//  UnreadItem.h
//  TapBillboardSDK
//
//  Created by SeraphLi on 2022/12/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UnreadItem : NSObject

@property (nonatomic, assign, readonly) int itemId;

@property (nonatomic, assign, readonly) long expireTime;

@property (nonatomic, assign, readonly) long publishTime;

- (instancetype)initWithJson:(NSString *) jsonString;

- (instancetype)initWithDictionary:(NSDictionary *) dictionary;

@end

NS_ASSUME_NONNULL_END
