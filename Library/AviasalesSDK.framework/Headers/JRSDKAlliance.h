//
//  JRSDKAlliance.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

@protocol JRSDKAlliance <NSObject>

/**
 *  Alliance name
 */
@property (nonatomic, retain, readonly) NSString *name;

@end

#define JR_OTHER_ALLIANCES @"OTHER_ALLIANCES"