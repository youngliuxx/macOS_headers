//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FrontBoard/FBBundleInfo.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>

@class FBApplicationDefaults, FBMutableApplicationDefaults, FBProfileManager, NSArray, NSDictionary, NSNumber, NSSet, NSString, NSURL;

@interface FBApplicationInfo : FBBundleInfo <BSDescriptionProviding>
{
    NSURL *_executableURL;
    NSURL *_bundleContainerURL;
    NSURL *_dataContainerURL;
    NSURL *_sandboxURL;
    double _lastModifiedDate;
    NSString *_preferenceDomain;
    NSString *_signerIdentity;
    NSDictionary *_environmentVariables;
    NSDictionary *_lazy_entitlements;
    BOOL _provisioningProfileValidated;
    BOOL _isManaged;
    NSString *_sdkVersion;
    NSArray *_customMachServices;
    BOOL _hasViewServicesEntitlement;
    NSString *_appIDEntitlement;
    unsigned long long _type;
    NSArray *_requiredCapabilities;
    NSArray *_tags;
    NSArray *_deviceFamilies;
    BOOL _enabled;
    BOOL _newsstand;
    BOOL _restricted;
    BOOL _blocked;
    BOOL _beta;
    FBMutableApplicationDefaults *_defaults;
    NSSet *_backgroundModes;
    unsigned long long _supportedInterfaceOrientations;
    BOOL _exitsOnSuspend;
    BOOL _requiresPersistentWiFi;
    float _minimumBrightnessLevel;
    NSArray *_externalAccessoryProtocols;
    long long _ratingRank;
    NSNumber *_itemID;
    NSNumber *_purchaserDSID;
    NSNumber *_downloaderDSID;
    NSArray *_lazy_folderNames;
    NSString *_lazy_fallbackFolderName;
    BOOL _installing;
    BOOL _uninstalling;
    struct os_unfair_lock_s _lock;
    BOOL _initialized;
    FBProfileManager *_profileManager;
    BOOL _pendingUninstall;
    BOOL _blockedForScreenTimeExpiration;
}

