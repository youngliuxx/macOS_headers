//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, PCFolderNode, PCRemoteFolderNode;

__attribute__((visibility("hidden")))
@interface ServerTransferHelper : NSObject
{
    NSArray *iNodesToTransfer;
    PCRemoteFolderNode *iDestinationFolder;
    PCFolderNode *iTemporaryDownloadFolder;
    NSMutableArray *iDownloadOperations;
    BOOL iTransferHiddenFiles;
    unsigned short iUploadConflictMode;
}

@property(nonatomic) unsigned short uploadConflictMode; // @synthesize uploadConflictMode=iUploadConflictMode;
@property(nonatomic) BOOL shouldTransferHiddenFiles; // @synthesize shouldTransferHiddenFiles=iTransferHiddenFiles;
- (id)fxpOperation;
- (id)uploadOperationForNode:(id)arg1;
- (id)temporaryDownloadFolder;
- (id)downloadOperations;
- (void)dealloc;
- (id)initWithDownloadNodes:(id)arg1 uploadDestinationFolder:(id)arg2;

@end

