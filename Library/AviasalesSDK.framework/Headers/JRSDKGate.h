#if !TARGET_OS_WATCH
#import <AviasalesSDK/DataDefines.h>
#else
#import <AviasalesWatchSDK/DataDefines.h>
#endif

@protocol JRSDKPaymentMethod;

@protocol JRSDKGate <NSObject>
/**
 * Average gate rating (float from 0 upto 5)
 */
@property (nonatomic, retain, readonly) NSNumber *averageRate;

/**
 Код валюты гейта трёхбуквенный код валюты (например: rub, usd, eur)
 */
@property (nonatomic, retain, readonly) JRSDKCurrency currencyCode;

/**
 * Gate identifier
 */
@property (nonatomic, retain, readonly) NSString *gateID;

/**
 * Gate name
 */
@property (nonatomic, strong, readonly) NSString *label;
/**
 * Gate website optimized for mobile
 */
@property (nonatomic, assign, readonly) BOOL isMobileVersion;
@property (nonatomic, retain, readonly) NSSet <id <JRSDKPaymentMethod>> *paymentMethods;
@property (nonatomic, strong, readonly) NSNumber *productivity;
@property (nonatomic, retain, readonly) NSNumber *isAirline;

@end