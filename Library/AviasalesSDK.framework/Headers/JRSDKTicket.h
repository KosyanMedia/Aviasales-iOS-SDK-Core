@protocol JRSDKAirline, JRSDKFlightSegment, JRSDKPrice, JRSDKSearchInfo;

@protocol JRSDKTicket <NSObject>

@property (nonatomic, retain, readonly) NSOrderedSet <id <JRSDKFlightSegment>> *flightSegments;
/**
 Набор вариантов цен на билет, отсортированный по возрастанию
 */
@property (nonatomic, strong, readonly) NSOrderedSet <id <JRSDKPrice>> *prices;
/**
 Основная авиавкомпания для данного билета
 */
@property (nonatomic, retain, readonly) id <JRSDKAirline> mainAirline;
@property (nonatomic, retain, readonly) NSNumber *simpleRating;
@property (nonatomic, retain, readonly) NSNumber *totalDuration;
@property (nonatomic, retain, readonly) NSNumber *delayDuration;
@property (nonatomic, assign, readonly) BOOL hasOvernightStopover;

@property (nonatomic, retain, readonly) NSString *sign;
@property (nonatomic, assign, readonly) BOOL isFromTrustedGate;

- (id <JRSDKSearchInfo>)searchInfo;

@end