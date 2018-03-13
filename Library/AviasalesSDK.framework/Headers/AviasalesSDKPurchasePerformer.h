//
//  AviasalesSDKPurchasePerformer.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>
#import "JRSDKProposal.h"

@protocol AviasalesSDKPurchasePerformerDelegate;

/**
 Class used to create an `NSURLRequest` that loads an agency website to purchase a ticket on
 */
@interface AviasalesSDKPurchasePerformer : NSObject

/**
 *  Creates `AviasalesSDKPurchasePerformer` instance
 *
 *  @param proposal    Proposal that you want to purchase
 *  @param searchId Unique search identifier that can be found in `JRSDKSearchResult *` `searchID` field
 *
 *  @return `AviasalesSDKPurchasePerformer` instance
 */
- (instancetype)initWithProposal:(JRSDKProposal *)proposal searchId:(NSString *)searchId;

/**
 *  Starts the routine
 *
 *  @param delegate An object that will handle the routine results
 */
- (void)performWithDelegate:(id <AviasalesSDKPurchasePerformerDelegate>)delegate;

/**
 *  Cancels the routine
 */
- (void)cancel;

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
 *  @param clickID `NSString` instance that is identifies ongoing purchase
 */
- (void)purchasePerformer:(AviasalesSDKPurchasePerformer *)performer didFinishWithURLRequest:(NSURLRequest *)URLRequest clickID:(NSString *)clickID;

/**
 *  Method gets called when the `NSURLRequest` did fail to create
 *
 *  @param performer `AviasalesSDKPurchasePerformer` instance that performs the routine
 *  @param error     `NSError` instance
 */
- (void)purchasePerformer:(AviasalesSDKPurchasePerformer *)performer didFailWithError:(NSError *)error;

@end
