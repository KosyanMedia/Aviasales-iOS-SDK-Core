//
//  AviasalesTicket.h
//

#import <Foundation/Foundation.h>

@class AviasalesAirport, AviasalesAirline, AviasalesPrice;

/**
 Билет. Содержит всю информацию о перелетах и ценах, по которым можно приобрести билет в различных агентствах.
 */
@interface AviasalesTicket : NSObject

/**
 Минимальная цена на билет в рублях
 */
@property (nonatomic, assign) NSInteger totalRubPrice;

/**
 Минимальная цена на билет в выбранной валюте
 */
@property (nonatomic, readonly) NSNumber *totalPriceInUserCurrency;

/**
 Отформатированная цена с обозначением валюты
 */
@property (nonatomic, readonly) NSString *formattedPrice;

/**
 Массивы перелетов туда (объекты типа AviasalesFlight)
 */
@property (nonatomic, readonly) NSArray *outboundFlights;

/**
 Массивы перелетов обратно (объекты типа AviasalesFlight)
 */
@property (nonatomic, readonly) NSArray *returnFlights;

/**
 Массив вариантов цен на билет (объекты типа AviasalesPrice)
 */
@property (nonatomic, readonly) NSArray *prices;

/**
 Дата отправления
 */
@property (nonatomic, strong) NSDate *outboundDepartureDate;

/**
 Аэропорт отправления
 */
@property (nonatomic, strong) AviasalesAirport *outboundDepartureAirport;

/**
 Дата прибытия
 */
@property (nonatomic, strong) NSDate *outboundArrivalDate;

/**
 Аэропорт прибытия
 */
@property (nonatomic, strong) AviasalesAirport *outboundArrivalAirport;

/**
 Дата отправления обратно
 */
@property (nonatomic, strong) NSDate *returnDepartureDate;

/**
 Аэропорт обратного вылета
 */
@property (nonatomic, strong) AviasalesAirport *returnDepartureAirport;

/**
 Дата прибытия обратно
 */
@property (nonatomic, strong) NSDate *returnArrivalDate;

/**
 Аэропорт возвращения
 */
@property (nonatomic, strong) AviasalesAirport *returnArrivalAirport;

/**
 Суммарная продолжительность перелетов туда (включая пересдаки) в минутах
 */
@property (nonatomic, assign) NSInteger outboundDuration;

/**
 Суммарная продолжительность перелетов обратно (включая пересдаки) в минутах
 */
@property (nonatomic, assign) NSInteger returnDuration;

/**
 Суммарная продолжительность перелетов туда в формате для отображения (формат устанавливается в @c durationFormat синглтона @c AviasalesSDK)
 */
@property (nonatomic, strong) NSString *formattedOutboundDuration;

/**
 Суммарная продолжительность перелетов обратно в формате для отображения (формат устанавливается в @c durationFormat синглтона @c AviasalesSDK)
 */
@property (nonatomic, strong) NSString *formattedReturnDuration;

/**
 Количество перелетов туда
 */
@property (nonatomic, assign) NSInteger numberOfOutboundFlights;

/**
 Количество перелетов обратно
 */
@property (nonatomic, assign) NSInteger numberOfReturnFlights;

/**
 Основная авиавкомпания для данного билета
 */
@property (nonatomic, strong) AviasalesAirline *mainAirline;

/**
 URL для загрузки логотипа основной авиакомпании
 */
@property (nonatomic, readonly) NSURL *mainAirlineLogoURL;

/**
 Самый дешевый вариант перелета для этого билета
 */
- (AviasalesPrice *)getBestPrice;

@end
