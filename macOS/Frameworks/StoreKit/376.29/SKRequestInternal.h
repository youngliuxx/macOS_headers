//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SKRequestDelegate;

@interface SKRequestInternal : NSObject
{
    id <SKRequestDelegate> _delegate;
    NSString *_identifier;
    int _state;
}

- (void)dealloc;

@end

