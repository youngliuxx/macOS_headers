//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMAP/IMAPFetchResponseHandler-Protocol.h>
#import <IMAP/MCActivityTarget-Protocol.h>

@class IMAPGateway, IMAPMailbox, MCInvocationQueue, NSArray, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSMutableSet, NSString, _NonBoostingLock;
@protocol IMAPMessageDataSource;

@interface IMAPMailboxSyncEngine : NSObject <IMAPFetchResponseHandler, MCActivityTarget>
{
    CDStruct_f792af56 _rangeOfMessagesToFetchFlagsAndUidsForSyncing;
    _NonBoostingLock *_syncEngineLock;
    IMAPGateway *_gateway;
    id <IMAPMessageDataSource> _dataSource;
    IMAPMailbox *_IMAPMailbox;
    NSMutableArray *_auxiliaryLists;
    NSMutableIndexSet *_allNewUids;
    NSMutableIndexSet *_UIDsNeedingSkeletons;
    NSMutableIndexSet *_messageNumbersNeedingUIDs;
    NSMutableArray *_messageDetails;
    unsigned long long _fetchedMessagesCount;
    unsigned long long _maxSkeletonsToFetch;
    NSMutableIndexSet *_expungedUids;
    NSMutableSet *_activeOperations;
    long long _progressType;
    unsigned long long _progressTotal;
    BOOL _isCheckingNewMail;
    MCInvocationQueue *_syncEngineQueue;
    NSMutableArray *_messagesNeedingAttachmentNames;
    NSArray *_messagesBeingRouted;
    NSMutableArray *_messagesAddedToDataSource;
    NSMutableArray *_uidsAddedToServer;
    NSMutableSet *_messageUIDsCachedDuringRouting;
    NSMutableDictionary *_labelsByRemoteId;
    CDUnknownBlockType _compareByUid;
    unsigned int _uidValidity;
    unsigned int _localDataSourceUidNext;
    unsigned int _newUidValidity;
    BOOL _isReset;
    BOOL _needToUpdateExists;
    BOOL _newResponsesAvailable;
    BOOL _automaticallyStartThread;
    BOOL _dataSourceIsInboxOrAllMail;
    BOOL _newMailReceivedInInbox;
    BOOL _checkedForNewUids;
    BOOL _fetchingDueToAllegedModificationSequenceChange;
    BOOL _messagesNeedAttachmentNames;
    BOOL _synchronizedOldMessages;
    BOOL _connectionSupportsUIDPLUS;
    BOOL _forceSyncOfAllMessages;
    unsigned int _uidNext;
    unsigned long long _numMessagesOnServer;
    unsigned long long _computedHighestModificationSequence;
}

