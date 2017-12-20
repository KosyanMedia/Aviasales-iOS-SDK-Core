//
//  JRSDKCountry.h
//  AviasalesSDK
//
//  Created by Oleg on 19/01/2017.
//  Copyright © 2017 aviasales. All rights reserved.
//

#if !TARGET_OS_WATCH
#import <AviasalesSDK/JRSDKModelObject.h>
#import <AviasalesSDK/JRSDKLocation.h>
#else
#import <AviasalesWatchSDK/JRSDKModelObject.h>
#import <AviasalesWatchSDK/JRSDKLocation.h>
#endif

@interface JRSDKCountry : JRSDKModelObject <JRSDKLocation>

/**
 *  Country name
 */
@property (nonatomic, copy, nonnull) NSString *name;

/**
 *  Country code
 */
@property (nonatomic, copy, nonnull) NSString *code;

/**
 *  Can make search searchable
 */
@property (nonatomic, assign) BOOL searchable;

/**
 *  Can make flight
 */
@property (nonatomic, assign) BOOL flightable;

/**
 *  Whether the object was received from server
 */
@property (nonatomic, assign) BOOL fromServer;

/**
 *  A list of strings you can search this airport with
 */
@property (nonatomic, retain, nonnull) NSArray <NSString *> *indexStrings;

/**
 *  Used to sort autocomplete list
 */
@property (nonatomic, assign) NSInteger weight;

@end
