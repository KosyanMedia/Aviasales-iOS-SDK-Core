//
//  JRSDKFlightBuilder.h
//  AviasalesSDK
//
//  Created by Denis Chaschin on 17.11.16.
//  Copyright © 2016 aviasales. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JRSDKFlightBuilder : NSObject

@property (nonatomic, retain, nullable) NSString *aircraft;
@property (nonatomic, retain, nullable) NSDate *arrivalDate;
@property (nonatomic, retain, nullable) NSNumber *delay;
@property (nonatomic, retain, nullable) NSDate *departureDate;
@property (nonatomic, retain, nullable) NSNumber *duration;
@property (nonatomic, retain, nullable) NSString *number;
@property (nonatomic, retain, nullable) JRSDKAirline *airline;
@property (nonatomic, retain, nullable) JRSDKAirline *operatingAirline;
@property (nonatomic, retain, nullable) JRSDKAirport *originAirport;
@property (nonatomic, retain, nullable) JRSDKAirport *destinationAirport;
@property (nonatomic, retain, nullable) NSOrderedSet<JRSDKAirport *> *technicalStops;

- (nullable JRSDKFlight *)build;

@end
