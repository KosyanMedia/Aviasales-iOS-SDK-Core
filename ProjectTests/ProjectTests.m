//
//  ProjectTests.m
//  ProjectTests
//
//  Created by Denis Chaschin on 18.04.16.
//  Copyright © 2016 Aviasales. All rights reserved.
//

#import <XCTest/XCTest.h>

static inline NSBundle *AviasalesBundle(){
    return [NSBundle mainBundle];
}

@interface ProjectTests : XCTestCase

@end

@implementation ProjectTests

- (void)setUp {
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}


- (void)testResourcesContainsAllCurrenciesRates {
    XCTAssertNotNil([AviasalesBundle() pathForResource:@"all_currencies_rates" ofType:@"json"]);
}

- (void)testResourcesContainsAirports {
    XCTAssertNotNil([AviasalesBundle() pathForResource:@"airports" ofType:@"json"]);
}

- (void)testResourcesContainsShortAirports {
    XCTAssertNotNil([AviasalesBundle() pathForResource:@"short_airports" ofType:@"json"]);
}
@end
