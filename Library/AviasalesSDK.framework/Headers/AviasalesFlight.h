//
//  AviasalesFlight.h
//

#import <Foundation/Foundation.h>
#import <AviasalesSDK/JRSDKFlight.h>
#import <AviasalesSDK/AviasalesAirline.h>
#import <AviasalesSDK/AviasalesAirport.h>

/**
 Рейс (перелёт), входящий в состав билета
 */
@interface AviasalesFlight : NSObject <JRSDKFlight> //Deprecated

/**
 Продолжительность перелета в формате для отображения (формат устанавливается в @c durationFormat синглтона @c AviasalesSDK)
 */
@property (nonatomic, strong) NSString *formattedDuration;

/**
 Продолжительность в формате для отображения (см. AviasalesSDK -durationFormat)
 */
@property (nonatomic, strong) NSString *formattedDelay;

#pragma mark - Protocol read-write redefinitions

@property (nonatomic, retain) NSString *aircraft;
@property (nonatomic, retain) NSDate *arrivalDate;
@property (nonatomic, retain) NSNumber *delay;
@property (nonatomic, retain) NSDate *departureDate;
@property (nonatomic, retain) NSNumber *duration;
@property (nonatomic, retain) NSString *number;
@property (nonatomic, retain) id <JRSDKAirline> airline;
@property (nonatomic, retain) id <JRSDKAirport> originAirport;
@property (nonatomic, retain) id <JRSDKAirport> destinationAirport;

@end
