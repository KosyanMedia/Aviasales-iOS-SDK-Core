//
//  AviasalesSDKPurchasePerformer.h
//  AviasalesSDK
//
//  Created by Ilya Amelchenkov on 10.06.16.
//  Copyright © 2016 aviasales. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AviasalesSDK/JRSDKPrice.h>

@protocol AviasalesSDKPurchasePerformerDelegate;


@interface AviasalesSDKPurchasePerformer : NSObject

- (instancetype)initWithPrice:(id <JRSDKPrice>)price searchId:(NSString *)searchId;

- (void)performWithDelegate:(id <AviasalesSDKPurchasePerformerDelegate>)delegate;

@end


@protocol AviasalesSDKPurchasePerformerDelegate <NSObject>

- (void)purchasePerformer:(AviasalesSDKPurchasePerformer *)performer didFinishWithURLRequest:(NSURLRequest *)URLRequest;
- (void)purchasePerformer:(AviasalesSDKPurchasePerformer *)performer didFailWithError:(NSError *)error;

@end