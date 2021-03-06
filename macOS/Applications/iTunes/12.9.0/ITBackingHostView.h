//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "ITAccessibleLinking-Protocol.h"
#import "ITViewLinking-Protocol.h"

@interface ITBackingHostView : NSView <ITViewLinking, ITAccessibleLinking>
{
    weak_ptr_b631f5cc _hostedView;
    weak_ptr_b631f5cc _mouseDraggingView;
    unsigned long long _accessibilityCapacityHint;
    BOOL _accessibilityIgnored;
}

@property(nonatomic) BOOL ignored; // @synthesize ignored=_accessibilityIgnored;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (unsigned long long)accessibilityIndexOfChild:(id)arg1;
- (id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (unsigned long long)accessibilityArrayAttributeCount:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityFocusedUIElement;
- (BOOL)accessibilityIsIgnored;
- (BOOL)accessibilityShouldUseUniqueId;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (id)debugDescription;
- (id)description;
- (void)drawRect:(struct CGRect)arg1;
- (void)prepareContentInRect:(struct CGRect)arg1;
- (struct CGRect)_opaqueRectForWindowMoveWhenInTitlebar;
- (struct CGRect)_opaqueRect;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)isOpaque;
- (BOOL)allowsVibrancy;
- (BOOL)isFlipped;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)dispatchMouseUp:(id)arg1;
- (void)dispatchMouseDragged:(id)arg1;
- (BOOL)dispatchMouseDown:(id)arg1;
- (BOOL)commonMouseUp:(id)arg1;
- (BOOL)commonMouseDown:(id)arg1;
- (BOOL)_updateCursorForITMouseEvent:(const struct ITMouseEvent *)arg1 andOriginatingView:(shared_ptr_d213862f)arg2;
- (BOOL)_updateCursorForITMouseEvent:(const struct ITMouseEvent *)arg1 getAssigningView:(shared_ptr_d213862f *)arg2;
- (unsigned long long)accessibilityCapacityHint;
- (shared_ptr_421cc4c7)itWindow;
@property(nonatomic) shared_ptr_d213862f hostedView; // @dynamic hostedView;
- (id)_introspector_className;
- (id)getIntrospectorIdentifier;
- (void)setFrontingView:(shared_ptr_d213862f)arg1;
- (shared_ptr_d213862f)frontingView;
- (shared_ptr_18c9bb0b)accessibleObject;

@end

