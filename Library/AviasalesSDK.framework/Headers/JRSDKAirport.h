//
//  JRSDKAirport.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <MapKit/MapKit.h>
#if !TARGET_OS_WATCH
#import <AviasalesSDK/DataDefines.h>
#import <AviasalesSDK/JRSDKModelObject.h>
#import <AviasalesSDK/JRSDKLocation.h>
#else
#import <AviasalesWatchSDK/DataDefines.h>
#import <AviasalesWatchSDK/JRSDKModelObject.h>
#import <AviasalesWatchSDK/JRSDKLocation.h>
#endif

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

@interface JRSDKAirport : JRSDKModelObject <JRSDKLocation>

/**
 * Average airline rating (float from 0 to 5)
 */
@property (nonatomic, retain, nullable) NSNumber *averageRate;

/**
 *  City
 */
@property (nonatomic, retain, nullable) NSString *city;
@property (nonatomic, retain, nullable) NSString *cityNameCasePr;
@property (nonatomic, retain, nullable) NSString *cityNameCaseRo;
@property (nonatomic, retain, nullable) NSString *cityNameCaseVi;

/**
 *  Country code
 */
@property (nonatomic, retain, nullable) NSString *countryCode;

/**
 *  Country name
 */
@property (nonatomic, retain, nullable) NSString *countryName;

/**
 *  Airport IATA
 */
@property (nonatomic, strong, nonnull) JRSDKIATA iata;

/**
 *  Parent IATA (e.g. for VKO airport there is MOW parent IATA)
 */
@property (nonatomic, retain, nullable) JRSDKIATA parentIata;

/**
 *  Airport coordinates
 */
@property (nonatomic, retain, nullable) NSNumber *latitude;
@property (nonatomic, retain, nullable) NSNumber *longitude;

/**
 *  Airport time zone
 */
@property (nonatomic, strong, nullable) NSTimeZone *timeZone;

/**
 *  Airport name
 *  
 *  @warning May be empty when object represents a metropolitan area
 */
@property (nonatomic, retain, nullable) NSString *airportName;

/**
 *  Whether object represents a metropolitan area
 */
@property (nonatomic, assign) BOOL isCity;

/**
 *  Airport type
 */
@property (nonatomic, assign) JRSDKAirportType airportType;

/**
 *  A list of strings you can search this airport with
 */
@property (nonatomic, retain, nonnull) NSArray <NSString *> *indexStrings;

/**
 *  Whether the object was received from server
 */
@property (nonatomic, assign) BOOL fromServer;

/**
 *  Can make search searchable
 */
@property (nonatomic, assign) BOOL searchable;

/**
 *  Can make flight
 */
@property (nonatomic, assign) BOOL flightable;

/**
 *  Used to sort autocomplete list
 */
@property (nonatomic, assign) NSInteger weight;

/**
 *  Convenient method to get coordinates in different formats
 */
- (nullable NSArray *)coordinates;
- (CLLocationCoordinate2D)CLLCoordinate;

@end
