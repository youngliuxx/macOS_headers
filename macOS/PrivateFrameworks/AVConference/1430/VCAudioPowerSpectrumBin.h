//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCAudioPowerSpectrumBin : NSObject
{
    struct _VCRange _frequencyRange;
    float _powerLevel;
}

@property(nonatomic) float powerLevel; // @synthesize powerLevel=_powerLevel;
@property(nonatomic) struct _VCRange frequencyRange; // @synthesize frequencyRange=_frequencyRange;
- (id)initWithFrequencyRange:(struct _VCRange)arg1;
- (id)description;

@end

