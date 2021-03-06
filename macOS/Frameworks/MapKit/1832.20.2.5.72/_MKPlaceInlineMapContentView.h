//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/_MKUIViewControllerClickableRootView.h>

@class MKImageView, MKViewWithHairline, NSImage, NSLayoutConstraint, _MKUILabel;

@interface _MKPlaceInlineMapContentView : _MKUIViewControllerClickableRootView
{
    MKViewWithHairline *_hairlineView;
    NSLayoutConstraint *_topToTitleConstraint;
    NSLayoutConstraint *_titleToBottomConstraint;
    MKImageView *_mapView;
    _MKUILabel *_titleLabel;
}

- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (double)mapViewHeight;
@property(retain, nonatomic) NSImage *map;
- (void)infoCardThemeChanged:(id)arg1;
@property(nonatomic, getter=isBottomHairlineHidden) BOOL bottomHairlineHidden;
- (void)_contentSizeDidChange;
- (double)titleHeight;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)hasTitle;

@end

