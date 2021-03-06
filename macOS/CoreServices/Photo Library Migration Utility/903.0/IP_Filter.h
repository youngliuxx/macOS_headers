//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

#import "NSCoding-Protocol.h"

@class Album, AlbumMgr, HgRidList, NSDictionary, NSString;

@interface IP_Filter : NSObject <NSCoding>
{
    int mType;
    int mOperation;
    NSDictionary *mUserInfo;
    BOOL mIsEnabled;
    NSString *mStringArg;
    NSString *mStringArg2;
    double mDoubleArg1;
    double mDoubleArg2;
    double mDoubleArg3;
    struct CGRect mRectArg;
    long long mLongArg1;
    long long mLongArg2;
    unsigned long long mKeyArg1;
    long long mIntArg1;
    long long mIntArg2;
    HgRidList *mRidList;
    AlbumMgr *mAlbumMgr;
    Album *mShelfAlbum;
}

+ (void)initialize;
+ (id)copyFilter:(id)arg1;
+ (id)gpsLocationFilterForLatitude:(double)arg1 longitude:(double)arg2;
+ (id)cityNameFilter:(id)arg1 countryName:(id)arg2;
+ (id)cityNameFilter:(id)arg1 stateName:(id)arg2;
+ (id)countryNameFilter:(id)arg1;
+ (id)stateNameFilter:(id)arg1;
+ (id)cityNameFilter:(id)arg1;
+ (id)placeNameFilter:(id)arg1;
+ (id)placesFilter:(BOOL)arg1;
+ (id)peopleFilter:(BOOL)arg1 faceKeys:(id)arg2;
+ (id)namedPeopleFilter;
+ (id)photoKeyFilterWithPhotoKeys:(id)arg1;
+ (id)userPlaceKeyFilterMultiple:(id)arg1;
+ (id)userPlaceKeyFilter:(unsigned long long)arg1;
+ (id)placeKeyFilterMultiple:(id)arg1;
+ (id)placeKeyFilter:(unsigned long long)arg1;
+ (id)gpsRegionFilter:(struct CGRect)arg1 inRange:(BOOL)arg2;
+ (id)gpsProximityFilter:(id)arg1 matchAll:(BOOL)arg2 inRange:(BOOL)arg3;
+ (id)exifFlashFilterWithOperation:(int)arg1 value:(int)arg2;
+ (id)exifCameraModelFilterWithOperation:(int)arg1 value:(id)arg2;
+ (id)exifFocalLengthFilterWithOperation:(int)arg1 min:(double)arg2 max:(double)arg3;
+ (id)exifApertureFilterWithOperation:(int)arg1 min:(double)arg2 max:(double)arg3;
+ (id)exifISOFilterWithOperation:(int)arg1 min:(long long)arg2 max:(long long)arg3;
+ (id)exifShutterFilterWithOperation:(int)arg1 min:(double)arg2 max:(double)arg3;
+ (id)photoActionFilterWithOperation:(int)arg1 value:(int)arg2;
+ (id)photoAttributeFilterWithOperation:(int)arg1 value:(int)arg2;
+ (id)rankingFilterWithOperation:(int)arg1 startRanking:(long long)arg2 endRanking:(long long)arg3;
+ (id)rollLocationFilterForRegion:(struct CGRect)arg1;
+ (id)rollFilter:(int)arg1 operation:(int)arg2 text:(id)arg3 useSpaceSeparators:(BOOL)arg4 matchAll:(BOOL)arg5;
+ (id)rollFilter:(int)arg1 operation:(int)arg2 rollDelta:(long long)arg3 albumMgr:(id)arg4;
+ (id)rollFilter:(int)arg1 operation:(int)arg2 key:(unsigned long long)arg3;
+ (id)rollFilterWithRollsInRidList:(id)arg1;
+ (id)albumFilter:(int)arg1 operation:(int)arg2 key:(unsigned long long)arg3;
+ (id)keywordCategoryFilterWithOperation:(int)arg1 categoryKey:(unsigned long long)arg2;
+ (id)keywordFilterWithOperation:(int)arg1 keys:(id)arg2;
+ (id)albumFilter:(int)arg1 operation:(int)arg2 text:(id)arg3;
+ (id)textFilter:(int)arg1 operation:(int)arg2 text:(id)arg3 caseInsensitive:(BOOL)arg4;
+ (id)userTextFilter:(id)arg1 matchAll:(BOOL)arg2;
+ (id)dateFilter:(int)arg1 operation:(int)arg2 value:(long long)arg3 span:(long long)arg4;
+ (id)dateFilter:(int)arg1 operation:(int)arg2 startDate:(id)arg3 endDate:(id)arg4;
+ (id)dateFilterWithOperation:(int)arg1 startPhotoDate:(double)arg2 endPhotoDate:(double)arg3;
+ (id)filterTypeToPropertyKey:(int)arg1;
+ (int)propertyKeyToFilterType:(id)arg1;
+ (long long)dateQualifierForOperation:(int)arg1;
+ (long long)arrayQualifierForOperation:(int)arg1;
+ (long long)stringQualifierForOperation:(int)arg1 caseInsensitive:(BOOL)arg2;
+ (long long)numberQualifierForOperation:(int)arg1;
+ (int)operationForQualifier:(long long)arg1;
+ (id)statisticKeyForAction:(id)arg1;
+ (id)actionForStatisticKey:(id)arg1;
@property struct CGRect rectArg; // @synthesize rectArg=mRectArg;
@property unsigned long long keyArg1; // @synthesize keyArg1=mKeyArg1;
@property long long intArg2; // @synthesize intArg2=mIntArg2;
@property long long intArg1; // @synthesize intArg1=mIntArg1;
@property long long longArg2; // @synthesize longArg2=mLongArg2;
@property long long longArg1; // @synthesize longArg1=mLongArg1;
@property double doubleArg3; // @synthesize doubleArg3=mDoubleArg3;
@property double doubleArg2; // @synthesize doubleArg2=mDoubleArg2;
@property double doubleArg1; // @synthesize doubleArg1=mDoubleArg1;
@property(retain) NSString *stringArg2; // @synthesize stringArg2=mStringArg2;
@property(retain) NSString *stringArg; // @synthesize stringArg=mStringArg;
@property BOOL isEnabled; // @synthesize isEnabled=mIsEnabled;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo=mUserInfo;
@property int operation; // @synthesize operation=mOperation;
@property int type; // @synthesize type=mType;
- (id).cxx_construct;
- (void)setAlbumMgr:(id)arg1;
- (id)albumMgr;
- (id)ridList;
- (id)operationLabel;
- (id)typeLabel;
- (void)loadFromFilter:(id)arg1;
- (id)initWithFilter:(id)arg1;
- (id)rkQueryForDatabase:(id)arg1 usingTimeZone:(id)arg2;
- (id)rkQueryForDatabase:(id)arg1;
- (id)initWithRKQuery:(id)arg1;
- (void)encodeWithDictionary:(id)arg1;
- (void)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithType:(int)arg1 operation:(int)arg2;

@end

