//
//  AviasalesAirline.h
//

#import <Foundation/Foundation.h>

/**
 Авиакомпания
 */
@interface AviasalesAirline : NSObject

/**
 Двухбуквенный IATA-код авиакомпании
 */
@property (nonatomic, strong) NSString *iata;

/**
 Название авиакомпании
 */
@property (nonatomic, strong) NSString *name;

/**
 Название альянса, в который входит авиакомпания
 */
@property (nonatomic, strong) NSString *allianceName;

/**
 Средний рейтинг авиакомпании (число типа float от 0 до 5)
 */
@property (nonatomic, strong) NSNumber *averageRate;

/**
 URL для загрузки логотипа авиакомпании
 */
@property (nonatomic, readonly) NSURL *logoURL;

@end
