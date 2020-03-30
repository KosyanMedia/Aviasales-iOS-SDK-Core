//
//  JRSDKSearchResultBuilder.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

@class JRSDKSearchResultInfo;
@class JRSDKTicket;
@class JRSDKSearchResult;
@class JRSDKPrice;

@interface JRSDKSearchResultBuilder : NSObject

@property (nonatomic, strong, nullable) JRSDKSearchResultInfo *searchResultInfo;
@property (nonatomic, strong, nullable) NSOrderedSet <JRSDKTicket *> *tickets;
@property (nonatomic, strong, nullable) JRSDKPrice *bestPrice;

- (nonnull instancetype)initWithSearchResultToUpdate:(nonnull JRSDKSearchResult *)searchResult;

- (nullable JRSDKSearchResult *)build;

@end
