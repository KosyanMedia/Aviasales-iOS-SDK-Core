//
//  AviasalesAirport.h
//

#import <Foundation/Foundation.h>

/*
 Объект, описывающий пункт отправления или назначения (аэропорт или метрополию)
 */
@interface AviasalesAirport : NSObject

/**
 Трехбуквенный IATA-код аэропорта
 */
@property (nonatomic, strong) NSString *iata;

/**
 Имя пункта в виде "Город, Страна"
 */
@property (nonatomic, strong) NSString *name;

/**
 Название аэропорта, либо строка пустая строка для метрополии
 */
@property (nonatomic, strong) NSString *airportName;

/**
 Город
 */
@property (nonatomic, strong) NSString *city;

/**
 Страна
 */
@property (nonatomic, strong) NSString *country;

/**
 Средний рейтинг аэропорта (число типа float от 0 до 5)
 */
@property (nonatomic, strong) NSNumber *averageRate;

/**
 Координаты аэропорта
 */
@property (nonatomic, strong) NSNumber *latitude;
@property (nonatomic, strong) NSNumber *longitude;

/**
 Часовой пояс аэропорта
 */
@property (nonatomic, strong) NSTimeZone *timeZone;

@end
