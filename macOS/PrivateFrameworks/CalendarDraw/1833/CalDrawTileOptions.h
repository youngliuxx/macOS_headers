//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarDraw/NSCopying-Protocol.h>

@interface CalDrawTileOptions : NSObject <NSCopying>
{
    BOOL _selected;
    BOOL _dimmed;
    BOOL _declined;
    BOOL _maybe;
    BOOL _needsReply;
    BOOL _canceled;
    BOOL _large;
    BOOL _dash;
    BOOL _noBorder;
    BOOL _outline;
    BOOL _colorBar;
    BOOL _fillDot;
    BOOL _darkBackground;
    int _outlineColor;
}

@property BOOL dash; // @synthesize dash=_dash;
@property BOOL darkBackground; // @synthesize darkBackground=_darkBackground;
@property BOOL fillDot; // @synthesize fillDot=_fillDot;
@property int outlineColor; // @synthesize outlineColor=_outlineColor;
@property BOOL colorBar; // @synthesize colorBar=_colorBar;
@property BOOL outline; // @synthesize outline=_outline;
@property BOOL noBorder; // @synthesize noBorder=_noBorder;
@property BOOL large; // @synthesize large=_large;
@property BOOL canceled; // @synthesize canceled=_canceled;
@property BOOL needsReply; // @synthesize needsReply=_needsReply;
@property BOOL maybe; // @synthesize maybe=_maybe;
@property BOOL declined; // @synthesize declined=_declined;
@property BOOL dimmed; // @synthesize dimmed=_dimmed;
@property BOOL selected; // @synthesize selected=_selected;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

