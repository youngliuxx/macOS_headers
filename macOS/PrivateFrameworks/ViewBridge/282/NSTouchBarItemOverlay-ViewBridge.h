//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTouchBarItemOverlay.h>

#import <ViewBridge/TouchBarsAndItems-Protocol.h>

@interface NSTouchBarItemOverlay (ViewBridge) <TouchBarsAndItems>
+ (id)overlayForIdentifier:(id)arg1;
- (void)swizzledHide;
- (void)swizzledShow;
- (void)removeViewServiceTouchBarControllerObservers;
- (void)addViewServiceTouchBarControllerObservers;
- (void)setViewServiceTouchBarControllerIdentifier:(id)arg1;
- (id)viewServiceTouchBarControllerIdentifier;
- (void)swizzledDealloc;
@end

