//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSTableViewDataSource-Protocol.h"

@class NSPopUpButton, NSString, NSView, NSWindow, SKDisk, SUBaseProgressSheet;

@interface SUImageSheetController : NSWindowController <NSTableViewDataSource>
{
    NSWindow *_parentWindow;
    SKDisk *_targetDisk;
    SUBaseProgressSheet *_progressSheet;
    NSView *_accessoryView;
    NSPopUpButton *_formatPopup;
    NSPopUpButton *_encryptionPopup;
}

@property __weak NSPopUpButton *encryptionPopup; // @synthesize encryptionPopup=_encryptionPopup;
@property __weak NSPopUpButton *formatPopup; // @synthesize formatPopup=_formatPopup;
@property __weak NSView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain) SUBaseProgressSheet *progressSheet; // @synthesize progressSheet=_progressSheet;
@property(retain) SKDisk *targetDisk; // @synthesize targetDisk=_targetDisk;
@property(retain) NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
- (void).cxx_destruct;
- (id)_encryptionTypes;
- (id)_diskImageFormats;
- (void)_imageProgressWithDictionary:(id)arg1;
- (id)imageDiskToFile:(id)arg1 ofType:(id)arg2 withEncryption:(id)arg3;
- (id)diskAtURLIsValidForSave:(id)arg1;
- (void)showWindowWithParentWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)windowDidLoad;
- (id)initWithTargetDisk:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

