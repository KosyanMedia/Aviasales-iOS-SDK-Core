//
//  AviasalesAirportsGeoSearchPerformer.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

@class AviasalesAirportsGeoSearchPerformer;
@protocol AviasalesAirportsGeoSearchPerformerDelegate;
@protocol JRSDKLocation;


/**
 `AviasalesAirportsGeoSearchPerformer` searches airports and cities close to specified coordinates
 */
@interface AviasalesAirportsGeoSearchPerformer : NSObject

/**
 *  Instantiates the search performer
 *
 *  @param delegate An object that will handle results of search routine
 *
 *  @return `AviasalesAirportsGeoSearchPerformer` instance
 */
- (instancetype)initWithDelegate:(id<AviasalesAirportsGeoSearchPerformerDelegate>)delegate;

/**
 *  Starts search by coordinates
 *
 *  @param latitude Latitude
 *  @param longitude Longitude
 */
- (void)searchAirportsNearLatitude:(double)latitude longitude:(double)longitude;

/**
 *  Cancels the current search
 */
- (void)cancelSearch;

@end

/**
 *  Protocol should be conformed by the `AviasalesAirportsGeoSearchPerformer` delegate
 */
@protocol AviasalesAirportsGeoSearchPerformerDelegate <NSObject>

/**
 *  Called when all airports for the search are loaded
 *
 *  @param airportsSearchPerformer The search performer itself
 *  @param locations               Found locations list (Airports, Cities) sorted by 'searches_count' parameter (the same as popularity) or nil if nothing was found
 */
- (void)airportsGeoSearchPerformer:(AviasalesAirportsGeoSearchPerformer *)airportsSearchPerformer didFoundLocations:(NSArray<id<JRSDKLocation>> *)locations;

@end
