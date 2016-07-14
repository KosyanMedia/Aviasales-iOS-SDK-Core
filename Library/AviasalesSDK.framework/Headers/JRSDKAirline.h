#if !TARGET_OS_WATCH
#import <AviasalesSDK/DataDefines.h>
#else
#import <AviasalesWatchSDK/DataDefines.h>
#endif

@protocol JRSDKAlliance;
@protocol JRSDKAirline <NSObject>

/**
 * Average airline rating (float from 0 to 5)
 */
@property (nonatomic, retain, readonly) NSNumber *averageRate;
@property (nonatomic, assign, readonly) BOOL isLowcost;

/**
 * Two characters airline IATA-code
 */
@property (nonatomic, retain, readonly) JRSDKIATA iata;

/**
 * Airline name
 */
@property (nonatomic, retain, readonly) NSString *name;
@property (nonatomic, retain, readonly) id <JRSDKAlliance> alliance;

@end
