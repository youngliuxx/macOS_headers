//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPSosBase.h"

#import "GSSPAutoDecodable-Protocol.h"

@class GSSPUIDMap;

@interface GSSPMultiTableRemapper : GSSPSosBase <GSSPAutoDecodable>
{
    unsigned int mPurpose;
    BOOL mShouldStealReferences;
    BOOL mCanReuseTableNames;
    vector_ce2c5aca mOwnerUidMapper;
    GSSPUIDMap *mChartToBackingTable;
    BOOL mCrossDocumentPaste;
    BOOL mNestedInnerRemapper;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
+ (CDUnknownFunctionPointerType)defaultDecodeConversionFunc;
+ (CDUnknownFunctionPointerType)autoDecodeConversionFunc;
+ (void)setAutoDecodeConversionFuncForDocServer:(CDUnknownFunctionPointerType)arg1;
+ (Class)autoDecodedClass;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)dspClassName;
- (id)jsonNSDictionaryValue;
- (void)populateJsonNSDictionaryValueToDictionary:(id)arg1;
- (int)p_getDiffEncodingScoreWith:(id)arg1;
- (void)p_populateStructHashKey:(struct GSSPHashKeyBuilder *)arg1;
- (unsigned long long)p_getStructHashKeyLength;
- (int)getStructHashId;
- (void)serializeRequiredFieldsWithSerializationContext:(struct GSSPSerializationContext *)arg1 withNextFieldNeedSerialize:(BOOL)arg2 diffBy:(id)arg3;
- (void)serializeOptionalFieldsWithSerializationContext:(struct GSSPSerializationContext *)arg1 withNextFieldNeedSerialize:(BOOL)arg2 diffBy:(id)arg3;
- (id)dspTypeIdString;
- (void)populateRequiredField:(int)arg1 fromContext:(struct GSSPDeserializationContext *)arg2;
- (void)populateOptionalField:(int)arg1 fromContext:(struct GSSPDeserializationContext *)arg2;
- (void)shallowCopyAllFieldsFrom:(id)arg1;
- (void)dealloc;
- (void)setNestedInnerRemapper:(BOOL)arg1;
- (BOOL)nestedInnerRemapper;
- (void)setCrossDocumentPaste:(BOOL)arg1;
- (BOOL)crossDocumentPaste;
- (void)setChartToBackingTable:(id)arg1;
- (id)chartToBackingTable;
- (void)setOwnerUidMapper:(const vector_ce2c5aca *)arg1;
- (vector_ce2c5aca *)ownerUidMapper;
- (void)setCanReuseTableNames:(BOOL)arg1;
- (BOOL)canReuseTableNames;
- (void)setShouldStealReferences:(BOOL)arg1;
- (BOOL)shouldStealReferences;
- (void)setPurpose:(unsigned int)arg1;
- (unsigned int)purpose;

@end

