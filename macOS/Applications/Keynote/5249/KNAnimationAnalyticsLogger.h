//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KNPlaybackSession;

@interface KNAnimationAnalyticsLogger : NSObject
{
    KNPlaybackSession *_session;
    BOOL _isShowcast;
}

+ (BOOL)logAnalyticsWithPlaybackSession:(id)arg1 isShowcast:(BOOL)arg2;
@property(readonly, nonatomic) BOOL isShowcast; // @synthesize isShowcast=_isShowcast;
- (void)p_logAnimationAnalyticsValue:(long long)arg1 forKey:(id)arg2 isDistribution:(BOOL)arg3 message:(struct __asl_object_s *)arg4;
- (BOOL)logAnalytics;
@property(readonly, nonatomic) BOOL shouldLogAnalytics;
- (void)dealloc;
- (id)initWithPlaybackSession:(id)arg1 isShowcast:(BOOL)arg2;
- (id)init;

@end

