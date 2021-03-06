//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSGestureRecognizer.h>

#import <AppKit/NSCoding-Protocol.h>

@interface NSPulseGestureRecognizer : NSGestureRecognizer <NSCoding>
{
    struct CGPoint _location;
    double _pressure;
    long long _stage;
    double _stageTransition;
    long long _flags;
}

@property(readonly) double stageTransition; // @synthesize stageTransition=_stageTransition;
@property(readonly) long long stage; // @synthesize stage=_stage;
@property(readonly) double pressure; // @synthesize pressure=_pressure;
- (id)_desiredPressureBehavior;
- (void)pressureChangeWithEvent:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)reset;
- (struct CGPoint)locationInView:(id)arg1;
@property BOOL recognizesOnMouseDown;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

