//
//  JRSDKTravelSegment+Utils.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>


@interface JRSDKModelUtils(JRSDKTravelSegment)

/**
 *  Checks a set of travel segments to make a complex search
 *
 *  @param travelSegments Set of travel segments to check
 *
 *  @return `YES` when the resulting search info is of complex type, `NO` otherwise
 */
+ (BOOL)isComplexSearchWithTravelSegments:(NSOrderedSet<JRSDKTravelSegment *> *)travelSegments;

@end
