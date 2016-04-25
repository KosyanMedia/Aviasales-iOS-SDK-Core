#import <Foundation/Foundation.h>

@protocol JRSDKAirport;

FOUNDATION_EXPORT NSString *const kAviasalesAirportsStorageNewAirportsParsedNotificationName;


@interface AviasalesAirportsStorage : NSObject

+ (AviasalesAirportsStorage *)sharedInstance;
@property (strong, nonatomic, readonly) NSArray <id <JRSDKAirport>> *topAirports;

+ (NSArray <id <JRSDKAirport>> *)topAirports;
+ (NSDictionary <NSString *, id <JRSDKAirport>> *)topAirportsDictionary;
+ (NSDictionary <NSString *, id <JRSDKAirport>> *)allAirportsDictionary;

+ (id <JRSDKAirport>)getAirportByIATA:(NSString *)iata;
+ (NSString *)mainIATAByIATA:(NSString *)iata;

@end