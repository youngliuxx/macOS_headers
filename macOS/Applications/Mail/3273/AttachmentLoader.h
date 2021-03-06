//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCActivityTarget-Protocol.h"

@class MCActivityMonitor, NSMutableArray, NSString;

@interface AttachmentLoader : NSObject <MCActivityTarget>
{
    MCActivityMonitor *_monitor;
    NSMutableArray *_entries;
}

+ (id)loaderForSavingAttachment:(id)arg1 window:(id)arg2 path:(id)arg3;
+ (id)loaderForAttachmentViewController:(id)arg1 window:(id)arg2 reason:(unsigned long long)arg3 application:(id)arg4 attachmentDirectory:(id)arg5;
+ (id)loaderForAttachment:(id)arg1 window:(id)arg2 reason:(unsigned long long)arg3 application:(id)arg4 attachmentDirectory:(id)arg5;
- (void).cxx_destruct;
- (BOOL)_addOrReprioritizeEntryEqualTo:(id)arg1;
- (void)_addAttachmentsToFetch:(id)arg1 fromWindow:(id)arg2 delegate:(id)arg3;
- (void)_startBackgroundThreadIfNeeded;
- (void)_monitorQuit:(id)arg1;
- (void)_setMonitor:(id)arg1;
- (void)_processAttachmentQueue;
- (void)_didFetchDataForQueueEntry:(id)arg1;
- (void)_cancelInlineLoadsForWindow:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isSmartMailbox;
@property(readonly) Class superclass;

@end

