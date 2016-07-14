//
//  AviasalesTicket.h
//

#import <Foundation/Foundation.h>
#import <AviasalesSDK/JRSDKTicket.h>
#import <AviasalesSDK/AviasalesPrice.h>
#import <AviasalesSDK/AviasalesFlightSegment.h>
#import <AviasalesSDK/AviasalesAirline.h>
#import <AviasalesSDK/AviasalesAirport.h>


/**
 Билет. Содержит всю информацию о перелетах и ценах, по которым можно приобрести билет в различных агентствах.
 */
@interface AviasalesTicket : NSObject <JRSDKTicket>

/**
 Минимальная цена на билет в рублях
 */
@property (nonatomic, assign) NSInteger totalRubPrice;

/**
 Минимальная цена на билет в выбранной валюте
 */
@property (nonatomic, readonly) NSNumber *totalPriceInUserCurrency DEPRECATED_ATTRIBUTE;

/**
 Дата отправления
 */
@property (nonatomic, strong, readonly) NSDate *outboundDepartureDate;

/**
 Аэропорт отправления
 */
@property (nonatomic, strong, readonly) AviasalesAirport *outboundDepartureAirport;

/**
 Дата прибытия
 */
@property (nonatomic, strong, readonly) NSDate *outboundArrivalDate;

/**
 Аэропорт прибытия
 */
@property (nonatomic, strong, readonly) AviasalesAirport *outboundArrivalAirport;

/**
 Дата отправления обратно
 */
@property (nonatomic, strong, readonly) NSDate *returnDepartureDate;

/**
 Аэропорт обратного вылета
 */
@property (nonatomic, strong, readonly) AviasalesAirport *returnDepartureAirport;

/**
 Дата прибытия обратно
 */
@property (nonatomic, strong, readonly) NSDate *returnArrivalDate;

/**
 Аэропорт возвращения
 */
@property (nonatomic, strong, readonly) AviasalesAirport *returnArrivalAirport;

/**
 Самый дешевый вариант перелета для этого билета
 */
- (AviasalesPrice *)bestPrice DEPRECATED_ATTRIBUTE;

#pragma mark - Protocol read-write redefinitions

@property (nonatomic, retain) NSOrderedSet <AviasalesFlightSegment *> *flightSegments;
@property (nonatomic, retain) NSOrderedSet <AviasalesPrice *> *prices;
@property (nonatomic, retain) AviasalesAirline *mainAirline;
@property (nonatomic, retain) NSNumber *simpleRating;
@property (nonatomic, retain) NSNumber *totalDuration;
@property (nonatomic, retain) NSNumber *delayDuration;
@property (nonatomic, assign) BOOL hasOvernightStopover;
@property (nonatomic, retain) NSString *sign;
@property (nonatomic, assign) BOOL isFromTrustedGate;
@property (nonatomic, weak) id <JRSDKSearchInfo> searchInfo;

@end
