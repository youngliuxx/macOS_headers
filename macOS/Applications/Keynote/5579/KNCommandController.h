//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSACommandController.h"

@class KNDocumentRoot, TSKChangeGroup;

@interface KNCommandController : TSACommandController
{
    TSKChangeGroup *_changesForFinalWrite;
    BOOL _skipHasBodyInOutlineViewCheck;
    BOOL _shouldSetHasBodyInOutlineView;
}

@property BOOL shouldSetHasBodyInOutlineView; // @synthesize shouldSetHasBodyInOutlineView=_shouldSetHasBodyInOutlineView;
@property BOOL skipHasBodyInOutlineViewCheck; // @synthesize skipHasBodyInOutlineViewCheck=_skipHasBodyInOutlineViewCheck;
- (void).cxx_destruct;
- (void)protected_didRollbackCommands:(id)arg1;
- (void)protected_finalWrite;
- (void)protected_lastChanceWriteForCommittedCommand:(id)arg1;
- (void)p_updateHasBodyInOutlineViewFlagsWithChanges:(id)arg1;
- (void)p_updateMasterSlidesFromPlaceholderChanges:(id)arg1;
- (id)modelEnumeratorToVisitForPropagatingMasterChanges:(id)arg1;
- (id)changePropagationVisitorForPropagatingMasterChanges:(id)arg1;
- (BOOL)masterChangesShouldBePropagatedForObject:(id)arg1;

// Remaining properties
@property(retain, nonatomic) KNDocumentRoot *documentRoot; // @dynamic documentRoot;

@end

