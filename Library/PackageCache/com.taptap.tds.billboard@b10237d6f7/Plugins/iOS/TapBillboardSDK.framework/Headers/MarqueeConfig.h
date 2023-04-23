//
//  MarqueeConfig.h
//  TapBillboardSDK
//
//  Created by SeraphLi on 2022/12/15.
//

#import <Foundation/Foundation.h>
#import "MarqueeScreenConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface MarqueeConfig : NSObject
@property (nonatomic, assign, readonly) int textColor ;
@property (nonatomic, assign, readonly) int backgroundColor ;
@property (nonatomic, assign, readonly) bool useSystemFont ;
@property (nonatomic, retain, readonly) NSString *customFont ;
@property (nonatomic, assign, readonly) int repeatCount ;
@property (nonatomic, retain, readonly) NSString *iconUrl ;
@property (nonatomic, retain, readonly) MarqueeScreenConfig *horizontal;
@property (nonatomic, retain, readonly) MarqueeScreenConfig *vertical;

- (instancetype)initWithDictionary:(NSDictionary *) dictionary;

@end

NS_ASSUME_NONNULL_END
