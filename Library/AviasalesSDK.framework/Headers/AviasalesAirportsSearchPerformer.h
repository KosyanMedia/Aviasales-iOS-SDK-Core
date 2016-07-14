//
//  AviasalesSearchPerformer.h
//  AviasalesSDK
//
//  Created by Dmitry Ryumin on 08/06/16.
//  Copyright © 2016 aviasales. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AviasalesAirportsSearchPerformer;

@protocol AviasalesSearchPerformerDelegate <NSObject>

- (void)airportsSearchPerformer:(AviasalesAirportsSearchPerformer *)airportsSearchPerformer didFoundAirports:(NSArray<id<JRSDKAirport>> *)airports final:(BOOL)final;

@end

@interface AviasalesAirportsSearchPerformer : NSObject

- (instancetype)initWithDelegate:(id<AviasalesSearchPerformerDelegate>)delegate;

- (void)searchAirportsWithString:(NSString *)searchString;
- (void)cancelSearch;

@end
