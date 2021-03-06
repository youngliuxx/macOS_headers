//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PKBundleComponent, PKBundleComponentVersion;

@interface PKFirmwareBundleComponent : NSObject
{
    long long _type;
    NSArray *_variants;
    NSArray *_models;
    PKBundleComponent *_bundle;
}

+ (long long)typeForString:(id)arg1;
@property(retain) PKBundleComponent *bundle; // @synthesize bundle=_bundle;
@property(retain) NSArray *models; // @synthesize models=_models;
@property(retain) NSArray *variants; // @synthesize variants=_variants;
@property long long type; // @synthesize type=_type;
@property(readonly) PKBundleComponentVersion *bundleComponentVersion;
@property(readonly) NSString *bundlePath;
- (void)dealloc;

@end

