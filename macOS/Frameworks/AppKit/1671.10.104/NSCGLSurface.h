//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSCGLSurface : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)flushRect:(struct CGRect)arg1;
- (BOOL)isAttachedToCGLContext:(struct _CGLContextObject *)arg1;
- (void)attachToCGLContext:(struct _CGLContextObject *)arg1;
@property(readonly, copy) struct CGColorSpace *colorSpace;
@property(readonly, getter=isOpaque) BOOL opaque;
@property(readonly, getter=isFloatingPoint) BOOL floatingPoint;
@property(readonly) unsigned long long bitsPerPixel;
@property(readonly) unsigned long long bitsPerComponent;
@property(readonly, getter=isStereo) BOOL stereo;
@property(readonly) unsigned int displayMask;
@property(readonly) struct CGSize size;
- (id)initWithSize:(struct CGSize)arg1 colorSpace:(struct CGColorSpace *)arg2 atomic:(BOOL)arg3;
- (id)init;
@property(readonly, copy) struct CGImage *rightImage;
@property(readonly, copy) struct CGImage *leftImage;
@property(readonly, copy) struct CGImage *image;
@property(readonly, copy) id layerContents;

@end

