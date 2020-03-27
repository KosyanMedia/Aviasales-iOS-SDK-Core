//
//  JRSDKCountryBuilder.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

@class JRSDKCountry;

@interface JRSDKCountryBuilder : NSObject

@property (nonatomic, copy, nullable) NSString *name;
@property (nonatomic, copy, nullable) NSString *code;
@property (nonatomic, copy, nullable) NSString *capital;
@property (nonatomic, strong, nullable) NSArray <NSString *> *indexStrings;
@property (nonatomic, assign) BOOL searchable;
@property (nonatomic, assign) BOOL flightable;
@property (nonatomic, assign) BOOL fromServer;
@property (nonatomic, assign) NSInteger weight;

- (nullable JRSDKCountry *)build;
- (BOOL)canBuild;

@end
