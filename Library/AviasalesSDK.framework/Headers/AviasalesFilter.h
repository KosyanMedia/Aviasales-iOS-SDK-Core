//
//  AviasalesFilter.h
//

#import <Foundation/Foundation.h>
#import "AviasalesTicket.h"
#import "AviasalesSearchResponse.h"

@protocol AviasalesFilterDelegate <NSObject>
@required
- (void)filteringProccessFinished;
- (void)needReloadFilter;
@end

/**
 Класс, отражающий текущие параметры фильтрации
 */
@interface AviasalesFilter: NSObject

@property (nonatomic, weak) id <AviasalesFilterDelegate> delegate;
@property (nonatomic, strong) AviasalesSearchResponse *response;

@property (assign, nonatomic) BOOL filteringInProgress;
@property (assign, nonatomic) BOOL needFiltering;

@property (strong, nonatomic) NSArray *filteredTickets;

@property (assign, nonatomic) BOOL noTransfersTickets;
@property (assign, nonatomic) BOOL oneTransferTickets;
@property (assign, nonatomic) BOOL twoTransfersTickets;
@property (assign, nonatomic) BOOL overnightTransfer;
@property (assign, nonatomic) BOOL mobileWebOnly;

@property (assign, nonatomic) NSInteger currentMaxPrice;
@property (readonly) NSNumber *currentMaxPriceInUserCurrency;

@property (assign, nonatomic) NSInteger currentMaxFlightDuration;

@property (assign, nonatomic) NSInteger currentMinStopFlightDuration;
@property (assign, nonatomic) NSInteger currentMaxStopFlightDuration;

@property (assign, nonatomic) NSInteger currentMinOutboundDepartTime;
@property (assign, nonatomic) NSInteger currentMaxOutboundDepartTime;

@property (assign, nonatomic) NSInteger currentMinReturnDepartTime;
@property (assign, nonatomic) NSInteger currentMaxReturnDepartTime;

@property (assign, nonatomic) NSInteger currentMinOutboundArrivalTime;
@property (assign, nonatomic) NSInteger currentMaxOutboundArrivalTime;

@property (assign, nonatomic) NSInteger currentMinReturnArrivalTime;
@property (assign, nonatomic) NSInteger currentMaxReturnArrivalTime;

@property (strong, nonatomic) NSMutableArray *excludedAlliances;
@property (strong, nonatomic) NSMutableArray *excludedAirlines;
@property (strong, nonatomic) NSMutableArray *excludedAirports;
@property (strong, nonatomic) NSMutableArray *excludedGates;

@end
