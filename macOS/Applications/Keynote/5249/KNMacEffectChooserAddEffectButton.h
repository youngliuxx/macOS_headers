//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "KNMacEffectChooserPopoverButton.h"

@class NSTextField, TSKMacControlImageView;

@interface KNMacEffectChooserAddEffectButton : KNMacEffectChooserPopoverButton
{
    TSKMacControlImageView *_bezelImageView;
    NSTextField *_titleTextField;
}

+ (Class)cellClass;
@property(readonly, nonatomic) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(readonly, nonatomic) TSKMacControlImageView *bezelImageView; // @synthesize bezelImageView=_bezelImageView;
- (id)hitTest:(struct CGPoint)arg1;
- (void)updateCell:(id)arg1;
- (void)updateSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (struct NSEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;

@end

