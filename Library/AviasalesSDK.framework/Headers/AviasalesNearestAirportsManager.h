//
//  AviasalesNearesAirportsManager.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

/**
 *  Notification with this name is posted via NSNotificationCenter on change of `AviasalesNearestAirportsManager` state
 */
extern NSString *const _Nonnull kAviasalesNearestAirportsManagerDidUpdateNotificationName;

/**
 *  All possible `AviasalesNearestAirportsManager` states
 */
typedef NS_ENUM(NSInteger, AviasalesNearestAirportsManagerStatus) {
    /**
     *  Now trying to get the nearest airports
     */
    AviasalesNearestAirportsManagerReadingAirportData,
    /**
     *  Failed to get the nearest airports
     */
    AviasalesNearestAirportsManagerReadingError,
    /**
     *  No operations run at the moment
     */
    AviasalesNearestAirportsManagerIdle,
};

/**
 *  Object is used to define the nearest airports to current user location
 */
@interface AviasalesNearestAirportsManager : NSObject

/**
 *  Current manager state
 */
@property (nonatomic, assign, readonly) AviasalesNearestAirportsManagerStatus state;

/**
 *  Nearest airports
 *
 *  @warning May be nil if manager did not load the nearest airports yet
 */
@property (nonatomic, strong, readonly, nullable) NSArray<JRSDKAirport *> *airports;

/**
 *  Nearest city
 *
 *  @warning May be nil if manager did not load the nearest airports yet
 */
@property (nonatomic, strong, readonly, nullable) JRSDKAirport *nearestCity;

/**
 *  Forces manager to reload the nearest airports
 */
- (void)updateUserAirport;

@end
