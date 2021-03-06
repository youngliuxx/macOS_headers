//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXEditorialWidget-Protocol.h"

@class IPXAssetTransitionItem, IPXDatabaseObjectsController, IPXEditorialModel, IPXPeopleSuggestionDataSource, NSString, NSView, PFDispatchQueue, RDPerson;
@protocol IPXEditorialWidgetDelegate;

@interface IPXEditorialPeopleCandidateWidget : NSObject <IPXEditorialWidget>
{
    IPXEditorialModel *_model;
    PFDispatchQueue *_workQueue;
    id <IPXEditorialWidgetDelegate> _widgetDelegate;
    NSView *_contentView;
    unsigned long long _contentState;
    IPXPeopleSuggestionDataSource *_dataSource;
}

@property(retain, nonatomic) IPXPeopleSuggestionDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) unsigned long long contentState; // @synthesize contentState=_contentState;
@property(nonatomic) __weak id <IPXEditorialWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;
@property(readonly, nonatomic) PFDispatchQueue *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) IPXEditorialModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
@property(readonly, nonatomic) RDPerson *person;
- (void)_suggestionsDidFinish:(id)arg1;
- (void)_dismiss;
- (void)notNowClicked:(id)arg1;
- (void)reviewClicked:(id)arg1;
- (double)preferredContentHeightForWidth:(double)arg1;
@property(readonly, nonatomic) BOOL showsSelectionIndicator;
@property(readonly, nonatomic) double cornerRadius;
@property(readonly, nonatomic) double horizontalInset;
@property(readonly, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) BOOL hasContentForCurrentInput;
- (id)initWithModel:(id)arg1 workQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long layoutStyle;
@property(readonly, nonatomic) NSString *localizedAccessibilityLabel;
@property(readonly, nonatomic) NSString *localizedCaption;
@property(readonly, nonatomic) NSString *localizedCaptionToolTip;
@property(readonly, nonatomic) NSString *localizedDisclosureTitle;
@property(readonly, nonatomic) NSString *localizedDisclosureToolTip;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) Class mediaSectionClass;
@property(readonly, nonatomic) IPXDatabaseObjectsController *objectsController;
@property(readonly, nonatomic) BOOL requiresBackgroundVersionQueries;
@property(nonatomic, getter=isSelected) BOOL selected;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BOOL supportsLassoSelection;
@property(readonly, nonatomic) BOOL supportsVersionDuplication;
@property(readonly, nonatomic) IPXAssetTransitionItem *transitionItem;

@end

