@protocol JRSDKAirport, JRSDKFlightSegment, JRSDKAirline;

@protocol JRSDKFlight <NSObject>

/**
 Воздушное судно, совершающее рейс
 */
@property (nonatomic, retain, readonly) NSString *aircraft;
/**
 Дата прибытия
 */
@property (nonatomic, retain, readonly) NSDate *arrivalDate;
/**
 Продолжительность пересадки ПЕРЕД рейсом в минутах
 */
@property (nonatomic, retain, readonly) NSNumber *delay;
/**
 Дата отправления
 */
@property (nonatomic, retain, readonly) NSDate *departureDate;
/**
 Продолжительность перелета
 */
@property (nonatomic, retain, readonly) NSNumber *duration;
/**
 Номер рейса
 */
@property (nonatomic, retain, readonly) NSString *number;
/**
 Авиакомпания, совершающая перелёт
 */
@property (nonatomic, retain, readonly) id <JRSDKAirline> airline;
/**
 Пункт вылета
 */
@property (nonatomic, retain, readonly) id <JRSDKAirport> originAirport;
/**
 Пункт назначения
 */
@property (nonatomic, retain, readonly) id <JRSDKAirport> destinationAirport;
/**
Авиакомпания, фактически совершающая перелёт
 */
@property (nonatomic, retain, readonly) id<JRSDKAirline> operatingAirline;
@end
