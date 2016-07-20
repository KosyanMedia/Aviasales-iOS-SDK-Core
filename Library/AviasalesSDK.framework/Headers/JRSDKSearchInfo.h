//
//  JRSDKSearchInfo.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

@protocol JRSDKTravelSegment, JRSDKTicket, JRSDKSearchResult;

/**
 *  Travel class
 */
typedef NS_ENUM(NSInteger, JRSDKTravelClass) {
    JRSDKTravelClassEconomy = 0,
    JRSDKTravelClassBusiness = 1,
    JRSDKTravelClassPremiumEconomy = 2,
    JRSDKTravelClassFirst = 3
};

@protocol JRSDKSearchInfo <NSObject>

/**
 *  Travel class
 */
@property (nonatomic, assign, readonly) JRSDKTravelClass travelClass;

/**
 *  Number of adults
 */
@property (nonatomic, assign, readonly) NSInteger adults;

/**
 *  Number of children
 */
@property (nonatomic, assign, readonly) NSInteger children;

/**
 *  Number of infants
 */
@property (nonatomic, assign, readonly) NSInteger infants;

/**
 *  Travel segments to search
 */
@property (nonatomic, retain, readonly) NSOrderedSet <id <JRSDKTravelSegment>> *travelSegments;

/**
 *  Search result that becomes present after `JRSDKSearchPerformer` routines
 */
@property (nonatomic, strong, readonly) id<JRSDKSearchResult> searchResult;

@end
