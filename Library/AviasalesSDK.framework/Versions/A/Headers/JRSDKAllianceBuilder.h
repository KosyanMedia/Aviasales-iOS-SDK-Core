//
//  JRSDKAllianceBuilder.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>
#import <AviasalesSDK/JRSDKAlliance.h>

@interface JRSDKAllianceBuilder : NSObject

@property (nonatomic, retain, nullable) NSString *name;

- (nullable JRSDKAlliance *)build;

@end
