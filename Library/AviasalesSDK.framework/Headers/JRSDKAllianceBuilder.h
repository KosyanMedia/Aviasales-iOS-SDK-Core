//
//  JRSDKAllianceBuilder.h
//  AviasalesSDK
//
//  Created by Denis Chaschin on 17.11.16.
//  Copyright © 2016 aviasales. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JRSDKAllianceBuilder : NSObject

@property (nonatomic, retain, nullable) NSString *name;

- (nullable JRSDKAlliance *)build;

@end
