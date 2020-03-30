//
//  JRSDKSearchResultInfoBuilder.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

#import <AviasalesSDK/JRSDKSearchResultInfo.h>

@interface JRSDKSearchResultInfoBuilder : NSObject

@property (nonatomic, strong, nullable) JRSDKSearchInfo *searchInfo;
@property (nonatomic, strong, nullable) NSString *searchID;
@property (nonatomic, assign) JRSDKSearchResultType type;
@property (nonatomic, strong, nullable) NSDate *receivingDate;

- (nonnull instancetype)initWithSearchResultInfoToUpdate:(nonnull JRSDKSearchResultInfo *)searchResultInfo;

- (nullable JRSDKSearchResultInfo *)build;

@end
