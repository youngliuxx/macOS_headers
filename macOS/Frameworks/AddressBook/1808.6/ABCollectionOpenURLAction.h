//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/ABCollectionAbstractAction.h>

@class NSDataDetector;

__attribute__((visibility("hidden")))
@interface ABCollectionOpenURLAction : ABCollectionAbstractAction
{
    NSDataDetector *_urlDetector;
}

@property(retain) NSDataDetector *urlDetector; // @synthesize urlDetector=_urlDetector;
- (void).cxx_destruct;
- (void)makeURLDetectorIfNecessary;
- (void)executeWithTarget:(id)arg1;

@end

