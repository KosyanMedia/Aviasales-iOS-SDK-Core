//
//  JRSDKModelUtils+JRSDKFlight.h
//  AviasalesSDK
//
//  Created by Ilya Amelchenkov on 24.10.2017.
//  Copyright © 2017 aviasales. All rights reserved.
//

#if !TARGET_OS_WATCH
#import <AviasalesSDK/JRSDKModelUtils.h>
#else
#import <AviasalesWatchSDK/JRSDKModelUtils.h>
#endif

@class JRSDKFlight;

@interface JRSDKModelUtils (JRSDKFlight)

/**
 *  Checks flight to be performed by airplane
 *
 *  @param flight Flight to check
 *
 *  @return `YES` when flight is performed by airplane, `NO` otherwise
 */
+ (BOOL)flightIsPerformedByAirplane:(JRSDKFlight *)flight;

/**
 *  Checks flight to be performed by bus
 *
 *  @param flight Flight to check
 *
 *  @return `YES` when flight is performed by bus, `NO` otherwise
 */
+ (BOOL)flightIsPerformedByBus:(JRSDKFlight *)flight;

/**
 *  Checks flight to be performed by train
 *
 *  @param flight Flight to check
 *
 *  @return `YES` when flight is performed by train, `NO` otherwise
 */
+ (BOOL)flightIsPerformedByTrain:(JRSDKFlight *)flight;

@end
