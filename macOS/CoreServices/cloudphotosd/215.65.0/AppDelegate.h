//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSApplicationDelegate-Protocol.h"

@class ICPAgentServiceManager, NSString, NSWindow;

@interface AppDelegate : NSObject <NSApplicationDelegate>
{
    NSWindow *_window;
    ICPAgentServiceManager *_serviceManager;
}

@property(retain) ICPAgentServiceManager *serviceManager; // @synthesize serviceManager=_serviceManager;
@property NSWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)applicationDidFinishLaunching:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

