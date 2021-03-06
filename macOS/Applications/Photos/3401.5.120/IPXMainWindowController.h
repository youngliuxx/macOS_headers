//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UXKit/UXWindowController.h>

#import "IPXSelectionProvider-Protocol.h"
#import "NSToolbarDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"
#import "NSWindowRestoration-Protocol.h"
#import "PFResourceAccessClient-Protocol.h"
#import "PFURLHandlingSubsystem-Protocol.h"

@class IPXPrologueController, IPXWorkspaceController, IPXWorkspaceModel, NSProgressIndicator, NSString, NSToolbarItem, NSUndoManager, NSWindow, UXNavigationController;

@interface IPXMainWindowController : UXWindowController <NSWindowDelegate, NSToolbarDelegate, PFResourceAccessClient, NSWindowRestoration, IPXSelectionProvider, PFURLHandlingSubsystem>
{
    NSUndoManager *_internalUndoManager;
    IPXPrologueController *_prologueController;
    NSProgressIndicator *_loadingIndicator;
    UXNavigationController *_undefinedLibraryViewController;
    BOOL _preventWindowResizing;
    BOOL _closing;
    BOOL _contentReady;
    IPXWorkspaceModel *_workspace;
    IPXWorkspaceController *_workspaceController;
    NSToolbarItem *_navigationBarToolbarItem;
    NSWindow *_loadingWindow;
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(getter=isContentReady) BOOL contentReady; // @synthesize contentReady=_contentReady;
@property(retain) NSWindow *loadingWindow; // @synthesize loadingWindow=_loadingWindow;
@property __weak NSToolbarItem *navigationBarToolbarItem; // @synthesize navigationBarToolbarItem=_navigationBarToolbarItem;
@property(readonly) IPXWorkspaceController *workspaceController; // @synthesize workspaceController=_workspaceController;
@property(getter=isClosing) BOOL closing; // @synthesize closing=_closing;
@property(nonatomic) BOOL preventWindowResizing; // @synthesize preventWindowResizing=_preventWindowResizing;
@property(readonly) IPXWorkspaceModel *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (id)selectionProviderCurrentSelection;
- (void)handleURL:(id)arg1;
- (BOOL)urlRequiresSystemLibrary:(id)arg1;
- (BOOL)willHandleURL:(id)arg1;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (void)windowDidResize:(id)arg1;
- (id)windowWillReturnFieldEditor:(id)arg1 toObject:(id)arg2;
- (id)windowWillReturnUndoManager:(id)arg1;
- (unsigned long long)window:(id)arg1 willUseFullScreenPresentationOptions:(unsigned long long)arg2;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowWillExitFullScreen:(id)arg1;
- (void)windowDidEnterFullScreen:(id)arg1;
- (void)windowWillEnterFullScreen:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (struct CGRect)_loadingIndicatorRect;
- (void)_contentReportedReady;
- (void)_stopLoadingIndicator;
- (void)_startLoadingIndicator;
@property(readonly) BOOL metadataMenuItemsEnabled;
@property(readonly) BOOL workspaceMenuItemsEnabled;
- (void)resourceWillShutdown:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)close;
- (void)_setupWorkspaceRootViewController;
- (void)switchToPrologue:(id)arg1;
- (BOOL)assignLibrary:(id)arg1 error:(id *)arg2;
- (void)showWindow:(id)arg1;
- (id)window;
- (id)topViewController;
- (id)initWithModel:(id)arg1;
- (id)_viewControllerForUndefinedLibrary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

