//
//  TDSMomentBrowserViewController.h
//  TapMomentSDK
//
//  Created by 郭铠源 on 2023/10/10.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TDSMomentBrowserViewController : UIViewController

- (id)initWithProtocols:(NSArray<NSString *> *)protocols urls:(NSArray<NSRegularExpression *> *)urls;
- (Boolean)checkURL:(NSURL *)url;
- (void)loadURL:(NSURL *)url;

+ (void)alertSecurityWarning:(NSURL *)url viewController:(UIViewController *)viewController;

@end

NS_ASSUME_NONNULL_END
