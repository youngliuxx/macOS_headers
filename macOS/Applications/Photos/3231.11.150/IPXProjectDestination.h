//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXModelDestination.h"

@interface IPXProjectDestination : IPXModelDestination
{
    BOOL _skipResourceLoad;
}

+ (id)projectExtensionDestinationForAlbum:(id)arg1;
+ (id)slideshowDestinationForAlbum:(id)arg1;
+ (id)printProjectDestinationForAlbum:(id)arg1;
@property(nonatomic) BOOL skipResourceLoad; // @synthesize skipResourceLoad=_skipResourceLoad;
- (id)initWithSlideshow:(id)arg1;
- (id)initWithPrintProject:(id)arg1;

@end

