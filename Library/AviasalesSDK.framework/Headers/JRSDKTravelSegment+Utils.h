//
//  JRSDKTravelSegment+Utils.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

@protocol JRSDKTravelSegment;

@interface JRSDKModelUtils(JRSDKTravelSegment)

/**
 *  Copies travel segment
 *
 *  @param src Travel segment to copy
 *
 *  @return Travel segment copy
 */
+ (id<JRSDKTravelSegment>)copyTravelSegmentForSearch:(id<JRSDKTravelSegment>)src;

/**
 *  Checks a set of travel segments to make a complex search
 *
 *  @param travelSegments Set of travel segments to check
 *
 *  @return `YES` when the resulting search info is of complex type, `NO` otherwise
 */
+ (BOOL)isComplexSearchWithTravelSegments:(NSOrderedSet<id<JRSDKTravelSegment>> *)travelSegments;

/**
 *  Compares two travel segments
 *
 *  @param travelSegment1  First travel segment
 *  @param travelSegment2  Second travel segment
 *
 *  @return `YES` if travel segments are the same, `NO` otherwise
 */
+ (BOOL)travelSegment:(id<JRSDKTravelSegment>)travelSegment1 isEqualToTravelSegment:(id<JRSDKTravelSegment>)travelSegment2;

@end
