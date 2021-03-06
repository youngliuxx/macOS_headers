//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMetadataQuery, NSMutableSet, NSOperationQueue, NSString, NSURL;

@interface TSAMetadataQueryHelper : NSObject
{
    NSURL *_fileURL;
    CDUnknownBlockType _callback;
    NSOperationQueue *_queue;
    NSMetadataQuery *_query;
    NSMutableSet *_items;
    id _gatheringNotification;
    id _updateNotification;
    BOOL _gatherDownloadAndUploadAttributes;
    BOOL _stopped;
    NSString *_nativeDocumentType;
    NSString *_sffDocumentType;
}

+ (void)enumerateAllSharingStatesWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)valueListAttributes;
- (void)enumerateMetadataItems:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)processChange:(id)arg1;
- (void)processDeletionOfURL:(id)arg1 item:(id)arg2 fileURL:(id)arg3 isNoLongerUbiquitous:(BOOL)arg4;
- (void)processRemoval:(id)arg1;
- (void)processAdditions:(id)arg1;
- (void)processUpdateNotification:(id)arg1;
- (void)processFinishedGatheringNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)p_stop;
- (void)enumerateSharingStatesForItemsUsingBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enableUpdates;
- (void)disableUpdates;
- (void)stop;
- (void)startWithCompletion:(CDUnknownBlockType)arg1;
- (void)setGatherDownloadAndUploadAttributes:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFileURLOrNil:(id)arg1 queue:(id)arg2 callback:(CDUnknownBlockType)arg3;

@end

