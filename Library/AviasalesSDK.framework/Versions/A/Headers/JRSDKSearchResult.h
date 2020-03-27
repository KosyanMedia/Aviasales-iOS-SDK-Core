//
//  JRSDKSearchResult.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <AviasalesSDK/JRSDKModelObject.h>

@class JRSDKTicket, JRSDKSearchResultInfo;
@class JRSDKPrice;

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
 *  The cheapest price
 */
@property (nonatomic, strong, nullable) JRSDKPrice *bestPrice;

@end
