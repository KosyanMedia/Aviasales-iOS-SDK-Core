//
//  AviasalesAirline.h
//

#import <Foundation/Foundation.h>
#import <AviasalesSDK/JRSDKAirline.h>

/**
 Авиакомпания
 */
@interface AviasalesAirline : NSObject <JRSDKAirline>

#pragma mark - Protocol read-write redefinitions

@property (nonatomic, retain) NSNumber *averageRate;
@property (nonatomic, assign) BOOL lowcost;
@property (nonatomic, retain) JRSDKIATA iata;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) id <JRSDKAlliance> alliance;

@end