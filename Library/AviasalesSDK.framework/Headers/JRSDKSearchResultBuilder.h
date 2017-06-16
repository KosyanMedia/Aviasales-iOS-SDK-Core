//
//  JRSDKSearchResultBuilder.h
//  AviasalesSDK
//
//  Created by Denis Chaschin on 17.11.16.
//  Copyright © 2016 aviasales. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JRSDKSearchResultBuilder : NSObject

@property (nonatomic, strong, nullable) JRSDKSearchResultInfo *searchResultInfo;
@property (nonatomic, strong, nullable) NSOrderedSet <JRSDKTicket *> *tickets;
@property (nonatomic, strong, nullable) JRSDKPrice *bestPrice;

- (nonnull instancetype)initWithSearchResultToUpdate:(nonnull JRSDKSearchResult *)searchResult;

- (nullable JRSDKSearchResult *)build;

@end
