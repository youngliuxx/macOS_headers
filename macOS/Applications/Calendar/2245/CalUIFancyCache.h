//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CalUIFancyCache : NSObject
{
    CDUnknownBlockType _creationBlock;
    NSMutableDictionary *_cache;
}

@property(retain) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property(copy) CDUnknownBlockType creationBlock; // @synthesize creationBlock=_creationBlock;
- (void).cxx_destruct;
- (id)createAndCacheObjectForKeyArray:(id)arg1;
- (id)objectForKeyArray:(id)arg1;
- (id)_findObjectForKeys:(id)arg1;
- (void)cacheObject:(id)arg1 forKeyArray:(id)arg2;
- (id)initWithObjectCreationBlock:(CDUnknownBlockType)arg1;

@end

