//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ShareKit/NSObject-Protocol.h>

@class NSData, NSImage, NSString, NSURL;

@protocol SHKShareItem <NSObject>
@property(readonly, retain) NSString *shareItemType;

@optional
@property(readonly, retain) NSData *shareItemData;
@property(readonly, retain) NSImage *shareItemImage;
@property(readonly, retain) NSString *shareItemString;
@property(readonly, retain) NSURL *shareItemURL;
@end

