//
//  JRSDKAirport.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <MapKit/MapKit.h>
#if !TARGET_OS_WATCH
#import <AviasalesSDK/DataDefines.h>
#else
#import <AviasalesWatchSDK/DataDefines.h>
#endif

#ifndef JRSDKAirport_h
#define JRSDKAirport_h

/**
 *  All possible airport types
 */
typedef NS_ENUM(NSUInteger, JRSDKAirportType) {
    /**
     *  Airport
     */
    JRSDKAirportTypeAirport = 0,
    /**
     *  Railway station
     */
    JRSDKAirportTypeRailwayStation
};

@protocol JRSDKAirport <NSObject>

/**
 * Average airline rating (float from 0 to 5)
 */
@property (nonatomic, retain, readonly) NSNumber *averageRate;

/**
 *  City
 */
@property (nonatomic, retain, readonly) NSString *city;
@property (nonatomic, retain, readonly) NSString *cityNameCasePr;
@property (nonatomic, retain, readonly) NSString *cityNameCaseRo;
@property (nonatomic, retain, readonly) NSString *cityNameCaseVi;

/**
 *  Country
 */
@property (nonatomic, retain, readonly) NSString *country;

/**
 *  Airport IATA
 */
@property (nonatomic, strong, readonly) JRSDKIATA iata;

/**
 *  Parent IATA (e.g. for VKO airport there is MOW parent IATA)
 */
@property (nonatomic, retain, readonly) JRSDKIATA parentIata;

/**
 *  Airport coordinates
 */
@property (nonatomic, retain, readonly) NSNumber *latitude;
@property (nonatomic, retain, readonly) NSNumber *longitude;

/**
 *  Airport time zone
 */
@property (nonatomic, strong, readonly) NSTimeZone *timeZone;

/**
 *  Airport name
 *  
 *  @warning May be empty when object represents a metropolitan area
 */
@property (nonatomic, retain, readonly) NSString *airportName;

/**
 *  Number of searches that represents airport popularity
 */
@property (nonatomic, assign, readonly) NSInteger numberOfSearches;

/**
 *  Whether object represents a metropolitan area
 */
@property (nonatomic, assign, readonly) BOOL isCity;

/**
 *  Airport type
 */
@property (nonatomic, assign, readonly) JRSDKAirportType airportType;

/**
 *  A list of strings you can search this airport with
 */
@property (nonatomic, retain, readonly) NSArray <NSString *> *indexStrings;

/**
 *  Whether the object was received from server
 */
@property (nonatomic, assign, readonly) BOOL fromServer;

/**
 *  Convenient method to get coordinates in different formats
 */
- (NSArray *)coordinates;
- (CLLocationCoordinate2D)CLLCoordinate;

@end
#endif