//
//  JRSDKSegmentRatingBuilder.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

@class JRSDKSegmentRating;

@interface JRSDKSegmentRatingBuilder : NSObject

@property (nonatomic, strong, nullable) NSNumber *totalRating;
@property (nonatomic, strong, nullable) NSNumber *durationRating;
@property (nonatomic, strong, nullable) NSNumber *transferRating;
@property (nonatomic, strong, nullable) NSNumber *departureTimeRating;
@property (nonatomic, strong, nullable) NSNumber *arrivalTimeRating;

- (BOOL)canBuild;
- (nullable JRSDKSegmentRating *)build;

@end
