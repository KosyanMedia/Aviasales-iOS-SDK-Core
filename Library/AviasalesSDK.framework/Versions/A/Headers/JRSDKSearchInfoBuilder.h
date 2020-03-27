//
//  JRSDKSearchInfoBuilder.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

#import <AviasalesSDK/JRSDKSearchInfo.h>

@interface JRSDKSearchInfoBuilder : NSObject

@property (assign, nonatomic) JRSDKTravelClass travelClass;
@property (assign, nonatomic) NSUInteger adults;
@property (assign, nonatomic) NSUInteger children;
@property (assign, nonatomic) NSUInteger infants;
@property (strong, nonatomic, nullable) NSOrderedSet <JRSDKTravelSegment *> *travelSegments;
@property (nonatomic, strong, nullable) NSString *ticketSignToSearch;

- (BOOL)canBuild;

- (nonnull instancetype)initWithSearchInfoToCopy:(nonnull JRSDKSearchInfo *)searchInfo;

- (nullable JRSDKSearchInfo *)build;

@end
