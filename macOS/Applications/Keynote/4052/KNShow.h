//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSDKeyValueProxyVending-Protocol.h"

@class KNRecording, KNSlideTree, KNSoundtrack, KNTheme, KNUIState, TSSStylesheet;

@interface KNShow : TSPObject <TSDKeyValueProxyVending, GSSPAutoEncodable>
{
    KNUIState *mUIState;
    KNTheme *mTheme;
    KNSlideTree *mSlideTree;
    TSSStylesheet *mStylesheet;
    KNRecording *mRecording;
    struct CGSize mSize;
    double mAutoplayTransitionDelay;
    double mAutoplayBuildDelay;
    double mIdleTimerDelay;
    int mMode;
    BOOL mLoopPresentation;
    BOOL mIdleTimerActive;
    BOOL mAutomaticallyPlaysUponOpen;
    BOOL mNeedsToUpdateThumbnails;
    BOOL mWasImportedAsPreUFF;
    BOOL mLocalizeDocument;
    KNSoundtrack *mSoundtrack;
}

+ (unsigned long long)maximumHeightForExport;
+ (unsigned long long)maximumHeight;
+ (unsigned long long)minimumHeight;
+ (unsigned long long)maximumWidthForExport;
+ (unsigned long long)maximumWidth;
+ (unsigned long long)minimumWidth;
+ (id)showWithSize:(struct CGSize)arg1 context:(id)arg2;
@property(readonly, nonatomic) TSSStylesheet *stylesheet; // @synthesize stylesheet=mStylesheet;
@property(nonatomic) struct CGSize size; // @synthesize size=mSize;
@property(retain, nonatomic) KNTheme *theme; // @synthesize theme=mTheme;
@property(nonatomic) BOOL localizeDocument; // @synthesize localizeDocument=mLocalizeDocument;
@property(readonly, nonatomic) BOOL wasImportedAsPreUFF; // @synthesize wasImportedAsPreUFF=mWasImportedAsPreUFF;
@property(readonly, nonatomic) BOOL needsToUpdateThumbnails; // @synthesize needsToUpdateThumbnails=mNeedsToUpdateThumbnails;
@property(retain, nonatomic) KNUIState *uiState; // @synthesize uiState=mUIState;
@property(readonly, nonatomic, getter=isPlayable) BOOL playable;
- (id)slideNodesAtIndexes:(id)arg1;
- (id)slideNodeAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfSlideNode:(id)arg1;
- (void)willModify;
- (struct CGPoint)center;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 context:(id)arg2;
@property(readonly, nonatomic) BOOL slideNumbersVisible;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1;
@property(retain, nonatomic) KNRecording *recording;
@property(retain, nonatomic) KNSoundtrack *soundtrack;
@property(nonatomic) BOOL automaticallyPlaysUponOpen;
@property(nonatomic) BOOL idleTimerActive;
@property(nonatomic) BOOL loopPresentation;
@property(nonatomic) int mode;
@property(nonatomic) double idleTimerDelay;
@property(nonatomic) double autoplayBuildDelay;
@property(nonatomic) double autoplayTransitionDelay;
@property(retain, nonatomic) KNSlideTree *slideTree;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)saveToArchive:(struct ShowArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct ShowArchive *)arg1 unarchiver:(id)arg2;
- (id)newProxyWithEditor:(id)arg1 documentRoot:(id)arg2;
- (void)populateGSSPShow:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;

@end

