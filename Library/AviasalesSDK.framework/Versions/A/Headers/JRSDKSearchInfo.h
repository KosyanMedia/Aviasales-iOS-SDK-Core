//
//  JRSDKSearchInfo.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <AviasalesSDK/JRSDKModelObject.h>

@class JRSDKTravelSegment, JRSDKTicket, JRSDKSearchResult;

/**
 *  Travel class
 */
typedef NS_ENUM(NSInteger, JRSDKTravelClass) {
    JRSDKTravelClassEconomy = 0,
    JRSDKTravelClassBusiness = 1,
    JRSDKTravelClassPremiumEconomy = 2,
    JRSDKTravelClassFirst = 3
};

@interface JRSDKSearchInfo : JRSDKModelObject

/**
 *  Travel class
 */
@property (nonatomic, assign) JRSDKTravelClass travelClass;

/**
 *  Number of adults
 */
@property (nonatomic, assign) NSUInteger adults;

/**
 *  Number of children
 */
@property (nonatomic, assign) NSUInteger children;

/**
 *  Number of infants
 */
@property (nonatomic, assign) NSUInteger infants;

/**
 *  Travel segments to search
 */
@property (nonatomic, strong, nonnull) NSOrderedSet <JRSDKTravelSegment *> *travelSegments;

/**
 * Save ticket sign here to search
 */
@property (nonatomic, strong, nullable) NSString *ticketSignToSearch;

@end
