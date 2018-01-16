//
//  JRSDKLocation.h
//  AviasalesSDK
//
//  Created by Oleg on 25/01/2017.
//  Copyright © 2017 aviasales. All rights reserved.
//

#ifndef JRSDKLocation_h
#define JRSDKLocation_h


@protocol JRSDKLocation <NSObject>

@property (nonatomic, retain, nonnull) NSArray <NSString *> *indexStrings;
@property (nonatomic, assign) NSInteger weight;
@property (nonatomic, assign) BOOL searchable;
@property (nonatomic, assign) BOOL flightable;
@property (nonatomic, assign) BOOL fromServer;

@end

#endif /* JRSDKLocation_h */
