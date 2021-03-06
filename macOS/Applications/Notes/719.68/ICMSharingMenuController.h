//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCloudSharingServiceDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "NSSharingServiceDelegate-Protocol.h"
#import "NSSharingServicePickerDelegate-Protocol.h"

@class ICMMainWindowController, NSManagedObjectContext, NSMenu, NSSharingServicePicker, NSString, NSUserActivity, NSView, NSWindow;

@interface ICMSharingMenuController : NSObject <NSMenuDelegate, NSSharingServiceDelegate, NSSharingServicePickerDelegate, NSCloudSharingServiceDelegate>
{
    NSMenu *_shareMenu;
    NSSharingServicePicker *_fileMenuSharePicker;
    NSWindow *_displayWindow;
    NSView *_anchorView;
    NSUserActivity *_userActivity;
    NSString *_title;
    NSManagedObjectContext *_workerContext;
}

+ (id)keyPathsForValuesAffectingCanShare;
+ (id)cloudSharingItemForObject:(id)arg1;
+ (id)sharingItemsForNote:(id)arg1;
@property(retain, nonatomic) NSManagedObjectContext *workerContext; // @synthesize workerContext=_workerContext;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(nonatomic) __weak NSView *anchorView; // @synthesize anchorView=_anchorView;
@property(nonatomic) __weak NSWindow *displayWindow; // @synthesize displayWindow=_displayWindow;
@property(retain, nonatomic) NSSharingServicePicker *fileMenuSharePicker; // @synthesize fileMenuSharePicker=_fileMenuSharePicker;
@property(retain, nonatomic) NSMenu *shareMenu; // @synthesize shareMenu=_shareMenu;
- (void).cxx_destruct;
- (void)menuNeedsUpdate:(id)arg1;
- (id)anchoringViewForSharingService:(id)arg1 showRelativeToRect:(struct CGRect *)arg2 preferredEdge:(unsigned long long *)arg3;
- (void)sharingService:(id)arg1 didStopSharing:(id)arg2;
- (void)sharingService:(id)arg1 didSaveShare:(id)arg2;
- (unsigned long long)optionsForSharingService:(id)arg1 shareProvider:(id)arg2;
- (id)sharingServiceNamed:(id)arg1 displayWindow:(id)arg2 anchorView:(id)arg3;
- (id)sharingServicePickerWithItems:(id)arg1 displayWindow:(id)arg2 anchorView:(id)arg3 title:(id)arg4;
- (void)resetProperties;
- (void)sharingService:(id)arg1 didShareItems:(id)arg2;
- (void)sharingService:(id)arg1 didFailToShareItems:(id)arg2 error:(id)arg3;
- (void)sharingService:(id)arg1 willShareItems:(id)arg2;
- (id)standardShareMenuItemWithItems:(id)arg1;
- (id)shareMenuItemForNote:(id)arg1;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2;
- (id)sharingService:(id)arg1 sharedItemsFromProposedItems:(id)arg2;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;
@property(readonly, nonatomic) BOOL canShare;
@property(readonly, nonatomic) ICMMainWindowController *mainWindowController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

