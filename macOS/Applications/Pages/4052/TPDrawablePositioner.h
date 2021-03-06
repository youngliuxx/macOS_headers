//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSADrawablePositioner.h"

@class NSArray, TSURetainedPointerKeyDictionary;

@interface TPDrawablePositioner : TSADrawablePositioner
{
    struct CGSize _bodySize;
    TSURetainedPointerKeyDictionary *_drawableFrameMap;
    NSArray *_floatingAndAnchoredDrawables;
    struct CGRect _mostVisiblePageBounds;
}

@property(nonatomic) struct CGRect mostVisiblePageBounds; // @synthesize mostVisiblePageBounds=_mostVisiblePageBounds;
- (void)i_positionDrawables:(id)arg1;
- (struct CGRect)i_boundsForDrawable:(id)arg1;
@property(readonly, nonatomic) struct CGSize bodySize;
- (unsigned long long)pageIndexFromPageRelativingDrawable:(id)arg1;
- (unsigned long long)pageIndexFromVisibleBoundsForPositioning:(struct CGRect)arg1;
- (struct CGRect)canvasBoundsOfDrawable:(id)arg1;
- (id)canvasDrawables;
- (void)gatherAnchoredDrawablesWithPageLayout:(id)arg1;
- (struct CGRect)boundsByFittingDrawable:(id)arg1;
- (void)dealloc;

@end

