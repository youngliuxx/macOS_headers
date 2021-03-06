//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSMutableArray;

@interface LWShieldWindowController : NSObject
{
    unsigned long long _shieldSpaceID;
    NSMutableArray *_shieldSpaceArray;
    unsigned int _shieldWindowID;
    NSColor *_shieldColor;
}

+ (id)sharedController;
- (void)setupDebugShieldColor;
- (void)addWindowsToShieldSpace:(id)arg1;
- (void)lowerShieldWindow;
- (void)raiseShieldWindowWithFade:(BOOL)arg1;
- (unsigned int)shieldWindowID;

@end

