//
//  JRSDKConfigurableSearchInfo.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <AviasalesSDK/JRSDKSearchInfo.h>

/**
 *  Simple implementation of `JRSDKSearchInfo` protocol to configure search parameters
 */
@interface JRSDKConfigurableSearchInfo : NSObject <JRSDKSearchInfo>

@property (assign, nonatomic) JRSDKTravelClass travelClass;
@property (assign, nonatomic) NSInteger adults;
@property (assign, nonatomic) NSInteger children;
@property (assign, nonatomic) NSInteger infants;
@property (strong, nonatomic) NSOrderedSet <id <JRSDKTravelSegment>> *travelSegments;

@end
