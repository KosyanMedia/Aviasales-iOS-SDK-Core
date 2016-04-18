@protocol JRSDKPaymentMethod;

@protocol JRSDKGate

@property (nonatomic, retain) NSNumber *averageRate;
@property (nonatomic, retain) NSString *currencyCode;
@property (nonatomic, retain) NSString *gateID;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) NSNumber *mobileVersion;
@property (nonatomic, retain) NSSet <id <JRSDKPaymentMethod>> *paymentMethods;
@property (nonatomic, strong) NSNumber *productivity;
@property (nonatomic, retain) NSNumber *isAirline;

@end