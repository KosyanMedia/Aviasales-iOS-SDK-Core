#import <Foundation/Foundation.h>

@interface JRSDKProposalBuilder : NSObject

@property (strong, nonatomic, nullable) JRSDKGate *gate;
@property (strong, nonatomic, nullable) JRSDKPrice *price;
@property (strong, nonatomic, nullable) NSString *orderID;
@property (strong, nonatomic, nullable) JRSDKPrice *creditPayment;
@property (strong, nonatomic, nullable) NSNumber *creditPaymentsCount;
@property (strong, nonatomic, nullable) NSNumber *creditGracePeriod;
@property (strong, nonatomic, nullable) NSDate *creditLastPaymentDate;
@property (strong, nonatomic, nullable) NSNumber *creditOverpaymentPercent;
@property (strong, nonatomic, nullable) JRSDKTicket *ticket;
@property (strong, nonatomic, nullable) JRSDKProposalRate *rate;

- (BOOL)canBuild;
- (nullable JRSDKProposal *)build;

@end
