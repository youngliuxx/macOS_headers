//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDAssetCache, CKDMMCSEngineContext, NSString;

__attribute__((visibility("hidden")))
@interface CKDMMCS : NSObject
{
    NSString *_path;
    CKDAssetCache *_assetCache;
    CKDMMCSEngineContext *_MMCSEngineContext;
}

+ (id)MMCSWrapperForApplicationBundleID:(id)arg1 path:(id)arg2 assetDbPath:(id)arg3 fileDownloadPath:(id)arg4 packageDownloadPath:(id)arg5 packageUploadPath:(id)arg6 isUTAccount:(BOOL)arg7 error:(id *)arg8;
+ (void)purgeMMCSDirectoryWithMaxLifetime:(double)arg1 path:(id)arg2 assetsDbPath:(id)arg3;
+ (id)sharedWrappersByBundleID;
+ (id)_errorWithMMCSError:(id)arg1 description:(id)arg2 isGet:(BOOL)arg3;
+ (id)_errorWithMMCSError:(id)arg1 path:(id)arg2 description:(id)arg3 isGet:(BOOL)arg4;
+ (long long)_errorCodeWithMMCSPutError:(id)arg1;
+ (long long)_errorCodeWithMMCSGetError:(id)arg1;
+ (long long)_commonErrorCodeWithMMCSError:(id)arg1;
+ (id)_userInfoFromMMCSRetryableError:(id)arg1;
+ (id)protocolVersion;
+ (id)zeroSizeFileSignature;
@property(retain, nonatomic) CKDMMCSEngineContext *MMCSEngineContext; // @synthesize MMCSEngineContext=_MMCSEngineContext;
@property(retain, nonatomic) CKDAssetCache *assetCache; // @synthesize assetCache=_assetCache;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)getSectionItem:(id)arg1 options:(id)arg2 progress:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_contextToGetSectionItem:(id)arg1 options:(id)arg2 progress:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)putSectionItem:(id)arg1 options:(id)arg2 progress:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_contextToPutSectionItem:(id)arg1 options:(id)arg2 progress:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)unregisterItemIDs:(id)arg1;
- (id)statusReport;
- (id)putItemGroupSet:(id)arg1 options:(id)arg2 progress:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_contextToPutItemGroup:(id)arg1 options:(id)arg2 progress:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)getItemGroupSet:(id)arg1 options:(id)arg2 progress:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_contextToGetItemGroup:(id)arg1 options:(id)arg2 progress:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)registerItemGroupSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)registerItemGroupSet:(id)arg1 shouldChunk:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_contextToRegisterItemGroup:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_logMMCSOptions:(id)arg1;
- (id)_referenceIdentifierFromAssetKey:(id)arg1;
@property(readonly, nonatomic, getter=getMaxChunkCountForSection) unsigned int maxChunkCountForSection;
@property(readonly, nonatomic, getter=getMMCSEngine) struct __MMCSEngine *MMCSEngine;
- (void)dealloc;
- (id)initWithMMCSEngineContext:(id)arg1 path:(id)arg2;

@end

