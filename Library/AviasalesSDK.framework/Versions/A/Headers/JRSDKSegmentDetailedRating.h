//
//  JRSDKSegmentDetailedRating.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <AviasalesSDK/JRSDKModelObject.h>

@interface JRSDKSegmentDetailedRating : JRSDKModelObject

/**
 *  Duration rating (float from 0 to 10)
 */
@property (nonatomic, strong, nullable, readonly) NSNumber *durationRating;

/**
 *  Transfer rating (float from 0 to 10)
 */
@property (nonatomic, strong, nullable, readonly) NSNumber *transferRating;

/**
 *  Departure time rating (float from 0 to 10)
 */
@property (nonatomic, strong, nullable, readonly) NSNumber *departureTimeRating;

/**
 *  Arrival time rating (float from 0 to 10)
 */
@property (nonatomic, strong, nullable, readonly) NSNumber *arrivalTimeRating;

@end
