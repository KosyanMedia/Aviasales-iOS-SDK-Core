//
//  JRSDKFlightSegmentBuilder.h
//  AviasalesSDK
//
//  Created by Denis Chaschin on 16.11.16.
//  Copyright © 2016 aviasales. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JRSDKFlightSegmentBuilder : NSObject

@property (nonatomic, retain, nullable) NSOrderedSet <JRSDKFlight *> *flights;

/**
 * Returns flight segment if all properties set up correctly. Nil instead.
 * In debug release assertion will be thrown if properties set up wrongly.
 */
- (nullable JRSDKFlightSegment *)build;

@end
