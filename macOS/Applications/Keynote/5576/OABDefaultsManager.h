//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OABPropertiesManager-Protocol.h"

@class NSString;

@interface OABDefaultsManager : NSObject <OABPropertiesManager>
{
}

- (BOOL)hidden;
- (BOOL)textPathStrikethrough;
- (BOOL)textPathSmallcaps;
- (BOOL)textPathUnderline;
- (BOOL)textPathItalic;
- (BOOL)textPathBold;
- (id)textPathFontFamily;
- (int)textPathFontSize;
- (int)textPathTextAlignment;
- (id)textPathUnicodeString;
- (BOOL)isTextPath;
- (BOOL)isShadowOK;
- (BOOL)isStrokeOK;
- (BOOL)isFillOK;
- (int)shadowSoftness;
- (int)shadowOffsetY;
- (int)shadowOffsetX;
- (int)shadowAlpha;
- (int)shadowType;
- (BOOL)isShadowed;
- (int)strokeEndArrowLength;
- (int)strokeEndArrowWidth;
- (int)strokeEndArrowType;
- (int)strokeStartArrowLength;
- (int)strokeStartArrowWidth;
- (int)strokeStartArrowType;
- (int)strokeJoinStyle;
- (int)strokeCapStyle;
- (const struct EshTablePropVal<int> *)strokeCustomDash;
- (int)strokePresetDash;
- (int)strokeCompoundType;
- (int)strokeMiterLimit;
- (int)strokeWidth;
- (int)strokeFgAlpha;
- (struct EshBlip *)strokeFillBlipDataReference;
- (id)strokeFillBlipName;
- (unsigned int)strokeFillBlipID;
- (int)strokeFillType;
- (id)fillBlipName;
- (struct EshBlip *)fillBlipDataReference;
- (unsigned int)fillBlipID;
- (const struct EshTablePropVal<EshGradientStop> *)fillGradientColors;
- (int)fillFocusBottom;
- (int)fillFocusRight;
- (int)fillFocusTop;
- (int)fillFocusLeft;
- (int)fillFocus;
- (int)fillAngle;
- (int)fillBgAlpha;
- (int)fillFgAlpha;
- (int)fillType;
- (struct EshColor)shadowColor;
- (struct EshColor)strokeBgColor;
- (struct EshColor)strokeFgColor;
- (BOOL)isStroked;
- (struct EshColor)fillBgColor;
- (struct EshColor)fillFgColor;
- (BOOL)isFilled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

