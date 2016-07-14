#if !TARGET_OS_WATCH
#import <AviasalesSDK/DataDefines.h>
#else
#import <AviasalesWatchSDK/DataDefines.h>
#endif

@protocol JRSDKGate, JRSDKTicket;

@protocol JRSDKPrice <NSObject>
/**
 Гейт, который предлагает билет по данной цене
 */
@property (nonatomic, retain, readonly) id <JRSDKGate> gate;

@property (nonatomic, strong, readonly) JRSDKCurrency currency;
/**
 Цена в соответствующей валюте
 */
@property (nonatomic, assign, readonly) NSInteger value; //TODO: change to double or multiply with 100

@property (nonatomic, retain, readonly) NSString *orderID;

@property (nonatomic, retain, readonly) NSNumber *creditPayment;
@property (nonatomic, retain, readonly) NSNumber *creditPaymentsCount;
@property (nonatomic, retain, readonly) JRSDKCurrency creditPaymentsCurrencyCode;
@property (nonatomic, retain, readonly) NSNumber *creditGracePeriod;
@property (nonatomic, retain, readonly) NSDate *creditLastPaymentDate;
@property (nonatomic, retain, readonly) NSNumber *creditOverpaymentPercent;

@end