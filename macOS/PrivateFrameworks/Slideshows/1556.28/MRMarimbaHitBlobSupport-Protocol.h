//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class MRGesture, MRHitBlob, NSDictionary;

@protocol MRMarimbaHitBlobSupport
- (void)cancelGesture:(MRGesture *)arg1;
- (void)endGesture:(MRGesture *)arg1;
- (void)doGesture:(MRGesture *)arg1;
- (void)beginGesture:(MRGesture *)arg1;
- (BOOL)endLiveUpdateForHitBlob:(MRHitBlob *)arg1;
- (BOOL)beginLiveUpdateForHitBlob:(MRHitBlob *)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toHitBlob:(MRHitBlob *)arg2;
- (BOOL)getOnScreenVertices:(struct CGPoint [4])arg1 forHitBlob:(MRHitBlob *)arg2;
- (MRHitBlob *)blobHitAtPoint:(struct CGPoint)arg1 fromObjectsForObjectIDs:(NSDictionary *)arg2 localPoint:(struct CGPoint *)arg3;
@end

