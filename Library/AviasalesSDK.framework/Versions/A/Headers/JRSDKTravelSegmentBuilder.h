//
//  JRSDKTravelSegmentBuilder.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

@class JRSDKTravelSegmentBuilder;
@class JRSDKAirport;
@class JRSDKTravelSegment;

@protocol JRSDKTravelSegmentBuilderDelegate<NSObject>

@required
-(void)travelSegmentBuilder:(nonnull JRSDKTravelSegmentBuilder *)travelSegmentBuilder didSetOriginAirport:(nullable JRSDKAirport *)originAirport;
-(void)travelSegmentBuilder:(nonnull JRSDKTravelSegmentBuilder *)travelSegmentBuilder didSetDestinationAirport:(nullable JRSDKAirport *)destinationAirport;
-(void)travelSegmentBuilder:(nonnull JRSDKTravelSegmentBuilder *)travelSegmentBuilder didSetDepartureDate:(nullable NSDate *)departureDate;

@end

@interface JRSDKTravelSegmentBuilder : NSObject

@property (nonatomic, retain, nullable) NSDate *departureDate;
@property (nonatomic, retain, nullable) JRSDKAirport *originAirport;
@property (nonatomic, retain, nullable) JRSDKAirport *destinationAirport;

- (BOOL)canBuild;

- (nonnull instancetype)initWithTravelSegmentToCopy:(nonnull JRSDKTravelSegment *)travelSegment;

/**
 * Returns travel segment if all properties set up correctly. Nil instead.
 * In debug release assertion will be thrown if properties set up wrongly.
 */
- (nullable JRSDKTravelSegment *)build;

/**
 * Create builder from existing travel segment
 */
- (nullable instancetype)initWithTravelSegment:(nonnull JRSDKTravelSegment *)travelSegment;

@property (nonatomic, weak, nullable) id<JRSDKTravelSegmentBuilderDelegate> delegate;

@end
