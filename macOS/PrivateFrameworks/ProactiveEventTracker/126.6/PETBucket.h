//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveEventTracker/NSCopying-Protocol.h>

@interface PETBucket : PBCodable <NSCopying>
{
    float _bucket;
    int _count;
    struct {
        unsigned int bucket:1;
        unsigned int count:1;
    } _has;
}

@property(nonatomic) int count; // @synthesize count=_count;
@property(nonatomic) float bucket; // @synthesize bucket=_bucket;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasCount;
@property(nonatomic) BOOL hasBucket;

@end

