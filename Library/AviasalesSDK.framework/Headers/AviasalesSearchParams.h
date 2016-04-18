//
//  AviasalesSearchParams.h
//

#import <Foundation/Foundation.h>

#import "AviasalesAirport.h"

/**
 Объект, который используется для передачи параметров поискового запроса
 */
@interface AviasalesSearchParams : NSObject

/**
 Проверка корректности параметров.
 @return экземпляр класса NSError в случае какой-либо ошибки
 */
- (NSError *)validate;

/**
 Трёхбуквенный IATA-код пункта отправления
 */
@property (nonatomic, strong) NSString *originIATA;

/**
 Трёхбуквенный IATA-код пункта назначения
 */
@property (nonatomic, strong) NSString *destinationIATA;

/**
 Дата отправления
 */
@property (nonatomic, strong) NSDate *departureDate;

/**
 Дата возвращения
 */
@property (nonatomic, strong) NSDate *returnDate;

/**
 Обратный перелет
 */
@property (nonatomic, assign) BOOL returnFlight;

/**
 Дата отправления в формате yyyy-MM-dd
 */
@property (nonatomic, readonly) NSString *departureDateString;

/**
 Дата назначения в формате yyyy-MM-dd
 */
@property (nonatomic, readonly) NSString *returnDateString;

/**
 Количество взрослых
 */
@property (nonatomic, assign) NSInteger adultsNumber;

/**
 Количество детей
 */
@property (nonatomic, assign) NSInteger childrenNumber;

/**
 Количество младенцев
 */
@property (nonatomic, assign) NSInteger infantsNumber;

/**
 Класс перелета (0 — Эконом, 1 — Бизнес)
 */
@property (nonatomic, assign) NSInteger travelClass;

@end
