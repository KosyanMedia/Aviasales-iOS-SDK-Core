//
//  AviasalesFlight.h
//

#import <Foundation/Foundation.h>

#import "AviasalesAirline.h"
#import "AviasalesAirport.h"

/**
 Рейс (перелёт), входящий в состав билета
 */
@interface AviasalesFlight : NSObject

/**
 Номер рейса
 */
@property (nonatomic, strong) NSString *number;

/**
 Авиакомпания, совершающая перелёт
 */
@property (nonatomic, strong) AviasalesAirline *airline;

/**
 Дата отправления
 */
@property (nonatomic, strong) NSDate *departure;

/**
 Дата возвращения
 */
@property (nonatomic, strong) NSDate *arrival;

/**
 Продолжительность перелета
 */
@property (nonatomic, strong) NSNumber *duration;

/**
 Продолжительность перелета в формате для отображения (формат устанавливается в @c durationFormat синглтона @c AviasalesSDK)
 */
@property (nonatomic, strong) NSString *formattedDuration;

/**
 Продолжительность пересадки ПЕРЕД рейсом в минутах
 */
@property (nonatomic, strong) NSNumber *delay;

/**
 Продолжительность в формате для отображения (см. AviasalesSDK -durationFormat)
 */
@property (nonatomic, strong) NSString *formattedDelay;

/**
 Пункт вылета
 */
@property (nonatomic, strong) AviasalesAirport *origin;

/**
  Пункт назначения
 */
@property (nonatomic, strong) AviasalesAirport *destination;

/**
 Воздушное судно, совершающее рейс
 */
@property (nonatomic, strong) NSString *aircraft;

@end
