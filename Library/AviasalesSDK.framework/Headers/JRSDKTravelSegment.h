@protocol JRSDKAirport;

@protocol JRSDKTravelSegment

@property (nonatomic, retain) NSDate *departureDate;
@property (nonatomic, retain) id<JRSDKAirport> originAirport;
@property (nonatomic, retain) id<JRSDKAirport> destinationAirport;

@end
