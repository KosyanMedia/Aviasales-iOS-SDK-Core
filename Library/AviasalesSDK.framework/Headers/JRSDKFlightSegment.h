#if !TARGET_OS_WATCH
#import <AviasalesSDK/DataDefines.h>
#else
#import <AviasalesWatchSDK/DataDefines.h>
#endif

@protocol JRSDKAirline, JRSDKFlight;

@protocol JRSDKFlightSegment <NSObject>

@property (nonatomic, retain, readonly) id <JRSDKAirline> segmentAirline;
@property (nonatomic, retain, readonly) NSOrderedSet <id <JRSDKFlight>> *flights;
/**
 Суммарная продолжительность перелетов (включая пересдаки) в минутах
 */
@property (nonatomic, assign, readonly) JRSDKFlightDuration totalDurationInMinutes;
@property (nonatomic, assign, readonly) JRSDKFlightDuration delayDurationInMinutes;
@property (nonatomic, assign, readonly) BOOL hasOvernightStopover;
@property (nonatomic, assign, readonly) BOOL hasTransferToAnotherAirport;

@property (nonatomic, retain, readonly) NSNumber *departureDateTimestamp;
@property (nonatomic, retain, readonly) NSNumber *arrivalDateTimestamp;

@end