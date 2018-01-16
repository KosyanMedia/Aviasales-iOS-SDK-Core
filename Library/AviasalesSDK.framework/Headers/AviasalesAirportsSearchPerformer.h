//
//  AviasalesAirportsSearchPerformer.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>


typedef NS_OPTIONS(NSUInteger, APISearchLocationType) {
    APISearchLocationTypeAirport = 1 << 0,
    APISearchLocationTypeCity = 1 << 1,
    APISearchLocationTypeCountry = 1 << 2
};

@class AviasalesAirportsSearchPerformer;
@protocol AviasalesSearchPerformerDelegate;
@protocol JRSDKLocation;


/**
 `AviasalesAirportsSearchPerformer` is used to perform searches on airports. Search is processed in 2 stages: local and remote searches
 */
@interface AviasalesAirportsSearchPerformer : NSObject

/**
 *  Instantiates the search performer
 *
 *  @param type An object that specify which kind of location(airports, cities, countries) need to be find
 *
 *  @param delegate An object that will handle results of search routine
 *
 *  @return `AviasalesAirportsSearchPerformer` instance
 */
- (instancetype)initWithSearchLocationType:(APISearchLocationType)type delegate:(id<AviasalesSearchPerformerDelegate>)delegate;

/**
 *  Starts search by the passed string
 *
 *  @param searchString String to search airport with
 */
- (void)searchAirportsWithString:(NSString *)searchString;

/**
 *  Cancels the current search
 */
- (void)cancelSearch;

@end

/**
 *  Protocol should be conformed by the `AviasalesAirportsSearchPerformer` delegate
 */
@protocol AviasalesSearchPerformerDelegate <NSObject>

/**
 *  The method may be called several times with different airports lists. For example the first time list contains the local results and the second time both local and remote results
 *
 *  @param airportsSearchPerformer The search performer itself
 *  @param locations               Found locations list (Airports, Cities, Countries)
 *  @param final                   Flag that indicates that the passed list is the final result or not
 */
- (void)airportsSearchPerformer:(AviasalesAirportsSearchPerformer *)airportsSearchPerformer didFoundLocations:(NSArray<id<JRSDKLocation>> *)locations final:(BOOL)final;

@end
