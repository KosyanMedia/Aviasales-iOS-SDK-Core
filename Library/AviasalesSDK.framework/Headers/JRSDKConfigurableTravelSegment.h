#import <AviasalesSDK/JRSDKSearchInfo.h>

@interface JRSDKConfigurableTravelSegment : NSObject <JRSDKTravelSegment>
@property (strong, nonatomic) NSDate *departureDate;
@property (strong, nonatomic) id<JRSDKAirport> destinationAirport;
@property (strong, nonatomic) id<JRSDKAirport> originAirport;
@end
