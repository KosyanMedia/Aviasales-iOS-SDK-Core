#if TARGET_OS_WATCH
#import <AviasalesWatchSDK/JRSDKModelUtils.h>
#else
#import <AviasalesSDK/JRSDKModelUtils.h>
#endif

@interface JRSDKModelUtils(JRSDKTravelClass)
+ (nonnull NSString *)travelClassStringRepresentation:(JRSDKTravelClass)travelClass;
+ (JRSDKTravelClass)travelClassFromString:(nonnull NSString *)string;
@end
