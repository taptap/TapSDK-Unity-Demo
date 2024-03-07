#import <AntiAddictionUI/AntiAddiction.h>
#import <AntiAddictionService/AntiAddictionService-Swift.h>

char* MakeStringCopy(const char* string)
{
    if (string == NULL)
        return NULL;
    
    char* res = (char*)malloc(strlen(string) + 1);
    strcpy(res, string);
    return res;
}

extern "C"
{
    int TapSDKAntiAddictionGetCurrentUserRemainTime() {
        return (int)[AntiAddiction getRemainingTime];
    }
    
    int TapSDKAntiAddictionGetCurrentUserAgeLimit() {
        return (int)[AntiAddiction getCurrentUserAgeLimite];
    }
    
    const char* TapSDKAntiAddictionGetCurrentAntiToken() {
        return MakeStringCopy([[AntiAddiction currentToken] UTF8String]);
    }

    bool TapSDKAntiAddictionStandalone() {
        return [AntiAddiction isStandAlone];

    }
}

