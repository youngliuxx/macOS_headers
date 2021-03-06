//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VectorKit/VKTile.h>

@class GEOVectorTile, VKMapTileList, VKSharedResources;

__attribute__((visibility("hidden")))
@interface VKVectorTile : VKTile
{
    GEOVectorTile *_modelTile;
    double _contentScale;
    long long _source;
    unsigned char _originalLoadReason;
    float _maximumStyleZ;
    float _textureScale;
    shared_ptr_a3c46825 _styleManager;
    VKSharedResources *_sharedResources;
    VKMapTileList *_fragments;
}

@property(readonly, nonatomic) unsigned char originalLoadReason; // @synthesize originalLoadReason=_originalLoadReason;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
@property(readonly, nonatomic) VKMapTileList *fragments; // @synthesize fragments=_fragments;
@property(nonatomic) float maximumStyleZ; // @synthesize maximumStyleZ=_maximumStyleZ;
@property(nonatomic) float textureScale; // @synthesize textureScale=_textureScale;
@property(retain, nonatomic) GEOVectorTile *modelTile; // @synthesize modelTile=_modelTile;
@property(retain, nonatomic) VKSharedResources *sharedResources; // @synthesize sharedResources=_sharedResources;
@property(nonatomic) shared_ptr_a3c46825 styleManager; // @synthesize styleManager=_styleManager;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) long long vectorType;
- (id)initWithKey:(const struct VKTileKey *)arg1 modelTile:(id)arg2 userInfo:(id)arg3 styleManager:(shared_ptr_a3c46825)arg4 sharedResources:(id)arg5 contentScale:(double)arg6 device:(struct Device *)arg7;
- (id)initWithKey:(const struct VKTileKey *)arg1;

@end

