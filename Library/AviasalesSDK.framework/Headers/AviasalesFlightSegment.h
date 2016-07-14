//
//  AviasalesFlightSegment.h
//  AviasalesSDK
//
//  Created by Denis Chaschin on 05.05.16.
//  Copyright © 2016 aviasales. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AviasalesSDK/JRSDKFlightSegment.h>
#import <AviasalesSDK/AviasalesFlight.h>

@class AviasalesFlight;

@interface AviasalesFlightSegment : NSObject<JRSDKFlightSegment>

#pragma mark - Protocol read-write redefinitions

@property (nonatomic, retain) id <JRSDKAirline> segmentAirline;
@property (nonatomic, strong) NSOrderedSet <AviasalesFlight *> *flights;
@property (nonatomic, assign) JRSDKFlightDuration totalDuration;
@property (nonatomic, retain) NSNumber *delayDuration;
@property (nonatomic, assign) BOOL overnightStopover;
@property (nonatomic, assign) BOOL transferToAnotherAirport;
@property (nonatomic, retain) NSNumber *departureDateTimestamp;
@property (nonatomic, retain) NSNumber *arrivalDateTimestamp;

@end
