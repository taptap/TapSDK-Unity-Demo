//
//  Announcement.h
//  TapBillboardSDK
//
//  Created by 郭铠源 on 2023/11/1.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

@interface TapBillboardAnnouncement : NSObject

@property (nonatomic, assign) int _id;
@property (nonatomic, strong) NSString *content;
@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) NSString *_template;
@property (nonatomic, strong) NSString *shortTitle;
@property (nonatomic, strong) NSString *longTitle;
@property (nonatomic, strong) NSString *jumpLocation;
@property (nonatomic, strong) NSString *jumpLink;
@property (nonatomic, assign) long publishTime;
@property (nonatomic, assign) long expireTime;

- (instancetype)init:(NSDictionary *)withJSON;
- (NSDictionary*)toDictionary;

@end

NS_ASSUME_NONNULL_END
