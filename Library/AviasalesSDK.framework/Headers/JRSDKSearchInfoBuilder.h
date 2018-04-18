//
//  JRSDKSearchInfoBuilder.h
//  AviasalesSDK
//
//  Created by Denis Chaschin on 11.10.16.
//  Copyright © 2016 aviasales. All rights reserved.
//

#import <Foundation/Foundation.h>

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
