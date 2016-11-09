//
//  JRSDKSearchPerformer.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>
#import "DataDefines.h"

@protocol JRSDKSearchInfo, JRSDKTicket, JRSDKSearchResult;
@protocol JRSDKSearchPerformerDelegate;

/**
 *  Average search time from calling `-performSearchWithSearchInfo:...` to receiving `searchPerformer:didFinishRegularSearch:...` callback
 */
extern const NSTimeInterval kJRSDKSearchPerformerAverageSearchTime;

/**
 *  Main object in search routine. You can instantiate it by calling the following code:
 *
 *  | JRSDKSearchPerformer *searchPerformer = [[AviasalesSDK sharedInstance] createSearchPerformer];
 */
@interface JRSDKSearchPerformer : NSObject

/**
 *  An object that will handle routine callbacks
 */
@property (nonatomic, weak) id<JRSDKSearchPerformerDelegate> delegate;

/**
 *  Starts search routine for the passed `searchInfo`
 *
 *  @param searchInfo  Parameters of the search
 *  @param includeResultsInEnglish Flag that makes search results contain agencies with English websites
 */
- (void)performSearchWithSearchInfo:(id<JRSDKSearchInfo>)searchInfo
            includeResultsInEnglish:(BOOL)includeResultsInEnglish;

/**
 *  Cancels the current search routine
 */
- (void)terminateSearch;

/**
 *  The maximum number of retries of timeout errors (e.g. because of bad internet connection)
 */
@property(nonatomic) NSUInteger maxTimeoutRetries;

@end

/**
 *  `JRSDKSearchPerformer` delegate should conform to this protocol
 */
@protocol JRSDKSearchPerformerDelegate <NSObject>

/**
 *  The method is called when the final search results were obtained
 *
 *  @param searchPerformer Search performer itself
 *  @param searchInfo      Current search parameters
 *  @param result          Search result
 */
- (void)searchPerformer:(JRSDKSearchPerformer *)searchPerformer didFinishRegularSearch:(id<JRSDKSearchInfo>)searchInfo withResult:(id<JRSDKSearchResult>)result;

/**
 *  The method is called when the search did fail to finish
 *
 *  @param searchPerformer Search performer itself
 *  @param error           An error that occurred
 */
- (void)searchPerformer:(JRSDKSearchPerformer *)searchPerformer didFailSearchWithError:(NSError *)error;

/**
 *  The method is called when the search performer did finish all it's routines and is ready to release
 *
 *  @param searchPerformer Search performer itself
 *  @param searchInfo      Current search parameters
 *  @param error           An error that occurred (if any)
 */
- (void)searchPerformer:(JRSDKSearchPerformer *)searchPerformer didFinalizeSearchWithInfo:(id<JRSDKSearchInfo>)searchInfo error:(NSError *)error;

@optional

/**
 *  The method is called when the search performer received a chunk of data with some tickets
 *
 *  @param searchPerformer Search performer itself
 *  @param searchInfo      Current search parameters
 *  @param temporaryResult Search result that is available at the moment
 */
- (void)searchPerformer:(JRSDKSearchPerformer *)searchPerformer didFindSomeTicketsInSearchInfo:(id<JRSDKSearchInfo>)searchInfo temporaryResult:(id<JRSDKSearchResult>)temporaryResult;

@end
