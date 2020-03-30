//
//  JRSDKTransfer.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <AviasalesSDK/AviasalesSDK.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JRSDKTransfer : JRSDKModelObject

/**
 * Airports that take part in the transfer
 */
@property (nonatomic, copy) NSSet<JRSDKIATA> *airports;
/**
 * Transfer duration
 */
@property (nonatomic, assign) NSTimeInterval duration;

/**
 * Country IATA where transfer takes place
 */
@property (nonatomic, copy, nullable) JRSDKIATA countryCode;
/**
 * City IATA where transfer takes place
 */
@property (nonatomic, copy, nullable) JRSDKIATA cityCode;

/**
 * Specifies whether visa is required on the transfer
 */
@property (nonatomic, assign) BOOL isVisaRequired;
/**
 * Specifies whether independent baggage recheck is required on the transfer
 */
@property (nonatomic, assign) BOOL baggageRecheckRequired;

/**
 * Specifies whether independent baggage recheck is required on the transfer
 */
@property (nonatomic, readonly) BOOL hasTransferToAnotherAirport;

@end

NS_ASSUME_NONNULL_END
