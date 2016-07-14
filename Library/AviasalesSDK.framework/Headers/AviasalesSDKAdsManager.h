//
//  AviasalesSDKAdsManager.h
//  AviasalesSDK
//
//  Created by Ilya Amelchenkov on 20.06.16.
//  Copyright © 2016 aviasales. All rights reserved.
//

#import <Foundation/Foundation.h>


@protocol JRSDKSearchInfo;
@class AviasalesSDKAdsView;
typedef void(^AviasalesSDKAdsManagerCompletion)(AviasalesSDKAdsView *__nullable adsView, NSError *__nullable error);


@interface AviasalesSDKAdsManager : NSObject

- (void)loadAdsViewForWaitingScreenWithSearchInfo:(nonnull id <JRSDKSearchInfo>)searchInfo completion:(__nonnull AviasalesSDKAdsManagerCompletion)completion;
- (void)loadAdsViewForSearchResultsWithSearchInfo:(nonnull id <JRSDKSearchInfo>)searchInfo completion:(__nonnull AviasalesSDKAdsManagerCompletion)completion;

@end
