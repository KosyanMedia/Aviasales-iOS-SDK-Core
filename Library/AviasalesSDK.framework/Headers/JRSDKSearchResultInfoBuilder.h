//
//  JRSDKSearchResultInfoBuilder.h
//  AviasalesSDK
//
//  Created by Dmitry Ryumin on 20/01/2017.
//  Copyright © 2017 aviasales. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JRSDKSearchResultInfoBuilder : NSObject

@property (nonatomic, strong, nullable) JRSDKSearchInfo *searchInfo;
@property (nonatomic, strong, nullable) NSString *searchID;
@property (nonatomic, assign) JRSDKSearchResultType type;
@property (nonatomic, strong, nullable) NSDate *receivingDate;

- (nonnull instancetype)initWithSearchResultInfoToUpdate:(nonnull JRSDKSearchResultInfo *)searchResultInfo;

- (nullable JRSDKSearchResultInfo *)build;

@end
