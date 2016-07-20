//
//  AviasalesSDKInitialConfiguration.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

/**
 *  Class used to configure the SDK
 */
@interface AviasalesSDKInitialConfiguration : NSObject

/**
 *  The unique partner token to access APIs. Can be obtained on https://www.travelpayouts.com/
 */
@property (nonatomic, strong, nonnull) NSString *APIToken;

/**
 *  Partner marker that is used to perform searches and purchases. Can be obtained on https://www.travelpayouts.com/
 */
@property (nonatomic, strong, nonnull) NSString *partnerMarker;

/**
 *  The desired search locale
 */
@property (nonatomic, strong, nonnull) NSString *APILocale;


/**
 *  Creates `AviasalesSDKInitialConfiguration` instance ready to pass to `AviasalesSDK setupWithConfiguration:` method
 *
 *  @param APIToken      The unique partner token to access APIs. Can be obtained on https://www.travelpayouts.com/
 *  @param APILocale     The desired search locale
 *  @param partnerMarker Partner marker that is used to perform searches and purchases. Can be obtained on https://www.travelpayouts.com/
 *
 *  @return `AviasalesSDKInitialConfiguration` instance
 */
+ (nonnull instancetype)configurationWithAPIToken:(nonnull NSString *)APIToken APILocale:(nonnull NSString *)APILocale partnerMarker:(nullable NSString *)partnerMarker;

@end
