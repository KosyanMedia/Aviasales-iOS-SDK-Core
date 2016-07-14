//
//  AviasalesGate.h
//

#import <Foundation/Foundation.h>
#import <AviasalesSDK/JRSDKGate.h>

/**
 Гейт: авиакомпания или агентство, в котором можно приобрести билет
 */
@interface AviasalesGate : NSObject <JRSDKGate>

#pragma mark - Protocol read-write redefinitions

@property (nonatomic, retain) NSNumber *averageRate;
@property (nonatomic, retain) JRSDKCurrency currencyCode;
@property (nonatomic, retain) NSString *gateID;
@property (nonatomic, strong) NSString *label;
@property (nonatomic, assign) BOOL isMobileVersion;
@property (nonatomic, retain) NSSet <id <JRSDKPaymentMethod>> *paymentMethods;
@property (nonatomic, strong) NSNumber *productivity;
@property (nonatomic, retain) NSNumber *isAirline;

@end
