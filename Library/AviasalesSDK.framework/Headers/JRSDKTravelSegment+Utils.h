#import <Foundation/Foundation.h>

@protocol JRSDKTravelSegment;

@interface JRSDKModelUtils(JRSDKTravelSegment)
/**
 * Deep copy only those fields that necessary to perform search
 */
+ (id<JRSDKTravelSegment>)copyTravelSegmentForSearch:(id<JRSDKTravelSegment>)src;
+ (BOOL)isComplexSearchWithTravelSegments:(NSOrderedSet<id<JRSDKTravelSegment>> *)travelSegments;
+ (BOOL)travelSegment:(id<JRSDKTravelSegment>)travelSegment1 isEqualToTravelSegment:(id<JRSDKTravelSegment>)travelSegment2;

@end
