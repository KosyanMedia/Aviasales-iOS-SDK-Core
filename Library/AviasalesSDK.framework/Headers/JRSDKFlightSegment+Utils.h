#if !TARGET_OS_WATCH
#import <AviasalesSDK/JRSDKModelUtils.h>
#else
#import <AviasalesWatchSDK/JRSDKModelUtils.h>
#endif

@protocol JRSDKFlightSegment;

@interface JRSDKModelUtils(JRSDKFlightSegment)
+ (BOOL)isDirectFlightSegment:(id<JRSDKFlightSegment>)flightSegment;
+ (BOOL)isComplexSearchWithFlightSegments:(NSOrderedSet<id<JRSDKFlightSegment>> *)flightSegments;
+ (JRSDKIATA)flightSegmentOriginIATA:(id<JRSDKFlightSegment>)flightSegment;
+ (JRSDKIATA)flightSegmentDestinationIATA:(id<JRSDKFlightSegment>)flightSegment;
@end
