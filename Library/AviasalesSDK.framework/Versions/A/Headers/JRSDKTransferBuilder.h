//
//  JRSDKTransferBuilder.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <AviasalesSDK/AviasalesSDK.h>

@class JRSDKTransfer;

@interface JRSDKTransferBuilder : NSObject

@property (nonatomic, copy, nullable) NSArray<JRSDKIATA> *airports;
@property (nonatomic, copy, nullable) NSNumber *duration;

@property (nonatomic, copy, nullable) JRSDKIATA countryCode;
@property (nonatomic, copy, nullable) JRSDKIATA cityCode;

@property (nonatomic, copy, nullable) NSNumber *isVisaRequired;
@property (nonatomic, copy, nullable) NSNumber *baggageRecheckRequired;

- (BOOL)canBuild;

- (nullable JRSDKTransfer *)build;

@end
