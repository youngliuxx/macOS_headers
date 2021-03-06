//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSSPAutoEncodable-Protocol.h"
#import "NSCopying-Protocol.h"
#import "TSCHNotifyOnModify-Protocol.h"
#import "TSCHUnretainedParent-Protocol.h"
#import "TSDMixing-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, TSCHChartGrid, TSCHChartInfo;

@interface TSCHChartModel : NSObject <GSSPAutoEncodable, TSCHNotifyOnModify, TSCHUnretainedParent, TSDMixing, NSCopying>
{
    TSCHChartInfo *mInfo;
    TSCHChartGrid *mGrid;
    int mScatterFormat;
    unsigned long long mMultiDataSetIndex;
    BOOL mIsTransient;
    NSMutableArray *mSeriesList;
    NSMutableArray *mAxisList;
    NSMutableDictionary *mRefLinesMap;
    unsigned long long mNumberOfSeriesForCalculatingBarWidth;
    BOOL mModelInvalid;
    NSMutableDictionary *mModelManagedCaches;
    NSMutableDictionary *mSeriesDimensionsByGridIndex;
    NSMutableDictionary *mGridIndexesBySeriesDimension;
    NSDictionary *mAxisIDToDataFormatterPersistableStyleObjectsMap;
    NSDictionary *mSeriesIndexToDataFormatterPersistableStyleObjectsMap;
    BOOL mDisableCachingMediatorData;
    int mCachedChartMediatorGridDirection;
}

