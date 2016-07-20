//
//  JRSDKConfigurableTravelSegment.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <AviasalesSDK/JRSDKSearchInfo.h>

/**
 *  Simple implementation of `JRSDKTravelSegment` protocol to configure search parameters. Used to fill `JRSDKConfigurableSearchInfo` `travelSegments` field
 */
@interface JRSDKConfigurableTravelSegment : NSObject <JRSDKTravelSegment>
@property (strong, nonatomic) NSDate *departureDate;
@property (strong, nonatomic) id<JRSDKAirport> destinationAirport;
@property (strong, nonatomic) id<JRSDKAirport> originAirport;
@end
