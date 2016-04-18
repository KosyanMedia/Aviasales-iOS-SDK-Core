//
//  AviasalesFiltersBoundary.h
//

#import <Foundation/Foundation.h>

@class AviasalesTicket;

/**
 Класс, содержащий границы фильтрации для определенной выдачи
 */
@interface AviasalesFiltersBoundary : NSObject

@property (strong, nonatomic) NSArray *airlines;
@property (strong, nonatomic) NSArray *alliances;
@property (strong, nonatomic) NSArray *airports;

@property (strong, nonatomic) NSMutableDictionary *minimumPricesForAirlines;
@property (assign, nonatomic) BOOL haveOvernightTransfers;
@property (assign, nonatomic) BOOL haveMobileWeb;

@property (strong, nonatomic) AviasalesTicket *noTransferTicketWithMinimalPrice;
@property (strong, nonatomic) AviasalesTicket *oneTransferTicketWithMinimalPrice;
@property (strong, nonatomic) AviasalesTicket *twoTransfersTicketWithMinimalPrice;

@property (strong, nonatomic) NSArray *gates;

@property (assign, nonatomic) NSUInteger minPrice;
@property (assign, nonatomic) NSUInteger maxPrice;

@property (assign, nonatomic) NSUInteger minFlightDuration;
@property (assign, nonatomic) NSUInteger maxFlightDuration;

@property (assign, nonatomic) NSUInteger minStopDuration;
@property (assign, nonatomic) NSUInteger maxStopDuration;

@property (assign, nonatomic) NSUInteger minOutboundDepartureTime;
@property (assign, nonatomic) NSUInteger maxOutboundDepartureTime;

@property (assign, nonatomic) NSUInteger minReturnDepartureTime;
@property (assign, nonatomic) NSUInteger maxReturnDepartureTime;

@property (assign, nonatomic) NSUInteger minOutboundArrivalTime;
@property (assign, nonatomic) NSUInteger maxOutboundArrivalTime;

@property (assign, nonatomic) NSUInteger minReturnArrivalTime;
@property (assign, nonatomic) NSUInteger maxReturnArrivalTime;

- (void)setTickets:(NSArray *)tickets;
- (void)setAirlines:(NSArray *)airlines;
- (void)setAirports:(NSArray *)airports;

@end
