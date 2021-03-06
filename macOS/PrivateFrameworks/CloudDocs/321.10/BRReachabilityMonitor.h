//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface BRReachabilityMonitor : NSObject
{
    NSHashTable *_reachabilityObservers;
    struct __SCNetworkReachability *_reachabilityRef;
    BOOL _isNetworkReachable;
    struct dispatch_queue_s *_queue;
}

+ (id)sharedReachabilityMonitor;
@property(nonatomic) BOOL isNetworkReachable; // @synthesize isNetworkReachable=_isNetworkReachable;
- (void)invalidate;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end

