//
//  UserAirportManager.h
//  aviasales
//
//  Created by Frost on 08.11.11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

extern NSString *const _Nonnull kAviasalesNearestAirportsManagerDidUpdateNotificationName;

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, AviasalesNearestAirportsManagerStatus) {
    AviasalesNearestAirportsManagerReadingAirportData,
    AviasalesNearestAirportsManagerReadingError,
    AviasalesNearestAirportsManagerIdle,
};

@interface AviasalesNearestAirportsManager : NSObject

@property (nonatomic, assign, readonly) AviasalesNearestAirportsManagerStatus state;
@property (nonatomic, strong, readonly, nullable) NSArray<id<JRSDKAirport>> *airports;

- (void)updateUserAirport;

@end
