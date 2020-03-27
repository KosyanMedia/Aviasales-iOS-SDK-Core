//
//  JRSDKFlightBuilder.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

#import <AviasalesSDK/JRSDKFlight.h>

@interface JRSDKFlightBuilder : NSObject

@property (nonatomic, retain, nullable) NSString *aircraft;
@property (nonatomic, retain, nullable) NSDate *arrivalDate;
@property (nonatomic, retain, nullable) NSNumber *delay;
@property (nonatomic, retain, nullable) NSDate *departureDate;
@property (nonatomic, retain, nullable) NSNumber *duration;
@property (nonatomic, retain, nullable) NSString *number;
@property (nonatomic, retain, nullable) NSString *equipment;
@property (nonatomic, retain, nullable) JRSDKAirline *airline;
@property (nonatomic, retain, nullable) JRSDKAirline *marketingAirline;
@property (nonatomic, retain, nullable) JRSDKAirport *originAirport;
@property (nonatomic, retain, nullable) JRSDKAirport *destinationAirport;
@property (nonatomic, retain, nullable) NSOrderedSet<JRSDKAirport *> *technicalStops;
@property (nonatomic, retain, nullable) JRSDKFlightInfo *flightInfo;
@property (nonatomic, assign) JRSDKFlightType type;

- (BOOL)canBuild;
- (nullable JRSDKFlight *)build;

@end
