//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNCVPixelBufferConversionHelpers : NSObject
{
}

+ (unsigned long long)computeHashForCVPixelBuffer:(struct __CVBuffer *)arg1;
+ (BOOL)isCVPixelBuffer:(struct __CVBuffer *)arg1 equalToCVPixelBuffer:(struct __CVBuffer *)arg2;
+ (struct __CVBuffer *)createCVPixelBufferRefFromDictionaryRepresentation:(id)arg1;
+ (id)createDictionaryRepresentationOfCVPixelBuffer:(struct __CVBuffer *)arg1;

@end

