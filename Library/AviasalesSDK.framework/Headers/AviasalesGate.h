//
//  AviasalesGate.h
//

#import <Foundation/Foundation.h>

/**
 Гейт: авиакомпания или агентство, в котором можно приобрести билет
 */
@interface AviasalesGate : NSObject

/**
 Идентификатор гейта
 */
@property (nonatomic, strong) NSString *gateID;

/**
 Название гейта
 */
@property (nonatomic, strong) NSString *gateName;

/**
 Код валюты гейта трёхбуквенный код валюты (например: rub, usd, eur)
 */
@property (nonatomic, strong) NSString *currencyCode;

/**
 Средний рейтинг гейта (число типа float от 0 до 5)
 */
@property (nonatomic, strong) NSNumber *averageRate;

/**
 Есть ли у гейта мобильная версия сайта
 */
@property (nonatomic, assign) BOOL mobileVersion;

@end