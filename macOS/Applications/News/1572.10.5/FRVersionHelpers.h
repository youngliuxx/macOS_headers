//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCRemoteDefaults, LSApplicationProxy;

@interface FRVersionHelpers : NSObject
{
    FCRemoteDefaults *_remoteDefaults;
    LSApplicationProxy *_applicationProxy;
}

+ (id)applicationName;
+ (id)systemVersionString;
@property(retain, nonatomic) LSApplicationProxy *applicationProxy; // @synthesize applicationProxy=_applicationProxy;
@property(readonly, nonatomic) FCRemoteDefaults *remoteDefaults; // @synthesize remoteDefaults=_remoteDefaults;
- (void).cxx_destruct;
- (BOOL)isDeviceAbandoned;
- (BOOL)isOSUpdateRequired;
- (long long)minimumOSVersionNumberForUpdate;
- (id)minimumOSVersionStringForUpdate;
- (long long)systemVersionNumber;
- (id)updateInfos;
- (id)minimumVersionString;
- (id)applicationVersionString;
- (long long)minimumVersionNumber;
- (long long)applicationVersionNumber;
- (BOOL)isAppUpdateRequired;
- (void)updateAppObsolescenceState;
- (BOOL)isUpdateRequired;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (id)initWithBackgroundTaskable:(id)arg1 applicationProxy:(id)arg2;
- (id)init;

@end

