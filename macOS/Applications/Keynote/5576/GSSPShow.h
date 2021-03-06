//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPMessageBase.h"

@class GSSPRecording, GSSPSize;

@interface GSSPShow : GSSPMessageBase
{
    GSSPSize *mSize;
    BOOL mLoopPresentation;
    long long mMode;
    double mAutoplayTransitionDelay;
    double mAutoplayBuildDelay;
    BOOL mIdleTimerActive;
    double mIdleTimerDelay;
    BOOL mAutomaticallyPlaysOnOpen;
    GSSPRecording *mRecording;
    BOOL mDefinedRecording;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
@property(readonly, nonatomic) BOOL definedRecording; // @synthesize definedRecording=mDefinedRecording;
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
- (BOOL)clearRecording;
- (void)setRecording:(id)arg1;
- (id)recording;
- (void)setAutomaticallyPlaysOnOpen:(BOOL)arg1;
- (BOOL)automaticallyPlaysOnOpen;
- (void)setIdleTimerDelay:(double)arg1;
- (double)idleTimerDelay;
- (void)setIdleTimerActive:(BOOL)arg1;
- (BOOL)idleTimerActive;
- (void)setAutoplayBuildDelay:(double)arg1;
- (double)autoplayBuildDelay;
- (void)setAutoplayTransitionDelay:(double)arg1;
- (double)autoplayTransitionDelay;
- (void)setMode:(long long)arg1;
- (long long)mode;
- (void)setLoopPresentation:(BOOL)arg1;
- (BOOL)loopPresentation;
- (void)setSize:(id)arg1;
- (id)size;

@end

