//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsFeedLayout/NFLSubBatchLayoutTilingOperation.h>

@interface NFLMercurySubBatchLayoutTilingOperation : NFLSubBatchLayoutTilingOperation
{
}

+ (void)drawDebugNodeViewInFrame:(struct CGRect)arg1 context:(struct CGContext *)arg2 layoutSeed:(CDStruct_bfc4548b)arg3;
+ (unsigned long long)tileInfosUsedCount;
+ (BOOL)mayTileInfosTileSubBatchLayout:(id)arg1 withLayoutSeed:(CDStruct_bfc4548b)arg2;
- (id)tiledSubBatchLayoutWithRankedLayoutsByTileInfo:(id)arg1;
- (id)rankedLayoutRequests;
- (BOOL)isReliable;

@end

