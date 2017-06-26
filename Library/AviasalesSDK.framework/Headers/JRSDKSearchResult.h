//
//  JRSDKSearchResult.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#if !TARGET_OS_WATCH
#import <AviasalesSDK/JRSDKModelObject.h>
#else
#import <AviasalesWatchSDK/JRSDKModelObject.h>
#endif

@class JRSDKTicket, AviasalesSDKTicketAdsCampaign, JRSDKSearchResultInfo;

@interface JRSDKSearchResult : JRSDKModelObject

/**
 *  Corresponding search result information
 */
@property (nonatomic, strong, nonnull) JRSDKSearchResultInfo *searchResultInfo;

/**
 *  Tickets ordered by price
 */
@property (nonatomic, strong, nonnull) NSOrderedSet <JRSDKTicket *> *tickets;

/**
 *  The cheapiest price
 */
@property (nonatomic, strong, nullable) JRSDKPrice *bestPrice;

@end
