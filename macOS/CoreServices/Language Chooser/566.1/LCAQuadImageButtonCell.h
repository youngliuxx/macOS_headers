//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

@class NSImage;

@interface LCAQuadImageButtonCell : NSButtonCell
{
    NSImage *_focusImage;
    NSImage *_alternateFocusImage;
}

- (void)drawImage:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;
- (void)_setUpImages;

@end

