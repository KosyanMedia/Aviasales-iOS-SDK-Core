//
//  JRSDKProposalRate.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <AviasalesSDK/DataDefines.h>
#import <AviasalesSDK/JRSDKModelObject.h>

@class JRSDKProposalFlightSegmentRate;
@class JRSDKTicket;

@interface JRSDKProposalRate : JRSDKModelObject

+ (nonnull instancetype)unknownRateWithTicket:(nonnull JRSDKTicket *)ticket;

/**
 *  Flight segment rates
 */
@property (nonatomic, retain, nonnull, readonly) NSArray <JRSDKProposalFlightSegmentRate *> *flightSegmentRates;

@end
