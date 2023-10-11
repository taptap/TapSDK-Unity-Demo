//
//  UnreadDetail.h
//  TapBillboardSDK
//
//  Created by SeraphLi on 2022/12/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UnreadDetail : NSObject

@property (nonatomic, assign, readonly) int itemId;

@property (nonatomic, retain, readonly) NSString *content;

@property (nonatomic, retain, readonly) NSString *type;

@property (nonatomic, retain, readonly) NSString *itemTemplate;

@property (nonatomic, retain, readonly) NSString *shortTitle;

@property (nonatomic, retain, readonly) NSString *longTitle;

@property (nonatomic, retain, readonly) NSString *jumpLink;

@property (nonatomic, assign, readonly) long publishTime;

@property (nonatomic, assign, readonly) long expireTime;


- (instancetype)initWithJson:(NSString *) jsonString;

- (instancetype)initWithDictionary:(NSDictionary *) dictionary;

@end

NS_ASSUME_NONNULL_END
