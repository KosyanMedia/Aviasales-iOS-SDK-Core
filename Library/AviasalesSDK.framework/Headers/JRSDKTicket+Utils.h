//
//  JRSDKTicket+Utils.h
//  AviasalesSDK
//
//  Created by Denis Chaschin on 25.04.16.
//  Copyright © 2016 Go Travel Un Limited. All rights reserved.
//

#if TARGET_OS_WATCH
#import <AviasalesWatchSDK/JRSDKModelUtils.h>
#else
#import <AviasalesSDK/JRSDKModelUtils.h>
#endif

@protocol JRSDKTicket;
@protocol JRSDKPrice;

@interface JRSDKModelUtils (JRSDKTicket)

+ (id<JRSDKPrice>)ticketMinPrice:(id<JRSDKTicket>)ticket;
+ (id<JRSDKPrice>)ticketCreditPrice:(id<JRSDKTicket>)ticket;
+ (BOOL)allSegmentsAreDirectFlights:(id<JRSDKTicket>)ticket;
+ (id<JRSDKTicket>)ticketWithMinPriceFrom:(NSSet<id<JRSDKTicket>> *)ticketSet;
+ (BOOL)isTicket:(id<JRSDKTicket>)firstTicket theSameAs:(id<JRSDKTicket>)secondTicket;
    
@end
