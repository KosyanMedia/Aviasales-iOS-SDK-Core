//
//  JRSDKProposal+Utils.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

#if TARGET_OS_WATCH
#import <AviasalesWatchSDK/JRSDKModelUtils.h>
#import <AviasalesWatchSDK/DataDefines.h>
#else
#import <AviasalesSDK/JRSDKModelUtils.h>
#import <AviasalesSDK/DataDefines.h>
#endif

typedef NS_OPTIONS(NSUInteger, BaggageFilterValues) {
    BaggageFilterValuesWithBaggage               = 1 << 0,
    BaggageFilterValuesWithoutBaggage            = 1 << 1,
    BaggageFilterValuesNoInformationAboutBaggage = 1 << 2,
    BaggageFilterValuesAny = BaggageFilterValuesWithBaggage | BaggageFilterValuesWithoutBaggage | BaggageFilterValuesNoInformationAboutBaggage
};

@interface JRSDKModelUtils (JRSDKProposal)

/**
 *  Compares two proposals
 *
 *  @param firstProposal  First proposal
 *  @param secondProposal Second proposal
 *
 *  @return Comparison result
 */
+ (NSComparisonResult)compareFirstProposal:(nonnull JRSDKProposal *)firstProposal withSecondOne:(nonnull JRSDKProposal *)secondProposal;

/**
 *  Compares two proposals by price value
 *
 *  @param firstProposal  First proposal
 *  @param secondProposal Second proposal
 *
 *  @return Comparison result
 */
+ (NSComparisonResult)compareByPriceValueFirstProposal:(nonnull JRSDKProposal *)firstProposal withSecondOne:(nonnull JRSDKProposal *)secondProposal;

/**
 *  Checks all flight segment rates in proposal to include baggage
 *
 *  @param proposal Proposal to check baggage for
 *  @param filters Rules to check proposal rates by
 *  @param flightSegmentIndex Flight segment index to check filters for
 *
 *  @return `YES` when proposal rate baggage rules conform to passed BaggageFilterValues, `NO` otherwise
 */
+ (BOOL)proposal:(nonnull JRSDKProposal *)proposal checkBaggageFilters:(BaggageFilterValues)filters forFlightSegmentWithIndex:(NSUInteger)flightSegmentIndex;

/**
 *  Checks all flight segment rates in proposal to include baggage
 *
 *  @param proposal Proposal to check baggage for
 *
 *  @return `YES` when all proposal rate baggage rules include baggage
 */
+ (BOOL)proposalIncludesBaggage:(nonnull JRSDKProposal *)proposal;

@end

@interface JRSDKProposal (Utils)

/**
 *  Checks whether the price can be purchased in credit
 *
 *  @return `YES` if the price can be purchased in credit, `NO` otherwise
 */
- (BOOL)supportsPaymentInCredit;

/**
 *  Check if current price is a non credit price of Andgo.Travel
 */
- (BOOL)isNonCreditAndgoProposal;

/**
 *  Check if current price is a credit price of Andgo.Travel
 */
- (BOOL)isCreditAndgoProposal;

@end
