#import <Foundation/Foundation.h>

@interface JRSDKPriceBuilder : NSObject

@property (strong, nonatomic, nullable) JRSDKCurrency currency;
@property (assign, nonatomic) NSInteger value;

- (BOOL)canBuild;
- (nullable JRSDKPrice *)build;

@end