+ (void)initialize;
@property BOOL forceSyncOfAllMessages; // @synthesize forceSyncOfAllMessages=_forceSyncOfAllMessages;
@property BOOL connectionSupportsUIDPLUS; // @synthesize connectionSupportsUIDPLUS=_connectionSupportsUIDPLUS;
@property unsigned int uidNext; // @synthesize uidNext=_uidNext;
@property unsigned long long computedHighestModificationSequence; // @synthesize computedHighestModificationSequence=_computedHighestModificationSequence;
@property unsigned long long numberOfMessagesOnServer; // @synthesize numberOfMessagesOnServer=_numMessagesOnServer;
@property BOOL messageListIsSynchronized; // @synthesize messageListIsSynchronized=_synchronizedOldMessages;
- (void).cxx_destruct;
- (id)suffixArrayOfArray:(id)arg1 ofLength:(unsigned long long)arg2 fullLength:(unsigned long long *)arg3;
- (id)stateStringForDiagnostics;
- (BOOL)_handleFailedFetchResponseForOperation:(id)arg1;
- (void)_setupFakeResponseToOperation:(id)arg1 messageNumber:(unsigned long long)arg2;
- (BOOL)handleResponse:(id)arg1 forOperation:(id)arg2;
- (long long)_cachePolicyForAccount:(id)arg1;
- (BOOL)_handleInvitationMessagesWithMonitor:(id)arg1;
- (BOOL)_recoverFromErrorInDownload:(id)arg1 uid:(unsigned int)arg2 cacheList:(id)arg3 atIndex:(unsigned long long)arg4 downloadCache:(id)arg5;
- (BOOL)_cacheAttachmentsWithMonitor:(id)arg1;
- (BOOL)_cacheMessagesWithMonitor:(id)arg1;
- (BOOL)_syncWithDataSourceWithMonitor:(id)arg1 messagesFromOpen:(id)arg2;
- (BOOL)_fetchUidsFlagsAndLabelsWithMonitor:(id)arg1;
- (BOOL)_handleRoutedUidsWithMonitor:(id)arg1;
- (id)_newOperationFromUIDsNeedingSkeletons:(unsigned long long)arg1;
- (BOOL)_getNewMessageSkeletonsWithMonitor:(id)arg1 messagesFromOpen:(id *)arg2;
- (BOOL)_processResponsesWithMonitor:(id)arg1;
- (BOOL)_shouldContinueSyncingWithMonitor:(id)arg1;
- (BOOL)_shouldContinueSyncingWithGateway;
- (void)boostActiveOperationsTo:(long long)arg1;
- (void)_goWithMessagesIfNeeded:(id)arg1;
- (void)_goWithMessages:(id)arg1;
- (void)_updatePendingChangesWithMonitor:(id)arg1;
- (BOOL)_hasPendingChanges;
- (void)_notifyBackgroundFetchCompletedWithLogMessage:(id)arg1;
- (BOOL)_setGateway:(id)arg1;
- (id)_checkOutGateway;
- (void)_mergeItems:(id)arg1 intoAuxiliaryList:(unsigned long long)arg2;
- (void)_setAuxiliaryList:(id)arg1 forType:(unsigned long long)arg2;
- (id)_getAuxiliaryListForType:(unsigned long long)arg1;
- (void)_removeUidFromAuxiliaryLists:(id)arg1;
- (void)_addItem:(id)arg1 toAuxiliaryList:(unsigned long long)arg2;
- (void)_discardSyncProgressSoFar;
- (BOOL)_syncChangedMessagesOnly;
- (void)_setAttachmentNamesForMessage:(id)arg1;
- (void)_processAttachmentNames;
- (void)_updateFlagChanges:(id *)arg1 withDetails:(id)arg2 previousFlags:(unsigned int)arg3;
- (void)_pushFlags:(id)arg1 toDataSource:(id)arg2 withMonitor:(id)arg3;
- (void)_pushFlags:(id)arg1 forPersistentIDs:(id)arg2 toDataSource:(id)arg3 withMonitor:(id)arg4;
- (void)_pushLabels:(id)arg1 toDataSource:(id)arg2 withMonitor:(id)arg3;
- (void)_doUidStoreUpdate:(id)arg1;
- (id)_gmailLabelsForNames:(id)arg1;
- (void)_handleFetchResponse:(id)arg1 withMonitor:(id)arg2 message:(id *)arg3 flagsChanges:(id *)arg4 labels:(id *)arg5;
@property(readonly, copy, nonatomic) CDUnknownBlockType compareByUid;
- (id)_getObjectWithSameUidAsObject:(id)arg1 inArray:(id)arg2 insertIndex:(unsigned long long *)arg3;
- (void)_startNewThreadIfNeeded;
- (void)_removeMessagesOrDetailsFromDataSource:(id)arg1;
- (void)_resizeMessageDetails;
- (void)_addDetails:(id)arg1 forMessageNumber:(unsigned long long)arg2;
- (id)_getKnownMessageDetailsForUid:(unsigned int)arg1;
- (id)_getKnownMessageDetailsForNumber:(unsigned long long)arg1;
- (BOOL)_placeholderDetailsExist;
- (void)newUIDsWereAddedToServer:(id)arg1;
- (void)_handleNewUIDsAddedToServer:(id)arg1;
- (void)requestCheckingNewMail;
- (void)runSynchronouslyWithMessages:(id)arg1;
- (void)setAutomaticallyStartsBackgroundThread:(BOOL)arg1;
- (id)messagesBeingAdded;
- (void)uidsWereCompactedFromDataSource:(id)arg1;
- (void)messagesWereAddedToDataSource:(id)arg1;
- (void)_handleMessagesWereAddedToPersistence:(id)arg1 withMonitor:(id)arg2;
- (void)responsesWereAddedToIMAPMailbox:(id)arg1;
- (void)setUidValidity:(unsigned int)arg1;
- (void)_updateCountOfMessagesOnServerIfNecessary;
- (void)updateCountOfMessagesOnServerFromIMAPMailbox:(id)arg1 fromIDLE:(BOOL)arg2;
- (void)setGatewayFromIMAPMailbox:(id)arg1;
- (void)_setupForNewIMAPMailbox:(id)arg1 andGateway:(id)arg2;
- (void)invalidateDataSource;
- (void)_resetClearingGateway:(BOOL)arg1 clearingDataSource:(BOOL)arg2;
- (void)reset;
- (BOOL)isReset;
- (BOOL)_dataSourcePersistentIDType;
- (id)_copyDataSource;
- (id)_copyIMAPMailbox;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

