//
//  JRSDKTravelSegment+Utils.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>
#import <AviasalesSDK/JRSDKModelUtils.h>

@class JRSDKTravelSegment;


@interface JRSDKModelUtils(JRSDKTravelSegment)

/**
 *  Checks a set of travel segments to make a complex search
 *
 *  @param travelSegments Set of travel segments to check
 *
 *  @return `YES` when the resulting search info is of complex type, `NO` otherwise
 */
+ (BOOL)isComplexSearchWithTravelSegments:(nullable NSOrderedSet<JRSDKTravelSegment *> *)travelSegments;

@end
