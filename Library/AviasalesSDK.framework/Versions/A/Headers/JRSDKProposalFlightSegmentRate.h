//
//  JRSDKProposalFlightSegmentRate.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <AviasalesSDK/DataDefines.h>
#import <AviasalesSDK/JRSDKModelObject.h>

@class JRSDKProposalFlightRate;
@class JRSDKFlightSegment;

@interface JRSDKProposalFlightSegmentRate : JRSDKModelObject

+ (nonnull instancetype)unknownRateWithFlightSegment:(nonnull JRSDKFlightSegment *)flightSegment;

/**
 *  Flight rates
 */
@property (nonatomic, retain, nonnull, readonly) NSArray <JRSDKProposalFlightRate *> *flightRates;

@end
