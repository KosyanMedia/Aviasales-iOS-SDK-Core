//
//  JRSDKSearchResultInfo.h
//  AviasalesSDK
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#if !TARGET_OS_WATCH
#import <AviasalesSDK/JRSDKModelObject.h>
#else
#import <AviasalesWatchSDK/JRSDKModelObject.h>
#endif

/**
 *  Type of search result
 *  JRSDKSearchResultTypeStrict - result only for specific airport
 *  JRSDKSearchResultTypeMetropolitan - result for all airports in city
 */
typedef NS_ENUM(NSInteger, JRSDKSearchResultType) {
    JRSDKSearchResultTypeStrict = 0,
    JRSDKSearchResultTypeMetropolitan = 1
};

@interface JRSDKSearchResultInfo : JRSDKModelObject

/**
 *  Corresponding search info
 */
@property (nonatomic, strong, nonnull) JRSDKSearchInfo *searchInfo;

/**
 *  Identifier of current search. Used in purchase routines
 */
@property (nonatomic, strong, nullable) NSString *searchID;

/**
 *  Type of search result
 */
@property (nonatomic, assign) JRSDKSearchResultType type;

/**
 *  Search date
 */
@property (nonatomic, strong, nullable) NSDate *receivingDate;

/**
 *  Search result is JRSDKSearchResultTypeStrict type
 */
@property (nonatomic, assign, readonly) BOOL isStrict;

@end
