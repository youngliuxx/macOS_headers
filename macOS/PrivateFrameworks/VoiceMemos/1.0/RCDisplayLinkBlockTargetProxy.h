//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VoiceMemos/RCDisplayLinkTargetProxy.h>

__attribute__((visibility("hidden")))
@interface RCDisplayLinkBlockTargetProxy : RCDisplayLinkTargetProxy
{
    CDUnknownBlockType _handlerBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType handlerBlock; // @synthesize handlerBlock=_handlerBlock;
- (void)displayLinkFired:(id)arg1;
- (void)dealloc;
- (id)initWithHandlerBlock:(CDUnknownBlockType)arg1;

@end

