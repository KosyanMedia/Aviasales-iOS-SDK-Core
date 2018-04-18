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
#import <AviasalesSDK/JRSDKFlight.h>
#else
#import <AviasalesWatchSDK/JRSDKModelUtils.h>
#import <AviasalesWatchSDK/JRSDKFlight.h>
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
+ (JRSDKSearchInfoType)searchInfoType:(nullable JRSDKSearchInfo *)searchInfo;

/**
 *  Convenient methods to check search info to be of certain type
 */
+ (BOOL)travelSegmentsSetIsDirectReturnFlight:(nullable NSOrderedSet<JRSDKTravelSegment *> *)travelSegments;
+ (BOOL)searchInfoIsDirectReturnFlight:(nullable JRSDKSearchInfo *)searchInfo;
+ (BOOL)isSimpleSearch:(nullable JRSDKSearchInfo *)searchInfo;
+ (BOOL)searchInfoIsComplex:(nullable JRSDKSearchInfo *)searchInfo;
+ (BOOL)isSearchInfoComplexOpenJawSearch:(nullable JRSDKSearchInfo *)searchInfo;

/**
 *  Return date for search info of direct-return type
 */
+ (nullable NSDate *)returnDateForSimpleSearchInSearchInfo:(nonnull JRSDKSearchInfo *)searchInfo;

/**
 *  Calculates total number of passengers
 *
 *  @param searchInfo Search info to calculate number of passengers for
 *
 *  @return Total number of passengers
 */
+ (NSInteger)searchInfoNumberOfPassengers:(nullable JRSDKSearchInfo *)searchInfo;

+ (BOOL)searchInfoIsValidForSearch:(nullable JRSDKSearchInfo *)searchInfo;

+ (nonnull NSString *)flightCodeWithOperatingAirline:(nullable NSString *)operatingAirlineIATA flightNumber:(nullable NSString *)number searchInfo:(nullable JRSDKSearchInfo *)searchInfo;

@end

#endif
