//
//  AviasalesPrice.h
//

#import <Foundation/Foundation.h>
#import <AviasalesSDK/JRSDKPrice.h>

/*
 Вариант цены на билет
 */
@interface AviasalesPrice : NSObject <JRSDKPrice>


/**
 Стоимость билета в установленной валюте (@c currencyCode синглтона @c AviasalesSDK)
 */
@property (nonatomic, strong) NSNumber *priceInUserCurrency;

/**
 Асинхронно возвращает запрос, который необходимо загрузить для перехода на покупку.
 @param completion блок, который будет выполнен в результате операции
 */
- (void)getRedirectRequest:(void(^)(NSURLRequest *request, NSError *error))completion;

#pragma mark - Protocol read-write redefinitions

@property (nonatomic, retain) id <JRSDKGate> gate;
@property (nonatomic, strong) JRSDKCurrency currency;
@property (nonatomic, assign) NSInteger value;
@property (nonatomic, retain) NSString *orderID;
@property (nonatomic, retain) NSNumber *creditPayment;
@property (nonatomic, retain) NSNumber *creditPaymentsCount;
@property (nonatomic, retain) NSString *creditPaymentsCurrencyCode;
@property (nonatomic, weak) id <JRSDKTicket> ticket;

@end
