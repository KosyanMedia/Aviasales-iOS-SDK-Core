@protocol JRSDKAirport, JRSDKFlightSegment, JRSDKAirline;

@protocol JRSDKFlight

@property (nonatomic, retain) NSString *aircraft;
@property (nonatomic, retain) NSDate *arrivalDate;
@property (nonatomic, retain) NSNumber *delay;
@property (nonatomic, retain) NSDate *departureDate;
@property (nonatomic, retain) NSNumber *duration;
@property (nonatomic, retain) NSString *number;
@property (nonatomic, retain) id <JRSDKAirline> airline;
@property (nonatomic, retain) id <JRSDKAirport> destinationAirport;
@property (nonatomic, retain) id <JRSDKAirport> originAirport;

@end
