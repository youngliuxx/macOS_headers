//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LiRidList, NSDictionary, NSNumber, NSString;

@protocol CPSCloudPhotoLibraryServiceClient <NSObject>
- (void)downloadDidProgress:(NSNumber *)arg1 forResourceWithModelId:(NSNumber *)arg2 inDatabaseWithUuid:(NSString *)arg3;
- (void)versionsNeedPreviewsRegenerated:(LiRidList *)arg1 changeType:(int)arg2 inDatabaseWithUuid:(NSString *)arg3;
- (void)statusInformationChanged:(NSDictionary *)arg1;
@end

