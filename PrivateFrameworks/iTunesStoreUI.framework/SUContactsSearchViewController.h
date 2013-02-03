/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, MFContactsSearchManager, UITableView, <SUContactsSearchDelegate>, NSNumber, MFContactsSearchResultsModel;

@interface SUContactsSearchViewController : SUViewController <UITableViewDataSource, UITableViewDelegate> {
    NSNumber *_activeSearchTag;
    <SUContactsSearchDelegate> *_delegate;
    NSArray *_properties;
    NSInteger _scope;
    MFContactsSearchManager *_searchManager;
    MFContactsSearchResultsModel *_searchResultsModel;
    UITableView *_tableView;
}

@property <SUContactsSearchDelegate> *delegate;
@property(readonly) NSArray *searchProperties;
@property(readonly) NSArray *searchResults;
@property(readonly) NSInteger searchScope;

- (void)_cancelActiveSearch;
- (id)_searchManager;
- (id)_searchResultsModel;
- (void)_sendResultsDidChange;
- (void)beganNetworkActivity;
- (void)cancelSearchWithTag:(id)arg1;
- (void)consumeSearchResults:(id)arg1 type:(NSInteger)arg2 taskID:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (void)endedNetworkActivity;
- (void)finishedSearchingForType:(NSInteger)arg1;
- (void)finishedTaskWithID:(id)arg1;
- (id)init;
- (id)initWithProperties:(id)arg1 scope:(NSInteger)arg2;
- (void)loadView;
- (void)resetResults;
- (id)searchForText:(id)arg1;
- (id)searchProperties;
- (id)searchResults;
- (NSInteger)searchScope;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end