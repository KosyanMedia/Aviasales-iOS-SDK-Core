//
//  AviasalesAdvertisementManager.h
//  AviasalesSDK
//
//  Created by Denis Chaschin on 07.04.16.
//  Copyright © 2016 Go Travel Un Limited. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AviasalesAdvertisementManager;

@protocol AviasalesAdvertisementManagerDelegate <NSObject>
/**
 * Метод вызывается, когда реклама загружена
 */
- (void)advertisementManager:(AviasalesAdvertisementManager *)presenter didLoadAdvertisement:(UIView *)advertisement;

@optional
/**
 * Метод вызовется при ошибке загрузки рекламы
 */
- (void)advertisementManager:(AviasalesAdvertisementManager *)presenter didFailAdLoadingWithError:(NSError *)error;
@end

@interface AviasalesAdvertisementManager : NSObject
@property (weak, nonatomic) id<AviasalesAdvertisementManagerDelegate> delegate;
/**
 * Завершает показ рекламы
 */
- (void)cancelAdvertisementPresenting;
@end
