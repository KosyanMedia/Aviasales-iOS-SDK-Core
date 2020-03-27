//
//  JRSDKNonFlightablePlaceBuilder.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

@class JRSDKNonFlightablePlace;
@class JRSDKAirport;

@interface JRSDKNonFlightablePlaceBuilder : NSObject

@property (nonatomic, strong, nullable) JRSDKAirport *place;
@property (nonatomic, strong, nullable) NSArray<JRSDKAirport *> *nearestPlaces;

- (BOOL)canBuild;
- (nullable JRSDKNonFlightablePlace *)build;

@end
