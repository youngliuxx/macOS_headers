//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDVenueLabel, NSMutableArray, PBUnknownFields;

@interface GEOPDFilterElementInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_filterIds;
    GEOPDVenueLabel *_label;
}

+ (Class)filterIdType;
@property(retain, nonatomic) GEOPDVenueLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSMutableArray *filterIds; // @synthesize filterIds=_filterIds;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasLabel;
- (id)filterIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)filterIdsCount;
- (void)addFilterId:(id)arg1;
- (void)clearFilterIds;

@end

