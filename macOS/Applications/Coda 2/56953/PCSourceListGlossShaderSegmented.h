//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PanicCore/PCPlatformShaderSegmented.h>

@class PCSourceListGlossShader;

__attribute__((visibility("hidden")))
@interface PCSourceListGlossShaderSegmented : PCPlatformShaderSegmented
{
    PCSourceListGlossShader *iShader;
}

- (id)font;
- (id)textShadowColor;
- (id)textColor;
- (BOOL)isOpaque;
- (double)intraSegmentOffset;
- (void)drawSelectedButtonInRect:(struct CGRect)arg1 bezelEdge:(unsigned int)arg2;
- (void)drawHighlightedButtonInRect:(struct CGRect)arg1 isSelected:(BOOL)arg2 bezelEdge:(unsigned int)arg3;
- (void)drawButtonInRect:(struct CGRect)arg1 bezelEdge:(unsigned int)arg2;
- (void)drawBackgroundInRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)init;

@end

