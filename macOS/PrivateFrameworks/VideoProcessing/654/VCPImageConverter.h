//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface VCPImageConverter : NSObject
{
    int _pixelFormat;
    int _width;
    int _height;
    struct CGColorSpace *_rgbColorSpace;
    struct CGContext *_cgContext;
    struct __CVBuffer *_rgbFrame;
    struct __CVPixelBufferPool *_yuvFrames;
    struct OpaqueVTPixelTransferSession *_rgbToYuv;
}

- (int)convertImage:(struct CGImage *)arg1 yuvFrame:(struct __CVBuffer **)arg2;
- (int)resize:(int)arg1 height:(int)arg2;
- (void)dealloc;
- (id)initWithPixelFormat:(int)arg1;
- (id)init;

@end

