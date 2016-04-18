//
//  AviasalesPrice.h
//

#import <Foundation/Foundation.h>
#import "AviasalesGate.h"

/*
 Вариант цены на билет
 */
@interface AviasalesPrice : NSObject

/**
 Гейт, который предлагает билет по данной цене
 */
@property (nonatomic, strong) AviasalesGate *gate;

/**
 Стоимость билета в установленной валюте (@c currencyCode синглтона @c AviasalesSDK)
 */
@property (nonatomic, strong) NSNumber *value;

/**
 Асинхронно возвращает запрос, который необходимо загрузить для перехода на покупку.
 @param completion блок, который будет выполнен в результате операции
 */
- (void)getRedirectRequest:(void(^)(NSURLRequest *request, NSError *error))completion;

@end
