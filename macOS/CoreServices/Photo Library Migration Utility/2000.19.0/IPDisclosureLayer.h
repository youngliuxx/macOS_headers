//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface IPDisclosureLayer : CALayer
{
    BOOL _open;
    BOOL _pressed;
}

@property(nonatomic) BOOL open; // @synthesize open=_open;
- (BOOL)trackMouseEvent:(id)arg1 baseView:(id)arg2;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)sizeToFit;
- (id)init;

@end

