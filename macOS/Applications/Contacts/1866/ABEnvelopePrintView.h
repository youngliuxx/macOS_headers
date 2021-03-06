//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "ABPreviewableViewProtocol-Protocol.h"

@class ABEnvelopePrintInfo, ABLabelModel, NSMutableArray;

@interface ABEnvelopePrintView : NSView <ABPreviewableViewProtocol>
{
    ABEnvelopePrintInfo *_printInfo;
    BOOL _preview;
    ABLabelModel *_model;
    NSMutableArray *_labelViews;
}

- (struct CGRect)rectForPage:(long long)arg1;
- (BOOL)knowsPageRange:(struct _NSRange *)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setEnvelopePrintInfo:(id)arg1;
- (struct CGRect)previewFrame;
- (BOOL)isFlipped;
- (void)updateLayout;
- (void)revert:(id)arg1;
- (BOOL)isPreview;
- (void)setIsPreview:(BOOL)arg1;
- (void)setModel:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithPrintInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)unifiedMe;
- (id)labelViewWithAddress:(id)arg1 frame:(struct CGRect)arg2 preview:(BOOL)arg3 drawImage:(BOOL)arg4 rotate:(BOOL)arg5;
- (id)meAddress;
- (void)redoLayoutForPages:(long long)arg1;
- (void)relayout;
- (void)updateLayoutScales;

@end

