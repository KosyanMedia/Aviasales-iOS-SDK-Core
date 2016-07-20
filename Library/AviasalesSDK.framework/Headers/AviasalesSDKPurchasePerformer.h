//
//  AviasalesSDKPurchasePerformer.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>
#import <AviasalesSDK/JRSDKPrice.h>

@protocol AviasalesSDKPurchasePerformerDelegate;

/**
 Class used to create an `NSURLRequest` that loads an agency website to purchase a ticket on
 */
@interface AviasalesSDKPurchasePerformer : NSObject

/**
 *  Creates `AviasalesSDKPurchasePerformer` instance
 *
 *  @param price    Price that you want to purchase
 *  @param searchId Unique search identifier that can be found in `id <JRSDKSearchResult>` `searchID` field
 *
 *  @return `AviasalesSDKPurchasePerformer` instance
 */
- (instancetype)initWithPrice:(id <JRSDKPrice>)price searchId:(NSString *)searchId;

/**
 *  Starts the routine
 *
 *  @param delegate An object that will handle the routine results
 */
- (void)performWithDelegate:(id <AviasalesSDKPurchasePerformerDelegate>)delegate;

@end

/**
 *  Protocol that handles `AviasalesSDKPurchasePerformer` results
 */
@protocol AviasalesSDKPurchasePerformerDelegate <NSObject>

/**
 *  Method gets called when the `NSURLRequest` was successfully created
 *
 *  @param performer  `AviasalesSDKPurchasePerformer` instance that performs the routine
 *  @param URLRequest `NSURLRequest` instance that is generally used to load a page in webview
 */
- (void)purchasePerformer:(AviasalesSDKPurchasePerformer *)performer didFinishWithURLRequest:(NSURLRequest *)URLRequest;

/**
 *  Method gets called when the `NSURLRequest` did fail to create
 *
 *  @param performer `AviasalesSDKPurchasePerformer` instance that performs the routine
 *  @param error     `NSError` instance
 */
- (void)purchasePerformer:(AviasalesSDKPurchasePerformer *)performer didFailWithError:(NSError *)error;

@end