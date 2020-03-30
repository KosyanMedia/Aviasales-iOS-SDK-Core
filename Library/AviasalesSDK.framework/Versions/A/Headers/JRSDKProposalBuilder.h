//
//  JRSDKProposalBuilder.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

@class JRSDKTicket;
@class JRSDKProposalRate;
@class JRSDKProposal;
@class JRSDKGate;
@class JRSDKPrice;

@interface JRSDKProposalBuilder : NSObject

@property (strong, nonatomic, nullable) JRSDKGate *gate;
@property (strong, nonatomic, nullable) JRSDKPrice *price;
@property (strong, nonatomic, nullable) NSString *orderID;
@property (strong, nonatomic, nullable) JRSDKTicket *ticket;
@property (strong, nonatomic, nullable) JRSDKProposalRate *rate;
@property (strong, nonatomic, nullable) NSNumber *availableNumberOfSeats;
@property (strong, nonatomic, nullable) NSString *fareKeyCode;

- (BOOL)canBuild;
- (nullable JRSDKProposal *)build;

@end
