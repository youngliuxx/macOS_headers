//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CALayerDelegate-Protocol.h"
#import "TSTSelectionHighlightInformationProviding-Protocol.h"

@class CALayer, NSArray, NSEvent, TSTLayout, TSTSelectionHighlightLayer, TSTTableRep, TSUColor;
@protocol TSDMouseEventHandler;

@protocol TSTTableChromeProvider <TSTSelectionHighlightInformationProviding, CALayerDelegate>
@property(readonly, retain, nonatomic) TSTSelectionHighlightLayer *selectionHighlightLayer;
@property(readonly, nonatomic) BOOL layoutDirectionIsLeftToRight;
@property(readonly, nonatomic) TSUColor *feedbackFontColor;
@property(readonly, nonatomic) TSUColor *normalFontColor;
@property(readonly, nonatomic) BOOL showsAddressBarSeparators;
@property(readonly, nonatomic) BOOL showsAddressBarNumbering;
@property(readonly, nonatomic) BOOL showsAddressBarLettering;
@property(readonly, nonatomic) BOOL showsAddressBarHighlights;
@property(readonly, nonatomic) int rowChromeSize;
@property(readonly, nonatomic) double contentsScale;
@property(readonly, nonatomic) TSTLayout *tableLayout;
@property(readonly, nonatomic) TSTTableRep *tableRep;
- (BOOL)shouldHideRowResizeKnobForRow:(unsigned short)arg1;
- (BOOL)shouldHideColumnResizeKnobForColumn:(unsigned char)arg1;
- (BOOL)hitRowChromeWithCanvasPoint:(struct CGPoint)arg1;
- (BOOL)hitColumnChromeWithCanvasPoint:(struct CGPoint)arg1;
- (BOOL)hitUpperLeftChromeWithCanvasPoint:(struct CGPoint)arg1;
- (BOOL)hitByCanvasPoint:(struct CGPoint)arg1;
- (BOOL)canStartTabDragSelectAtPoint:(struct CGPoint)arg1;
- (BOOL)handleDoubleTapAtPoint:(struct CGPoint)arg1;
- (BOOL)handleSingleTapAtPoint:(struct CGPoint)arg1;
- (void)collaboratorCursorLayerInvalidateLayout;
- (void)collaboratorCursorLayerInvalidateDisplay;
- (CALayer *)collaboratorCursorLayer;
- (CDStruct_08b9d696)selectionHighlightContentsCenterInfo;
- (BOOL)selectionHighlightLayerIsVisible;
- (void)selectionHighlightLayerInvalidateLayout;
- (void)selectionHighlightLayerInvalidateDisplay;
- (void)didEndZoomingOperation;
- (void)willBeginZoomingOperation;
- (void)viewScrollDidChange;
- (void)willBeRemoved;
- (void)becameNotSelected;
- (void)becameSelected;
- (void)willTransitionChromeModeFrom:(int)arg1 toChromeMode:(int)arg2;
- (void)hideContextMenuButton;
- (BOOL)showAddressBarFormulaEditing;
- (void)validate:(int)arg1;
- (NSArray *)layers;
- (void)chromeFadeOut:(int)arg1;
- (void)chromeFadeIn:(int)arg1;
- (void)invalidateAddressBarRowSelection;
- (void)invalidateAddressBarColumnSelection;
- (void)invalidateAddressBarSelection;
- (void)invalidateRowChromeCache;
- (void)invalidateRowChrome;
- (void)invalidateColumnChromeCache;
- (void)invalidateColumnChrome;
- (void)invalidateAllChromeCaches;
- (void)invalidateAllChrome;
- (id)initWithTableRep:(TSTTableRep *)arg1 layout:(TSTLayout *)arg2;

@optional
- (struct CGRect)selectionHighlightContextMenuArrowFrame;
- (struct CGRect)unscaledContextMenuArrowFrame;
- (void)setContextMenuChromePressed:(BOOL)arg1;
- (BOOL)isContextMenuChromePressed;
- (void)unpinContextMenuChrome;
- (void)pinContextMenuChrome;
- (id <TSDMouseEventHandler>)newMouseEventHandlerForContextMenuAtPoint:(struct CGPoint)arg1 withEvent:(NSEvent *)arg2;
- (id <TSDMouseEventHandler>)newMouseEventHandlerAtPoint:(struct CGPoint)arg1 withEvent:(NSEvent *)arg2;
- (void)mouseMovedAtPoint:(struct CGPoint)arg1 withEvent:(NSEvent *)arg2;
@end

