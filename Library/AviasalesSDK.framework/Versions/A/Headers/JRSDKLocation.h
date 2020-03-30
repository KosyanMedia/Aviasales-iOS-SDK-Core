//
//  JRSDKLocation.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
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
