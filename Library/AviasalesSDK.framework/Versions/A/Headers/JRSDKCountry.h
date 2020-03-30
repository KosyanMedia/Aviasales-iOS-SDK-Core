//
//  JRSDKCountry.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <AviasalesSDK/JRSDKModelObject.h>
#import <AviasalesSDK/JRSDKLocation.h>
#import <AviasalesSDK/DataDefines.h>

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
 *  Country capital iata
 */
@property (nonatomic, copy, nullable) JRSDKIATA capital;

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
