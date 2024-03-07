//
//  PatternAllConfig.h
//  TapBillboardSDK
//
//  Created by SeraphLi on 2023/12/28.
//
#import <Foundation/Foundation.h>
#import <TapBillboardSDK/MarqueeConfig.h>

NS_ASSUME_NONNULL_BEGIN

@interface PatternAllConfig : NSObject

@property (nonatomic, strong, nullable) NSString *closeImgUrl;;

@property (nonatomic, strong, nullable) TapBillboardMarqueeConfig *marqueeConfig;


- (instancetype)initWithJson:(NSString *) jsonString;

- (instancetype)initWithDictionary:(NSDictionary *) dictionary;

+ (void)saveToCache:(NSDictionary *) config;
+ (NSDictionary*) getFromCache;

@end

NS_ASSUME_NONNULL_END