+ (id)_genreNameForID:(long long)arg1;
+ (id)_configureEnvironment:(id)arg1 withInfo:(id)arg2 isPreApex:(BOOL)arg3;
+ (void)_buildDefaults:(id)arg1 fromInfo:(id)arg2 entitlements:(id)arg3 appType:(unsigned long long)arg4 isOnOrAfterOkemo:(BOOL)arg5;
+ (unsigned long long)_computeSupportedInterfaceOrientationsWithInfo:(id)arg1 forDefaults:(id)arg2;
+ (unsigned long long)_applicationTypeForProxy:(id)arg1;
@property(retain, nonatomic, getter=_profileManager, setter=_setProfileManager:) FBProfileManager *profileManager; // @synthesize profileManager=_profileManager;
@property(readonly, nonatomic, getter=isBlockedForScreenTimeExpiration) BOOL blockedForScreenTimeExpiration; // @synthesize blockedForScreenTimeExpiration=_blockedForScreenTimeExpiration;
@property(readonly, nonatomic) unsigned long long supportedInterfaceOrientations; // @synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations;
@property(nonatomic, getter=_isPendingUninstall, setter=_setPendingUninstall:) BOOL pendingUninstall; // @synthesize pendingUninstall=_pendingUninstall;
@property(nonatomic, getter=_isUninstalling, setter=_setUninstalling:) BOOL uninstalling; // @synthesize uninstalling=_uninstalling;
@property(nonatomic, getter=_isInstalling, setter=_setInstalling:) BOOL installing; // @synthesize installing=_installing;
@property(readonly, copy, nonatomic, getter=_appIDEntitlement) NSString *appIDEntitlement; // @synthesize appIDEntitlement=_appIDEntitlement;
@property(readonly, nonatomic) NSNumber *downloaderDSID; // @synthesize downloaderDSID=_downloaderDSID;
@property(readonly, nonatomic) NSNumber *purchaserDSID; // @synthesize purchaserDSID=_purchaserDSID;
@property(readonly, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) long long ratingRank; // @synthesize ratingRank=_ratingRank;
@property(readonly, nonatomic) NSArray *externalAccessoryProtocols; // @synthesize externalAccessoryProtocols=_externalAccessoryProtocols;
@property(readonly, nonatomic) float minimumBrightnessLevel; // @synthesize minimumBrightnessLevel=_minimumBrightnessLevel;
@property(readonly, nonatomic) BOOL requiresPersistentWiFi; // @synthesize requiresPersistentWiFi=_requiresPersistentWiFi;
@property(readonly, nonatomic, getter=isExitsOnSuspend) BOOL exitsOnSuspend; // @synthesize exitsOnSuspend=_exitsOnSuspend;
@property(readonly, nonatomic) FBApplicationDefaults *defaults; // @synthesize defaults=_defaults;
@property(readonly, nonatomic, getter=isBeta) BOOL beta; // @synthesize beta=_beta;
@property(readonly, nonatomic, getter=isBlocked) BOOL blocked; // @synthesize blocked=_blocked;
@property(readonly, nonatomic, getter=isRestricted) BOOL restricted; // @synthesize restricted=_restricted;
@property(readonly, nonatomic, getter=isNewsstand) BOOL newsstand; // @synthesize newsstand=_newsstand;
@property(readonly, nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(readonly, nonatomic) NSArray *deviceFamilies; // @synthesize deviceFamilies=_deviceFamilies;
@property(readonly, nonatomic) NSArray *requiredCapabilities; // @synthesize requiredCapabilities=_requiredCapabilities;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSArray *customMachServices; // @synthesize customMachServices=_customMachServices;
@property(readonly, copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(readonly, nonatomic, getter=isProvisioningProfileValidated) BOOL provisioningProfileValidated; // @synthesize provisioningProfileValidated=_provisioningProfileValidated;
@property(readonly, nonatomic) BOOL hasViewServicesEntitlement; // @synthesize hasViewServicesEntitlement=_hasViewServicesEntitlement;
@property(readonly, nonatomic) NSDictionary *environmentVariables; // @synthesize environmentVariables=_environmentVariables;
@property(readonly, copy, nonatomic) NSString *signerIdentity; // @synthesize signerIdentity=_signerIdentity;
@property(readonly, copy, nonatomic) NSString *preferenceDomain; // @synthesize preferenceDomain=_preferenceDomain;
@property(readonly, nonatomic) double lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(readonly, nonatomic) NSURL *sandboxURL; // @synthesize sandboxURL=_sandboxURL;
@property(readonly, nonatomic) NSURL *dataContainerURL; // @synthesize dataContainerURL=_dataContainerURL;
@property(readonly, nonatomic) NSURL *bundleContainerURL; // @synthesize bundleContainerURL=_bundleContainerURL;
@property(readonly, nonatomic) NSURL *executableURL; // @synthesize executableURL=_executableURL;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (void)_lock_loadFolderNamesIfNecessary;
- (void)_loadFromProxy:(id)arg1;
- (void)_synchronize:(CDUnknownBlockType)arg1;
- (void)_overrideTags:(id)arg1;
- (long long)_mapSignatureStateFromTrustState:(unsigned long long)arg1;
- (id)_applicationTrustData;
@property(readonly, nonatomic, getter=hasUniversalProvisioningProfile) BOOL universalProvisioningProfile; // @dynamic universalProvisioningProfile;
@property(readonly, nonatomic, getter=hasFreeDeveloperProvisioningProfile) BOOL freeDeveloperProvisioningProfile; // @dynamic freeDeveloperProvisioningProfile;
@property(readonly, nonatomic) long long signatureState; // @dynamic signatureState;
- (BOOL)statusBarHiddenForInterfaceOrientation:(long long)arg1 onDisplay:(id)arg2;
- (BOOL)builtOnOrAfterSDKVersion:(id)arg1;
- (void)acceptApplicationSignatureIdentity;
- (BOOL)supportsDeviceFamily:(unsigned long long)arg1;
- (BOOL)supportsAllInterfaceOrientations;
- (BOOL)supportsInterfaceOrientation:(long long)arg1;
- (BOOL)supportsBackgroundMode:(id)arg1;
@property(readonly, nonatomic) NSString *fallbackFolderName;
@property(readonly, nonatomic) NSArray *folderNames;
@property(readonly, nonatomic) NSDictionary *entitlements;
- (id)_initWithApplicationProxy:(id)arg1;
- (id)_initForProfileManagerTesting;
- (id)initWithApplicationProxy:(id)arg1;
- (id)_initWithBundleProxy:(id)arg1 overrideURL:(id)arg2;
- (id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

