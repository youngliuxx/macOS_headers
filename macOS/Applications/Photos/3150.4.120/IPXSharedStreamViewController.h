//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXAlbumContentBrowserController.h"

#import "IPXWorkspaceMenuItemEnableProtocol-Protocol.h"
#import "SBLSharedServicesManagerReceiver-Protocol.h"

@class IPXLibrary, IPXSharedStream, IPXSharedStreamSettingsController, IPXSharedTabBrowserController, NSArray, NSString, UXBarButtonItem;

@interface IPXSharedStreamViewController : IPXAlbumContentBrowserController <IPXWorkspaceMenuItemEnableProtocol, SBLSharedServicesManagerReceiver>
{
    BOOL _observingSharedPhotoStream;
    IPXSharedStream *_sharedStream;
    IPXSharedTabBrowserController *_sharedTabBrowserController;
    IPXSharedStreamSettingsController *_settingsController;
    UXBarButtonItem *_peopleBarButtonItem;
    UXBarButtonItem *_spacerToolbarButton;
    UXBarButtonItem *_addPhotosToolbarButton;
    NSArray *_stockToolbarItems;
    IPXLibrary *_canonicalLibrary;
}

@property(retain) IPXLibrary *canonicalLibrary; // @synthesize canonicalLibrary=_canonicalLibrary;
@property(retain) NSArray *stockToolbarItems; // @synthesize stockToolbarItems=_stockToolbarItems;
@property BOOL observingSharedPhotoStream; // @synthesize observingSharedPhotoStream=_observingSharedPhotoStream;
@property(retain, nonatomic) UXBarButtonItem *addPhotosToolbarButton; // @synthesize addPhotosToolbarButton=_addPhotosToolbarButton;
@property(retain, nonatomic) UXBarButtonItem *spacerToolbarButton; // @synthesize spacerToolbarButton=_spacerToolbarButton;
@property(retain, nonatomic) UXBarButtonItem *peopleBarButtonItem; // @synthesize peopleBarButtonItem=_peopleBarButtonItem;
@property(retain) IPXSharedStreamSettingsController *settingsController; // @synthesize settingsController=_settingsController;
@property(retain) IPXSharedTabBrowserController *sharedTabBrowserController; // @synthesize sharedTabBrowserController=_sharedTabBrowserController;
@property(readonly) IPXSharedStream *sharedStream; // @synthesize sharedStream=_sharedStream;
- (void).cxx_destruct;
- (void)libraryDeletedAlbum:(id)arg1;
- (id)multicaster:(id)arg1 queueForSelector:(SEL)arg2;
- (id)navigationDestination;
- (void)a_setContainerSort:(id)arg1;
- (void)a_trashItem:(id)arg1;
- (void)_availableDestinationForVersion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)a_importOrReveal:(id)arg1;
- (id)menuForSelection:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)metadataMenuItemsEnabled;
- (unsigned long long)assetsViewController:(id)arg1 draggingUpdated:(id)arg2;
- (unsigned long long)assetsViewController:(id)arg1 draggingEntered:(id)arg2;
- (BOOL)assetsViewController:(id)arg1 performDragOperation:(id)arg2;
- (BOOL)assetsViewController:(id)arg1 prepareForDragOperation:(id)arg2;
- (BOOL)canImportIntoThisAlbum;
- (void)assetsViewController:(id)arg1 createdDraggingSession:(id)arg2 forItemsAtIndexPaths:(id)arg3;
- (id)selectionProviderCurrentSelectionWithOptions:(long long)arg1;
- (id)selectionProviderCurrentLiteSelection;
- (void)assetsViewController:(id)arg1 assetAtIndexPath:(id)arg2 wasRightClickedWithEvent:(id)arg3 targetingAssets:(id)arg4;
- (Class)assetsViewController:(id)arg1 itemCellClassForViewStyle:(unsigned long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingStream;
- (void)startObservingStream;
- (void)dealloc;
- (id)initWithSharedStream:(id)arg1 library:(id)arg2;
- (void)_removeAssetItems:(id)arg1 skipWarning:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_showSettings:(id)arg1;
- (void)_setupNavigationItem;
- (void)_showPhotoPicker;
- (void)_addVersions:(id)arg1;
- (void)_startObservingUserDefaults;
- (void)_stopObservingUserDefaults;
- (BOOL)scrollToBottomOnLoadComingFrom:(id)arg1;
- (void)loadView;
- (id)extraToolbarButtons;
- (void)resourceWillShutdown:(struct NSObject *)arg1;
- (BOOL)_thisAlbumCanBeRearranged;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

