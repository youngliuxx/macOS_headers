//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXDatabaseAlbumsController.h"

#import "RDAlbumCountQueryResultObserver-Protocol.h"
#import "RDFacesNotificationReceiver-Protocol.h"

@class IPXFacesItem, IPXLibrary, NSMutableDictionary, NSMutableSet, NSString, PFDispatchQueue;

@interface IPXDatabaseMagicAlbumsController : IPXDatabaseAlbumsController <RDAlbumCountQueryResultObserver, RDFacesNotificationReceiver>
{
    PFDispatchQueue *_magicSmartAlbumHideShowQueue;
    NSMutableSet *_onDemandMagicSmartAlbums;
    NSMutableDictionary *_magicSmartAlbumCountRefs;
    BOOL _isMyPhotoStreamLibrary;
    BOOL _checkedForVisibleMPSAlbum;
    IPXFacesItem *_facesItem;
    IPXLibrary *_library;
    BOOL _hiddenAlbumHasPhotos;
}

+ (id)arrangedBuiltInAlbumUUIDs;
+ (void)initialize;
- (void).cxx_destruct;
- (void)syncHiddenPhotosAlbumState;
- (void)setHiddenPhotosAlbumHidden:(BOOL)arg1;
- (BOOL)isHiddenPhotosAlbumHidden;
- (void)enableFacesNamingFlow:(BOOL)arg1;
- (void)peopleUpdated:(id)arg1;
- (void)peopleDeleted:(id)arg1;
- (void)peopleCreated:(id)arg1;
- (void)groupingFinishedForDatabase:(id)arg1 groupCount:(unsigned long long)arg2;
- (void)_updateFacesItemVisibilityOrThumbnail;
- (BOOL)_shouldDispayFacesItem;
- (void)queryResultChange:(id)arg1 forQueryResult:(id)arg2;
- (void)queryResultCountChange:(long long)arg1 forAlbum:(id)arg2;
- (void)magicAlbum:(id)arg1 setHidden:(BOOL)arg2;
- (void)hideAndUnhideBuiltInAlbums;
- (void)stopMonitoringObjectsSource;
- (void)startMonitoringObjectsSourceAndWaitForInitialData:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)assignQueryFilterResults:(id)arg1;
- (CDUnknownBlockType)objectsCollectionSortingComparator;
- (id)initialObjectsCollectionQueryFilterForDatabase:(id)arg1;
- (id)initWithLibrary:(id)arg1;
- (id)initWithDatabase:(id)arg1 parentDatabaseFolder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

