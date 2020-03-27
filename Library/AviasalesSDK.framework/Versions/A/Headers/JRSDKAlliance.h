//
//  JRSDKAlliance.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <AviasalesSDK/JRSDKModelObject.h>

@interface JRSDKAlliance : JRSDKModelObject

/**
 *  Alliance name
 */
@property (nonatomic, retain, nonnull) NSString *name;

@end

#define JR_OTHER_ALLIANCES @"OTHER_ALLIANCES"
