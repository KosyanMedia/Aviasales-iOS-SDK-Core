//
//  AviasalesSDK.h
//
//  v1.3
//

#import <Foundation/Foundation.h>



#import "AviasalesSearchParams.h"
#import "AviasalesAirport.h"
#import "AviasalesAirport.h"
#import "AviasalesFlight.h"
#import "AviasalesGate.h"
#import "AviasalesPrice.h"
#import "AviasalesSearchResponse.h"
#import "AviasalesTicket.h"
#import "AviasalesAdvertisementManager.h"

@interface AviasalesSDK : NSObject

+ (AviasalesSDK *)sharedInstance;

/**
 Маркер — идентификатор партнера, который используется для осуществления поиска и перехода к покупке
 */
@property (nonatomic, strong) NSString *marker;

/**
 Уникальный токен партнера, который используется для подписывания поискового запроса
 */
@property (nonatomic, strong) NSString *APIToken;

/**
 Предпочитаемая локаль для API поиска (доступные варианты: en, de, en_GB, en_AU, en_CA, en_NZ, en_IE, en_SG, en_IN, pt_PT, pt_BR, fr, es, it, th, pl, pt)
 */
@property (nonatomic, strong) NSString *APILocale;

/**
 Трехзначный код валюты, выбранной пользователем (по умолчанию соответствует выбранной локали)
 */
@property (nonatomic, readonly) NSString *currencyCode;

/**
 Символ или трехзначный код, соответствующий выбранной валюте (по умолчанию соответствует выбранной локали)
 */
@property (nonatomic, readonly) NSString *currencySymbol;

/**
 Формат, в котором будут возвращаться продолжительности перелетов
 (по умолчанию @"%iч %iм")
 */
@property (nonatomic, strong) NSString *durationFormat;

/**
 Обновляет валюту пользователя
 @param currencyCode трёхбуквенный код валюты (например: RUB, USD, EUR)
 @return NO, если курс для заданного кода не может быть найден, иначе YES
 */
- (BOOL)updateCurrencyCode:(NSString *)currencyCode;

/**
 Поиск аэропорта в локальной базе
 @param IATA 
        трёхбуквенный IATA-код аэропорта
 @param completion 
        блок, который будет выполнен по окончании поиска
 */
- (void)requestAirportByIATA:(NSString *)IATA completion:(void(^)(AviasalesAirport *airport, NSError *error))completion;

/**
 Поиск аэропорта в локальной базе
 @param name
        название аэропорта
 @param completion
        блок, который будет выполнен по окончании поиска
 */
- (void)requestAirportByName:(NSString *)name completion:(void(^)(AviasalesAirport *airport, NSError *error))completion;

/**
 Поиск аэропорта по строке в локальной базе. 
 Каждый последующий запрос функции отменяет предыдущий поиск
 @param searchString поисковая строка
 @param completion блок, который будет выполнен по окончании поиска
 */
- (void)searchAirportsWithString:(NSString *)searchString completion:(void(^)(NSArray *airports, NSError *error))completion;

/**
 Поиск аэропорта по строке в локальной базе и на сервере.
 Каждый последующий запрос функции отменяет предыдущий поиск
 @param searchString поисковая строка
 @param localCompletion блок, который будет выполнен по окончании локального поиска
 @param webCompletion блок, который будет выполнен по окончании поиска на сервере
 */
- (void)searchAirportsWithString:(NSString *)searchString localCompletion:(void(^)(NSArray *airports, NSError *error))localCompletion webCompletion:(void(^)(NSArray *airports, NSError *error))webCompletion;

/**
 Поиск аэропорта, ближайшего к геопозиции пользователя
 @param completion блок, который будет выполнен по окончании поиска
 */
- (void)searchNearestAirportsWithCompletionBlock:(void(^)(NSArray *airports, NSError *error))completion;

/**
 Добавление аэропорта в историю поиска
 @param airport Аэропорт, который необходимо добавить в список тех, которые уже искал пользователь
 */
- (void)updateHistoryWithAirport:(AviasalesAirport *)airport;

/**
 @return Массив аэропортов, которые уже искал пользователь
 */
- (NSArray *)airportsSearchHistory;

/**
 Поиск билетов с заданными параметрами
 @param params параметры поиска
 @param completion блок, который будет выполнен по окончании поиска
 */
- (void)searchTicketsWithParams:(AviasalesSearchParams *)params completion:(void(^)(AviasalesSearchResponse *response, NSError *error))completion;

/**
 Отменяет поиск билетов, который был начат с помощью @c searchTicketsWithParams:completion:
 */
- (void)cancelTicketsSearch;
/**
 * Загружает рекламу для показа
 */
- (AviasalesAdvertisementManager *)loadAdvertisementWithSearchParams:(nullable AviasalesSearchParams *)searchParams;
@end
