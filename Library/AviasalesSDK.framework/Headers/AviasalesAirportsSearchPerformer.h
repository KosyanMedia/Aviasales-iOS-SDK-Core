//
//  AviasalesAirportsSearchPerformer.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

@class AviasalesAirportsSearchPerformer;
@protocol AviasalesSearchPerformerDelegate;

/**
 `AviasalesAirportsSearchPerformer` is used to perform searches on airports. Search is processed in 2 stages: local and remote searches
 */
@interface AviasalesAirportsSearchPerformer : NSObject

/**
 *  Instantiates the search performer
 *
 *  @param delegate An object that will handle results of search routine
 *
 *  @return `AviasalesAirportsSearchPerformer` instance
 */
- (instancetype)initWithDelegate:(id<AviasalesSearchPerformerDelegate>)delegate;

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
 *  @param airports                Found airports list
 *  @param final                   Flag that indicates that the passed list is the final result or not
 */
- (void)airportsSearchPerformer:(AviasalesAirportsSearchPerformer *)airportsSearchPerformer didFoundAirports:(NSArray<id<JRSDKAirport>> *)airports final:(BOOL)final;

@end