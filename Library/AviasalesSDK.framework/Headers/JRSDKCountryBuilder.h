//
//  JRSDKCountryBuilder.h
//  AviasalesSDK
//
//  Created by Oleg on 17/01/2017.
//  Copyright © 2017 aviasales. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JRSDKCountryBuilder : NSObject

@property (nonatomic, copy, nullable) NSString *name;
@property (nonatomic, copy, nullable) NSString *code;
@property (nonatomic, strong, nullable) NSArray <NSString *> *indexStrings;
@property (nonatomic, assign) BOOL searchable;
@property (nonatomic, assign) BOOL flightable;
@property (nonatomic, assign) BOOL fromServer;
@property (nonatomic, assign) NSInteger weight;

- (nullable JRSDKCountry *)build;
- (BOOL)canBuild;

@end
