
#import <Foundation/Foundation.h>
#import "UnityNativeDialogs.h"
#import "UnityInterface.h"

extern void UnitySendMessage(const char *, const char *, const char *);

extern "C"{
    
    int UnityDisplayAlertDialog (const char* title,const char* message,const char* positiveButtonTitle,const char* negativeButtonTitle,const char* neutralButtonTitle){
        return [UnityNativeDialogs displayAlertDialogWith:title message:message positiveButtonTitle:positiveButtonTitle 
            negativeButtonTitle:negativeButtonTitle
            neutralButtonTitle:neutralButtonTitle];
    }
}

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


@implementation UnityNativeDialogs

+ (int) displayAlertDialogWith: (const char*) title
         message:(const char*) message
         positiveButtonTitle:(const char*) positiveButtonTitle
         negativeButtonTitle:(const char*) negativeButtonTitle
         neutralButtonTitle:(const char*) neutralButtonTitle{
    NSString* nsTitle = [NSString stringWithUTF8String:title];
    NSString* nsMessage = [NSString stringWithUTF8String:message];
    UIAlertController* alert = [UIAlertController alertControllerWithTitle:nsTitle message:nsMessage preferredStyle:UIAlertControllerStyleAlert];
    
    if(positiveButtonTitle){
        NSString* buttonTitle = [NSString stringWithUTF8String:positiveButtonTitle];
        UIAlertAction *actionOther = [UIAlertAction actionWithTitle:buttonTitle style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
            //Default Action
            UnitySendMessage("_UnityNativeDialogs", "OnUnityNativeDialogsAction", "Positive");
        }];
        [alert addAction:actionOther];
    }
    
    if(negativeButtonTitle){
        NSString* buttonTitle = [NSString stringWithUTF8String:negativeButtonTitle];
        UIAlertAction *actionNegative = [UIAlertAction actionWithTitle:buttonTitle style:UIAlertActionStyleDestructive handler:^(UIAlertAction * _Nonnull action) {
                //Cancel Action
            UnitySendMessage("_UnityNativeDialogs", "OnUnityNativeDialogsAction", "Negative");
            }];
        [alert addAction:actionNegative];
    }

    if(neutralButtonTitle){
        NSString* buttonTitle = [NSString stringWithUTF8String:neutralButtonTitle];
        UIAlertAction *actionOther = [UIAlertAction actionWithTitle:buttonTitle style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
            //Default Action
            UnitySendMessage("_UnityNativeDialogs", "OnUnityNativeDialogsAction", "Neutral");
        }];
        [alert addAction:actionOther];
    }

    [[UIViewController tm_currentViewController] presentViewController:alert animated: TRUE completion: nil];
    // [UnityGetGLViewController() presentViewController:alert animated:TRUE completion:nil];
    
    return 0;
}
@end




