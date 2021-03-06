//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CPModalDialog.h"

#import "CPQuickTimeMovieSource-Protocol.h"
#import "CPView3DSource-Protocol.h"

@class CP3DAffineTransform, CPDefinitionTree, CPView3D, EQCaption, NSMutableArray, NSMutableDictionary, NSTabView, NSTabViewItem, NSTableView, NSView, NSWindow;

@interface CPAnimationDialog : CPModalDialog <CPView3DSource, CPQuickTimeMovieSource>
{
    NSTabView *_tabView;
    NSTabViewItem *_orientationTabViewItem;
    NSTableView *mTableView;
    id mFrameNumber;
    id mSampling;
    id mDuration;
    id mSize;
    id mZoomTabView;
    id mZoomIn;
    id mZoomFactor;
    id mZoomX;
    id mZoomY;
    id mZoomX2;
    id mZoom3DView;
    EQCaption *mXCaption;
    id mXMinExponent;
    id mXMaxExponent;
    id mXMin;
    id mXMax;
    EQCaption *mYCaption;
    id mYMinExponent;
    id mYMaxExponent;
    id mYMin;
    id mYMax;
    EQCaption *mZCaption;
    id mZMinExponent;
    id mZMaxExponent;
    id mZMin;
    id mZMax;
    id mLimit3DView;
    CPView3D *mInitialView3D;
    CPView3D *mFinalView3D;
    CPView3D *mOffscreen3DView;
    NSWindow *mOffscreenAnimationWindow;
    CP3DAffineTransform *mInitialTransform;
    CP3DAffineTransform *mTransitionTransform;
    BOOL mCanDefineFrameLimits;
    NSMutableArray *mDefinitions;
    NSMutableDictionary *mLastDefinitions;
    CPDefinitionTree *mDefinitionTree;
    long long mImageNumber;
    double mResizeFactor;
    BOOL mChangeScale;
    double mZoomMin[3];
    double mZoomMax[3];
    BOOL m3D;
    NSView *mZoom3DSuperview;
    NSView *mLimit3DSuperview;
}

- (void)glDrawView:(id)arg1 opaque:(BOOL)arg2;
- (void)applySettingsToView:(id)arg1;
- (void)glDrawBackgroundOfView:(id)arg1 withWidth:(double)arg2 height:(double)arg3;
- (BOOL)tabView:(id)arg1 shouldSelectTabViewItem:(id)arg2;
- (double)findHeightForColumn:(long long)arg1 row:(long long)arg2 withValue:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)dialogDidClose;
- (void)dialogWillClose;
- (void)dialogDidOK;
- (BOOL)dialogShouldOK;
- (id)qtImageAtIndex:(long long)arg1;
- (void)performZoom;
- (long long)qtNumberOfImages;
- (struct CGSize)qtImageSize;
- (void)dialogWillShow;
- (void)prepareView3D:(id)arg1;
- (void)update:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end

