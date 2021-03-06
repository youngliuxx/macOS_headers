//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, NSURL;

@protocol GenInstDownload <NSObject>
- (void)downloadContentForPatchWithURL:(NSURL *)arg1 groupInfo:(NSDictionary *)arg2;
- (BOOL)isContentBeingDownloadedForPatchWithURL:(NSURL *)arg1;
- (BOOL)contentWasDownloadedForPatchWithURL:(NSURL *)arg1;
- (void)downloadDefaultContentForGenreIdentifier:(NSString *)arg1 characterIdentifier:(NSString *)arg2 groupInfo:(NSDictionary *)arg3;
- (BOOL)isDefaultContentBeingDownloadedForGenreIdentifier:(NSString *)arg1 characterIdentifier:(NSString *)arg2;
- (BOOL)defaultContentWasDownloadedForGenreIdentifier:(NSString *)arg1 characterIdentifier:(NSString *)arg2;
@end

