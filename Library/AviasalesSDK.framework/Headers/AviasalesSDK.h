//
//  AviasalesSDK.h
//
//  v2.0
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <UIKit/UIKit.h>

/**
 *  Aviasales SDK version number
 */
FOUNDATION_EXPORT const double AviasalesSDKVersionNumber;

/**
 *  Aviasales SDK version string
 */
FOUNDATION_EXPORT const unsigned char AviasalesSDKVersionString[];

/**
 *  Initialization headers
 */
#import <AviasalesSDK/AviasalesSDKInitialConfiguration.h>

/**
 *  Services headers
 */
#import <AviasalesSDK/JRSDKServerAPIError.h>
#import <AviasalesSDK/AviasalesSDKPurchasePerformer.h>
#import <AviasalesSDK/AviasalesAirportsStorageProtocol.h>
#import <AviasalesSDK/AviasalesSDKAdsManager.h>
#import <AviasalesSDK/AviasalesSDKAdsView.h>
#import <AviasalesSDK/AviasalesNearestAirportsManager.h>
#import <AviasalesSDK/AviasalesAirportsSearchPerformer.h>
#import <AviasalesSDK/AviasalesAirportsGeoSearchPerformer.h>
#import <AviasalesSDK/JRSDKSearchPerformer.h>

/**
 *  Utils headers
 */
#import <AviasalesSDK/JRSDKModelUtils.h>
#import <AviasalesSDK/JRSDKAirline+Utils.h>
#import <AviasalesSDK/JRSDKTicket+Utils.h>
#import <AviasalesSDK/JRSDKProposal+Utils.h>
#import <AviasalesSDK/JRSDKPrice+Utils.h>
#import <AviasalesSDK/JRSDKSearchInfo+Utils.h>
#import <AviasalesSDK/JRSDKFlightSegment+Utils.h>
#import <AviasalesSDK/JRSDKAirport+Utils.h>
#import <AviasalesSDK/JRSDKTravelSegment+Utils.h>
#import <AviasalesSDK/JRSDKCurrency+Utils.h>
#import <AviasalesSDK/JRSDKBaggageRule+Utils.h>
#import <AviasalesSDK/AviasalesNumberUtil.h>
#import <AviasalesSDK/NSDate+AviasalesCoding.h>

/**
 *  Model headers
 */
#import <AviasalesSDK/JRSDKLocation.h>
#import <AviasalesSDK/DataDefines.h>
#import <AviasalesSDK/JRSDKModelObject.h>
#import <AviasalesSDK/JRSDKAirline.h>
#import <AviasalesSDK/JRSDKAirport.h>
#import <AviasalesSDK/JRSDKCountry.h>
#import <AviasalesSDK/JRSDKAlliance.h>
#import <AviasalesSDK/JRSDKCurrencyRate.h>
#import <AviasalesSDK/JRSDKFlight.h>
#import <AviasalesSDK/JRSDKFlightSegment.h>
#import <AviasalesSDK/JRSDKGate.h>
#import <AviasalesSDK/JRSDKPaymentMethod.h>
#import <AviasalesSDK/JRSDKProposal.h>
#import <AviasalesSDK/JRSDKPrice.h>
#import <AviasalesSDK/JRSDKSearchInfo.h>
#import <AviasalesSDK/JRSDKSearchResultInfo.h>
#import <AviasalesSDK/JRSDKSearchResult.h>
#import <AviasalesSDK/JRSDKTicket.h>
#import <AviasalesSDK/JRSDKTravelSegment.h>
#import <AviasalesSDK/JRSDKBaggageRule.h>
#import <AviasalesSDK/JRSDKProposalRate.h>
#import <AviasalesSDK/JRSDKProposalFlightSegmentRate.h>
#import <AviasalesSDK/JRSDKProposalFlightRate.h>

/**
 * Model builders headers
 */