@property(readonly, nonatomic) BOOL isTransient; // @synthesize isTransient=mIsTransient;
@property(nonatomic) int scatterFormat; // @synthesize scatterFormat=mScatterFormat;
@property(retain, nonatomic) TSCHChartGrid *grid; // @synthesize grid=mGrid;
@property(nonatomic) __weak TSCHChartInfo *chartInfo; // @synthesize chartInfo=mInfo;
- (void).cxx_destruct;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (unsigned long long)styleSwapIndexForReferenceLine:(id)arg1;
- (id)referenceLineForStyleSwapIndex:(unsigned long long)arg1;
- (BOOL)hasReferenceLines;
- (unsigned long long)gridIndexForSeriesDimension:(id)arg1;
- (id)seriesDimensionForGridIndex:(unsigned long long)arg1;
- (void)p_setBimapEntryForSeriesDimension:(id)arg1 andGridIndex:(unsigned long long)arg2;
- (void)forceLoadDefaultData;
- (void)loadDefaultDataIfNotDirty;
- (void)p_loadDefaultData;
- (void)loadDefaultDataIfNotDirtyWithGridRowIds:(id)arg1 gridColumnIds:(id)arg2 forDocumentLocale:(id)arg3;
- (void)p_loadDefaultDataWithGridRowIds:(id)arg1 gridColumnIds:(id)arg2 forDocumentLocale:(id)arg3;
- (BOOL)p_shouldLoadDefaultData;
- (void)setNameForMultiDataSetCategory:(unsigned long long)arg1 toName:(id)arg2;
- (void)setNameForCategory:(unsigned long long)arg1 toName:(id)arg2;
- (id)nameForMultiDataSetCategory:(unsigned long long)arg1;
- (id)nameForCategory:(unsigned long long)arg1;
- (unsigned long long)multiDataSetCategoryIndexForCategory:(unsigned long long)arg1;
- (unsigned long long)categoryForMultiDataSetCategoryIndex:(unsigned long long)arg1;
- (id)dataSetNameForMultiDataModel;
- (unsigned long long)p_multiDataSetCategoryIndexForCategory:(unsigned long long)arg1;
- (id)nameForSeries:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long analyticsDataSize;
@property(readonly, nonatomic) unsigned long long numberOfValues;
@property(readonly, nonatomic) unsigned long long numberOfMultiDataSets;
@property(readonly, nonatomic) unsigned long long numberOfChunkableMultiDataSets;
@property(readonly, nonatomic) unsigned long long numberOfMultiDataSetCategories;
- (unsigned long long)numberOfGridValues;
- (id)seriesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfSeriesForCalculatingBarWidth;
@property(readonly, nonatomic) unsigned long long maxNumberOfReferenceLines; // @dynamic maxNumberOfReferenceLines;
@property(readonly, nonatomic) unsigned long long numberOfSeries;
- (id)noSyncSeriesList;
@property(readonly, nonatomic) NSDictionary *referenceLinesMap;
- (int)cachedChartMediatorGridDirection;
- (id)cachedDataFormatterPersistableStyleObjectAtSeriesIndex:(unsigned long long)arg1;
- (id)cachedDataFormatterPersistableStyleObjectForID:(id)arg1;
- (void)disableCachingMediatorDataDuringBlock:(CDUnknownBlockType)arg1;
- (void)setShouldCacheMediatorData:(BOOL)arg1;
@property(readonly, nonatomic) NSArray *seriesList;
- (id)axisForID:(id)arg1;
@property(readonly, nonatomic) NSArray *categoryAxisList;
@property(readonly, nonatomic) NSArray *valueAxisList;
- (id)noSyncAxisList;
@property(readonly, nonatomic) NSArray *axisList;
- (void)validateIfNeededWithSeriesNonStyleMigration:(BOOL)arg1;
- (void)validateIfNeeded;
- (void)invalidateModel;
- (id)cachedObjectForKey:(id)arg1;
- (void)setCacheObject:(id)arg1 forKey:(id)arg2;
- (void)invalidateCaches;
- (void)resetSeriesStorage;
- (void)p_synchronizeModelWithSeriesNonStyleMigration:(BOOL)arg1;
- (void)p_synchronizeModel;
- (void)p_synchronizeReferenceLines;
- (void)p_cacheMediatorChartGridDirection;
- (void)p_cacheSeriesDataFormatters;
- (void)p_cacheAxisDataFormatters;
- (BOOL)p_disableCachingMediatorData;
- (void)p_postSynchronizeAxisList;
- (void)p_synchronizeSeriesListWithSeriesNonStyleMigration:(BOOL)arg1;
- (void)p_synchronizeSeriesList;
- (void)p_synchronizeAxisList;
- (void)p_synchronizeAxis:(id)arg1 class:(Class)arg2 axisID:(id)arg3 axisIndex:(unsigned long long)arg4 styleIndex:(unsigned long long)arg5 usedAxes:(id)arg6 unusedAxes:(id)arg7;
- (id)p_axisForID:(id)arg1;
- (unsigned long long)defaultOrdinalForAxisType:(int)arg1 seriesIndex:(unsigned long long)arg2;
- (void)updateTransientModelFromInfoModel;
@property(nonatomic) unsigned long long multiDataSetIndex;
- (unsigned long long)p_archivedMultiDataSetIndex;
- (unsigned long long)p_lastMultiDataSetIndex;
- (void)enumerateMultiDataModelsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL isMultiData;
- (void)willModify;
@property(readonly, nonatomic) id syncRoot;
- (void)clearParent;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithChartInfo:(id)arg1 dataSetIndex:(unsigned long long)arg2;
- (id)initWithChartInfo:(id)arg1;
- (void)setNameForSeries:(unsigned long long)arg1 toName:(id)arg2;
- (id)axisOfClass:(Class)arg1 forIDForPresetImport:(id)arg2;
- (id)seriesAtIndexForPresetImport:(unsigned long long)arg1;
- (id)initForPresetImportWithChartInfo:(id)arg1;
- (id)seriesAtIndexForHiddenDataExport:(unsigned long long)arg1;
- (id)pieSeriesModelCacheForSeries:(unsigned long long)arg1;
- (id)lineAreaModelCacheForSeries:(unsigned long long)arg1;
- (id)legendModelCache;
- (void)clearTextEditingSelectionPath;
- (void)setTextEditingSelectionPath:(id)arg1 string:(id)arg2;
- (id)barModelCacheForSeries:(unsigned long long)arg1;
- (void)loadFromPreUFFArchive:(const struct ChartModelArchive *)arg1 unarchiver:(id)arg2 contextForUpgradeOnly:(id)arg3;
- (id)gsspFormattedDataWithRetainer:(struct GSSPRetainer *)arg1;
- (void)populateGSSPChartModel:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (void)saveToUnityArchive:(struct ChartArchive *)arg1 forCopy:(BOOL)arg2;
- (void)loadFromUnityArchive:(const struct ChartArchive *)arg1 unarchiver:(id)arg2 contextForUpgradeOnly:(id)arg3 chartInfo:(id)arg4;

@end

