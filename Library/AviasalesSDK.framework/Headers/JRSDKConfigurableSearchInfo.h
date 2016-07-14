#import <AviasalesSDK/JRSDKSearchInfo.h>

@interface JRSDKConfigurableSearchInfo : NSObject <JRSDKSearchInfo>

@property (assign, nonatomic) JRSDKTravelClass travelClass;
@property (assign, nonatomic) NSInteger adults;
@property (assign, nonatomic) NSInteger children;
@property (assign, nonatomic) NSInteger infants;
@property (strong, nonatomic) NSOrderedSet <id <JRSDKTravelSegment>> *travelSegments;

@end