#import <AviasalesSDK/JRSDKTicketBuilder.h>
#import <AviasalesSDK/JRSDKProposalBuilder.h>
#import <AviasalesSDK/JRSDKPriceBuilder.h>
#import <AviasalesSDK/JRSDKGateBuilder.h>
#import <AviasalesSDK/JRSDKPaymentMethodFactory.h>
#import <AviasalesSDK/JRSDKSearchInfoBuilder.h>
#import <AviasalesSDK/JRSDKTravelSegmentBuilder.h>
#import <AviasalesSDK/JRSDKFlightSegmentBuilder.h>
#import <AviasalesSDK/JRSDKAirlineBuilder.h>
#import <AviasalesSDK/JRSDKAllianceBuilder.h>
#import <AviasalesSDK/JRSDKBaggageRuleBuilder.h>
#import <AviasalesSDK/JRSDKAirportBuilder.h>
#import <AviasalesSDK/JRSDKCountryBuilder.h>
#import <AviasalesSDK/JRSDKFlightBuilder.h>
#import <AviasalesSDK/JRSDKSearchResultBuilder.h>
#import <AviasalesSDK/JRSDKSearchResultInfoBuilder.h>
#import <AviasalesSDK/JRSDKProposalRateBuilder.h>
#import <AviasalesSDK/JRSDKProposalFlightSegmentRateBuilder.h>
#import <AviasalesSDK/JRSDKProposalFlightRateBuilder.h>


/**
 *  Notification is posted when currency code is being changed
 */
extern NSString * _Nonnull const kAviasalesCurrencyDidUpdateNotificationName;


/**
 *  `AviasalesSDK` class is an entry point for the SDK. In general you should start with snippet below:
 *
 *  | AviasalesSDKInitialConfiguration *configuration = [AviasalesSDKInitialConfiguration configurationWithAPIToken:##YOUR_API_TOKEN##
 *  |                                                                                                     APILocale:[NSLocale currentLocale].localeIdentifier
 *  |                                                                                                 partnerMarker:##YOUR_PARTNER_MARKER##];
 *  | [AviasalesSDK setupWithConfiguration:configuration];
 *
 *  From this point the SDK is configured and ready-to-use. You can access it by calling
 *
 *  | [AviasalesSDK sharedInstance]
 */
@interface AviasalesSDK : NSObject

/**
 *  Configures the SDK
 *
 *  @param configuration The configuration object that contains your API token, partner marker and desired locale. See <AviasalesSDK/AviasalesSDKInitialConfiguration.h>
 */
+ (void)setupWithConfiguration:(nonnull AviasalesSDKInitialConfiguration *)configuration;

/**
 *  Returns SDK singleton instance
 *
 *  @return `AviasalesSDK` instance
 *
 *  @warning You should call this method only after SDK was configured by calling +setupWithConfiguration: method
 */
+ (nonnull AviasalesSDK *)sharedInstance;

/**
 *  Object that used to store and fetch airport objects. Generally used in airports picker. See <AviasalesSDK/AviasalesAirportsStorageProtocol.h>
 */
@property (nonatomic, strong, nonnull) id<AviasalesAirportsStorageProtocol> airportsStorage;

/**
 *  Object that used to define the nearest airports to current user location. See <AviasalesSDK/AviasalesNearestAirportsManager.h>
 */
@property (nonatomic, strong, nonnull) AviasalesNearestAirportsManager *nearestAirportsManager;

/**
 *  Object that used to display ads. See <AviasalesSDK/AviasalesSDKAdsManager.h>
 */
@property (nonatomic, strong, nonnull) AviasalesSDKAdsManager *adsManager;

/**
 *  Partner sub marker is appended to an SDK user marker and can be used to differentiate users. You can fill it with a unique `NSString` for each user
 *  and the resulting marker will be like "##YOUR_PARTNER_MARKER##.##PARTNER_SUB_MARKER##.##THE_REST_OF_THE_MARKER##"
 */
@property (nonatomic, strong, nullable) NSString *partnerSubMarker;

/**
 *  All available currency codes list in 3-letter format. See <AviasalesSDK/DataDefines.h> for `JRSDKCurrency` type definition
 */
@property (nonatomic, readonly, nonnull) NSArray <JRSDKCurrency> *availableCurrencyCodes;

/**
 *  Current selected currency code
 */
@property (nonatomic, readonly, nonnull) JRSDKCurrency currencyCode;

/**
 *  Configures the currency code to use
 *
 *  @param currencyCode The desired currency code
 *
 *  @return `YES` if the currency was successfully configured, `NO` otherwise
 *
 *  @warning Will return `NO` if no rates for the passed currency code available
 */
- (BOOL)updateCurrencyCode:(nonnull JRSDKCurrency)currencyCode;

/**
 *  Instantiates `JRSDKSearchPerformer` object. This method is the entry point to perform a search. See <AviasalesSDK/JRSDKSearchPerformer.h> for the following actions
 *
 *  @return `JRSDKSearchPerformer` instance
 */
- (nonnull JRSDKSearchPerformer *)createSearchPerformer;

@end
