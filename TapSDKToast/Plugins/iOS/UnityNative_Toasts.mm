//
//  UnityNative_Toasts.mm
//
//  Created by Nicholas Sheehan on 01/06/2018.
//

#import "UnityNative_Toasts.h"
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@implementation UIWindow (TM)
+ (UIWindow *)tm_topWindow {
    NSEnumerator *frontToBackWindows = [[[UIApplication sharedApplication] windows] reverseObjectEnumerator];
    
    for (UIWindow *window in frontToBackWindows) {
        if (window.windowLevel < UIWindowLevelAlert && window.rootViewController && ![window isKindOfClass:NSClassFromString(@"UITextEffectsWindow")] && ![window isKindOfClass:NSClassFromString(@"UIRemoteKeyboardWindow")]) {
            return window;
        }
    }
    return UIApplication.sharedApplication.delegate.window;
}
@end


@implementation UIViewController (Utils)

+(UIViewController*)tm_findBestViewController:(UIViewController*)vc {

    if (vc.presentedViewController) {

        // Return presented view controller
        return [UIViewController tm_findBestViewController:vc.presentedViewController];

    } else if ([vc isKindOfClass:[UISplitViewController class]]) {

        // Return right hand side
        UISplitViewController* svc = (UISplitViewController*) vc;
        if (svc.viewControllers.count > 0)
            return [UIViewController tm_findBestViewController:svc.viewControllers.lastObject];
        else
            return vc;

    } else if ([vc isKindOfClass:[UINavigationController class]]) {

        // Return top view
        UINavigationController* svc = (UINavigationController*) vc;
        if (svc.viewControllers.count > 0)
            return [UIViewController tm_findBestViewController:svc.topViewController];
        else
            return vc;

    } else if ([vc isKindOfClass:[UITabBarController class]]) {

        // Return visible view
        UITabBarController* svc = (UITabBarController*) vc;
        if (svc.viewControllers.count > 0)
            return [UIViewController tm_findBestViewController:svc.selectedViewController];
        else
            return vc;

    } else {

        // Unknown view controller type, return last child view controller
        return vc;

    }
}

+ (UIViewController*)tm_currentViewController {

    // Find best view controller
    UIViewController* viewController = [UIWindow tm_topWindow].rootViewController;
    return [UIViewController tm_findBestViewController:viewController];
}

@end

inline void ShowToast(const char* toastText, float toastLengthInSeconds)
{
    NSString *message = [NSString stringWithUTF8String:toastText];

    
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:nil
                                                                   message:message
                                                            preferredStyle:UIAlertControllerStyleAlert];

    UIViewController *rootViewController = [UIViewController tm_currentViewController];
    CGFloat height = rootViewController.view.frame.size.height;
    CGFloat width = rootViewController.view.frame.size.width;
    UILabel *label = [[UILabel alloc] initWithFrame:CGRectMake((width-200)/2, (height-60)/2, 200, 60)];
    label.textAlignment = NSTextAlignmentCenter;
    label.layer.cornerRadius = 5;
    label.layer.masksToBounds = YES;
    label.backgroundColor = [UIColor whiteColor];
    label.text = message;
    [rootViewController.view addSubview:label];
    // [rootViewController presentViewController:alert animated:YES completion:nil];

    // [[UIViewController tm_currentViewController] presentViewController:alert animated: YES completion: nil];

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, toastLengthInSeconds * NSEC_PER_SEC), dispatch_get_main_queue(), ^{
        // [alert dismissViewControllerAnimated:YES completion:nil];
        [label removeFromSuperview];
    });
}

//
// Shows a long toast which lasts 3.5 seconds
//
void UnityNative_Toasts_ShowLongToast(const char* toastText)
{
    ShowToast(toastText, 1.5f);
}

//
// Shows a short toast which lasts 2 seconds
//
void UnityNative_Toasts_ShowShortToast(const char* toastText)
{
    ShowToast(toastText, 1.5);
}
