//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UXKit/UXViewController.h>

#import <PhotosUICore/PXPeopleSuggestionManagerDelegate-Protocol.h>
#import <PhotosUICore/PXPeopleSummaryDelegate-Protocol.h>

@class NSProgressIndicator, NSString, NSTimer, PXAnimatedHeaderView, PXPeopleConfirmationLoadingView, PXPeopleConfirmationSummaryViewController, PXPeopleSuggestionManager, PXPeopleSuggestionView, UXLabel;

@interface PXPeopleConfirmationViewController : UXViewController <PXPeopleSuggestionManagerDelegate, PXPeopleSummaryDelegate>
{
    BOOL _suggestionsPresented;
    BOOL _showTypeDebugColor;
    PXPeopleSuggestionManager *_suggestionManager;
    PXPeopleSuggestionView *_suggestionView;
    PXAnimatedHeaderView *_headerView;
    UXLabel *_descriptionLabel;
    UXLabel *_interimLoadingLabel;
    NSProgressIndicator *_interimLoadingIndicator;
    unsigned long long _viewState;
    PXPeopleConfirmationLoadingView *_loadingView;
    PXPeopleConfirmationSummaryViewController *_summaryViewController;
    NSTimer *_loadingDelayTimer;
}

@property(nonatomic) BOOL showTypeDebugColor; // @synthesize showTypeDebugColor=_showTypeDebugColor;
@property(nonatomic) BOOL suggestionsPresented; // @synthesize suggestionsPresented=_suggestionsPresented;
@property(retain, nonatomic) NSTimer *loadingDelayTimer; // @synthesize loadingDelayTimer=_loadingDelayTimer;
@property(retain, nonatomic) PXPeopleConfirmationSummaryViewController *summaryViewController; // @synthesize summaryViewController=_summaryViewController;
@property(retain, nonatomic) PXPeopleConfirmationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) unsigned long long viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) NSProgressIndicator *interimLoadingIndicator; // @synthesize interimLoadingIndicator=_interimLoadingIndicator;
@property(retain, nonatomic) UXLabel *interimLoadingLabel; // @synthesize interimLoadingLabel=_interimLoadingLabel;
@property(retain, nonatomic) UXLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) PXAnimatedHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) PXPeopleSuggestionView *suggestionView; // @synthesize suggestionView=_suggestionView;
@property(readonly) PXPeopleSuggestionManager *suggestionManager; // @synthesize suggestionManager=_suggestionManager;
- (void).cxx_destruct;
- (unsigned long long)autoConfirmedCountForSummaryViewController:(id)arg1;
- (unsigned long long)userConfirmedCountForSummaryViewController:(id)arg1;
- (id)personForSummaryViewController:(id)arg1;
- (void)willLoadMoreSuggestionsForSuggestionManager:(id)arg1;
- (void)noMoreSuggestionsAvailableForSuggestionManager:(id)arg1;
- (void)suggestionManager:(id)arg1 hasNewSuggestionsAvailable:(id)arg2;
- (void)confirmationCountUpdatedForSuggestionManager:(id)arg1;
- (void)doneTapped:(id)arg1;
- (void)performUndo:(id)arg1;
- (void)undoDeny:(id)arg1;
- (void)undoConfirm:(id)arg1;
- (void)denyTapped:(id)arg1;
- (void)confirmTapped:(id)arg1;
- (void)suggestionDidDisplay;
@property(readonly) BOOL isSummaryViewShowing;
- (void)updateViewWithViewState:(unsigned long long)arg1;
- (void)dismissSummary;
- (void)displaySummary;
- (void)presentSuggestion:(id)arg1 animated:(BOOL)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithPerson:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

