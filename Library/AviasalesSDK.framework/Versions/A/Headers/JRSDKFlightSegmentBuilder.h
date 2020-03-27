//
//  JRSDKFlightSegmentBuilder.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

@class JRSDKFlight, JRSDKTransfer;
@class JRSDKFlightSegment, JRSDKSegmentRating;

@interface JRSDKFlightSegmentBuilder : NSObject

@property (nonatomic, retain, nullable) NSOrderedSet <JRSDKFlight *> *flights;
@property (nonatomic, retain, nullable) JRSDKSegmentRating *rating;
@property (nonatomic, copy, nullable) NSArray<JRSDKTransfer *> *transfers;

/**
 * Returns flight segment if all properties set up correctly. Nil instead.
 * In debug release assertion will be thrown if properties set up wrongly.
 */
- (nullable JRSDKFlightSegment *)build;

- (BOOL)canBuild;

@end
