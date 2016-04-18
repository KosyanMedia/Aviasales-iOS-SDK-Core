//
//  AviasalesSearchResponse.h
//

#import <Foundation/Foundation.h>
#import "AviasalesFiltersBoundary.h"
#import "AviasalesPrice.h"

/**
 Ответ поискового сервиса
 */
@interface AviasalesSearchResponse : NSObject

/**
 Массив объектов AviasalesTicket
 */
@property (nonatomic, strong) NSArray *tickets;

/**
 Массив объектов AviasalesAirline, которые пристутствуют в данной выдаче
 */
@property (nonatomic, strong) NSArray *airlines;

/**
 Массив объектов AviasalesAirport, которые пристутствуют в данной выдаче
 */
@property (nonatomic, strong) NSArray *airports;

/**
 Массив объектов AviasalesGate, которые пристутствуют в данной выдаче
 */
@property (nonatomic, strong) NSDictionary *gates;

/**
 Лучшая цена для данной поисковой выдачи
 */
@property (nonatomic, strong) AviasalesPrice *bestPrice;

/**
 Объект, содержащий границы фильтрации для данной поисковой выдачи
 */
@property (nonatomic, strong) AviasalesFiltersBoundary *filtersBoundary;

@end
