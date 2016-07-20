//
//  JRSDKSearchInfo+Utils.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

#if !TARGET_OS_WATCH
#import <AviasalesSDK/JRSDKModelUtils.h>
#import <AviasalesSDK/JRSDKSearchInfo.h>
#else
#import <AviasalesWatchSDK/JRSDKModelUtils.h>
#import <AviasalesWatchSDK/JRSDKSearchInfo.h>
#endif


#ifndef JRSDKSearchInfo_Utils_h
#define JRSDKSearchInfo_Utils_h

/**
 *  Search info type depending of the travel segments configuration
 */
typedef NS_ENUM(NSUInteger, JRSDKSearchInfoType) {
    JRSDKSearchInfoOneWayType          = 0,
    JRSDKSearchInfoDirectReturnType    = 1,
    JRSDKSearchInfoComplexType         = 2
};

@interface JRSDKModelUtils(JRSDKSearchInfo)
/**
 *  Calculates search info type
 *
 *  @param searchInfo Search info to calculate type for
 *
 *  @return The resulting type
 */
+ (JRSDKSearchInfoType)searchInfoType:(id<JRSDKSearchInfo>)searchInfo;

/**
 *  Convenient methods to check search info to be of certain type
 */
+ (BOOL)searchInfoIsDirectReturnFlight:(id<JRSDKSearchInfo>)searchInfo;
+ (BOOL)isSimpleSearch:(id<JRSDKSearchInfo>)searchInfo;
+ (BOOL)searchInfoIsComplex:(id<JRSDKSearchInfo>)searchInfo;
+ (BOOL)isSearchInfoComplexOpenJawSearch:(id<JRSDKSearchInfo>)searchInfo;

/**
 *  Calculates total number of passengers
 *
 *  @param searchInfo Search info to calculate number of passengers for
 *
 *  @return Total number of passengers
 */
+ (NSInteger)searchInfoNumberOfPassengers:(id<JRSDKSearchInfo>)searchInfo;

/**
 *  Copies a source search info into new object to perform a search
 *
 *  @param src Search info to copy
 *
 *  @return New search info
 */
+ (id<JRSDKSearchInfo>)copySearchInfoForSearch:(id<JRSDKSearchInfo>)src;

@end

#endif
