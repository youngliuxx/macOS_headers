//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TSTInfo;

@protocol TSTDataSourceArchive <NSObject>
- (void)enumerateBodyRow:(unsigned long long)arg1 forTableInfo:(TSTInfo *)arg2 usingBlock:(void (^)(id, TSSPropertyMap *, TSSPropertyMap *, char *))arg3;
- (void)enumerateHeadersUsingBlock:(void (^)(NSString *, char *))arg1;
- (CDStruct_c0454aff)tableSize;
@end

