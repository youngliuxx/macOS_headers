//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListenerEndpoint;

__attribute__((visibility("hidden")))
@interface NSChildWindowQueueElement : NSObject
{
    NSString *_identifier;
    CDUnknownBlockType _reply;
    NSXPCListenerEndpoint *_listenerEndpoint;
    CDStruct_e578beec _parameters;
}

- (id)initWithIdentifier:(id)arg1 parameters:(const CDStruct_e578beec *)arg2 listenerEndpoint:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)dealloc;

@end

