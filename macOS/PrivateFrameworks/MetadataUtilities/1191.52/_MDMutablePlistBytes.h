//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MetadataUtilities/_MDPlistBytes.h>

@interface _MDMutablePlistBytes : _MDPlistBytes
{
    int _currentUID;
    int _parentSize;
    int _parentCount;
    int *_parentUIDs;
    struct __CFDictionary *_ptrUIDMap;
    unsigned long long *_fillPtr;
    unsigned long long *_limitPtr;
    unsigned long long *_rleTagPtr;
    unsigned long long _curContainer;
}

+ (struct __MDPlistBytes *)createDictionaryPlistBytesUsingBlock:(CDUnknownBlockType)arg1;
+ (struct __MDPlistBytes *)createArrayPlistBytesUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1 useMalloc:(_Bool)arg2;
- (id)initWithCapacity:(unsigned long long)arg1 useMalloc:(_Bool)arg2 zone:(struct _malloc_zone_t *)arg3;

@end

