#import <MapKit/MapKit.h>
#if !TARGET_OS_WATCH
#import <AviasalesSDK/DataDefines.h>
#else
#import <AviasalesWatchSDK/DataDefines.h>
#endif

#ifndef JRSDKAirport_h
#define JRSDKAirport_h

typedef NS_ENUM(NSUInteger, JRSDKAirportType) {
    JRSDKAirportTypeAirport = 0,
    JRSDKAirportTypeRailwayStation
};

@protocol JRSDKAirport <NSObject>

/**
 Средний рейтинг аэропорта (число типа float от 0 до 5)
 */
@property (nonatomic, retain, readonly) NSNumber *averageRate;
/**
 Город
 */
@property (nonatomic, retain, readonly) NSString *city;
@property (nonatomic, retain, readonly) NSString *cityNameCasePr;
@property (nonatomic, retain, readonly) NSString *cityNameCaseRo;
@property (nonatomic, retain, readonly) NSString *cityNameCaseVi;
/**
 Страна
 */
@property (nonatomic, retain, readonly) NSString *country;

/**
 Трехбуквенный IATA-код аэропорта
 */
@property (nonatomic, retain, readonly) JRSDKIATA iata;
@property (nonatomic, retain, readonly) JRSDKIATA parentIata;
/**
 Координаты аэропорта
 */
@property (nonatomic, retain, readonly) NSNumber *latitude;
@property (nonatomic, retain, readonly) NSNumber *longitude;
/**
 Часовой пояс аэропорта
 */
@property (nonatomic, strong, readonly) NSTimeZone *timeZone;
/**
 Название аэропорта, либо строка пустая строка для метрополии
 */
@property (nonatomic, retain, readonly) NSString *airportName;
/**
 Отражает популярность аэропорта. Чем больше значение, тем популярнее аэропорт
 */
@property (nonatomic, assign, readonly) NSInteger numberOfSearches;
@property (nonatomic, assign, readonly) BOOL isCity;
@property (nonatomic, assign, readonly) JRSDKAirportType airportType;
/**
 Набор строк, по которым можно найти аэропорт
 */
@property (nonatomic, retain, readonly) NSArray <NSString *> *indexStrings;
@property (nonatomic, assign, readonly) BOOL fromServer;

- (NSArray *)coordinates;
- (CLLocationCoordinate2D)CLLCoordinate;

@end
#endif