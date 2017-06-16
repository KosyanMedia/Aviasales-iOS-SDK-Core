#import <Foundation/Foundation.h>

@interface JRSDKGateBuilder : NSObject

@property (strong, nonatomic, nullable) NSNumber *averageRate;
@property (strong, nonatomic, nullable) JRSDKCurrency currencyCode;
@property (strong, nonatomic, nullable) NSString *gateID;
@property (strong, nonatomic, nullable) NSString *mainGateID;
@property (strong, nonatomic, nullable) NSString *label;
@property (assign, nonatomic) BOOL isMobileVersion;
@property (strong, nonatomic, nullable) NSSet <JRSDKPaymentMethod *> *paymentMethods;
@property (strong, nonatomic, nullable) NSNumber *productivity;
@property (strong, nonatomic, nullable) NSNumber *isAirline;
@property (strong, nonatomic, nullable) NSNumber *supportsAssistedBooking;
@property (strong, nonatomic, nullable) NSDate *responseDate;
@property (strong, nonatomic, nullable) NSSet <JRSDKIATA> *raiseProductivityForAirlineIATAs;

- (nullable JRSDKGate *)build;

@end
