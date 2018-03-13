//
//  JRSDKProposalFlightSegmentRate.h
//  AviasalesSDK
//
//  Created by Ilya Amelchenkov on 21.04.17.
//  Copyright © 2017 aviasales. All rights reserved.
//

#if !TARGET_OS_WATCH
#import <AviasalesSDK/DataDefines.h>
#import <AviasalesSDK/JRSDKModelObject.h>
#else
#import <AviasalesWatchSDK/DataDefines.h>
#import <AviasalesWatchSDK/JRSDKModelObject.h>
#endif

@class JRSDKProposalFlightRate;

@interface JRSDKProposalFlightSegmentRate : JRSDKModelObject

+ (nonnull instancetype)unknownRateWithFlightSegment:(nonnull JRSDKFlightSegment *)flightSegment;

/**
 *  Flight rates
 */
@property (nonatomic, retain, nonnull, readonly) NSArray <JRSDKProposalFlightRate *> *flightRates;

@end
