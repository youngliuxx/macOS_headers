//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSKSearchReplaceProvider-Protocol.h"

@class NSString;

@interface TSTSearchReplaceProvider : NSObject <TSKSearchReplaceProvider>
{
    NSString *_findString;
    NSString *_replaceString;
    unsigned long long _options;
    unsigned long long _replacementCount;
}

@property(nonatomic) unsigned long long replacementCount; // @synthesize replacementCount=_replacementCount;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) NSString *replaceString; // @synthesize replaceString=_replaceString;
@property(readonly, nonatomic) NSString *findString; // @synthesize findString=_findString;
- (void).cxx_destruct;
- (void)appendReplacementCount:(unsigned long long)arg1;
- (id)initWithSearchReplaceProvider:(id)arg1;
- (id)initWithFindString:(id)arg1 replaceString:(id)arg2 options:(unsigned long long)arg3;

@end

