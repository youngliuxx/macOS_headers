//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PerformanceAnalysis/PAMemRange.h>

@class PAMallocStackTreeFrame, PAMemAllocationCategory;

@interface PAMemAllocation : PAMemRange
{
    PAMemAllocationCategory *category;
    PAMallocStackTreeFrame *treeLocation;
    BOOL purgeState;
    BOOL isLeak;
}

+ (id)uniquedStringForString:(id)arg1;
+ (id)getStringCache;
@property PAMallocStackTreeFrame *treeLocation; // @synthesize treeLocation;
@property BOOL purgeState; // @synthesize purgeState;
@property BOOL isLeak; // @synthesize isLeak;
@property PAMemAllocationCategory *category; // @synthesize category;
- (id)binary;
- (id)type;
- (id)mallocZone;
- (id)name;
- (id)fullDescriptionString;
- (BOOL)isEqual:(id)arg1;
- (void)writeContentsToBuffer:(void *)arg1 StringDict:(id)arg2;
- (id)initWithPAMemAllocationSerialized:(struct PAMemAllocationSerialized *)arg1 WithIndexToMemCategoriesArray:(id *)arg2 WithIndexToStackArray:(id *)arg3 WithNonLeakMemAllocationCategories:(id)arg4 WithStringIndex:(id *)arg5;
- (id)initWithRawInfoOfMemAllocation:(id)arg1;
- (id)initWithAddress:(unsigned long long)arg1 andSize:(unsigned long long)arg2;

@end

