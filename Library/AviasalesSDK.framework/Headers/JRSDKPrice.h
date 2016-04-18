@protocol JRSDKGate;

@protocol JRSDKPrice

@property (nonatomic, retain) id <JRSDKGate> gate;

@property (nonatomic, assign) NSInteger priceInRubblesValue;
@property (nonatomic, retain) NSString *orderID;

@property (nonatomic, retain) NSNumber *creditPayment;
@property (nonatomic, retain) NSNumber *creditPaymentsCount;
@property (nonatomic, retain) NSString *creditPaymentsCurrencyCode;

@end
