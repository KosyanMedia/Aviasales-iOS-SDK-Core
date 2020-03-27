//
//  JRSDKSegmentRating.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <AviasalesSDK/JRSDKModelObject.h>

@class JRSDKSegmentDetailedRating;

@interface JRSDKSegmentRating : JRSDKModelObject

/**
 *  Total value (float from 0 to 10)
 */
@property (nonatomic, strong, nonnull, readonly) NSNumber *total;

/**
 *  Detailed rating
 */
@property (nonatomic, strong, nonnull, readonly) JRSDKSegmentDetailedRating *detailedRating;

@end
