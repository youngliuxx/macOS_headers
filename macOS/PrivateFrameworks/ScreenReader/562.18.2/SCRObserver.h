//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReaderCore/SCRCTargetSelector.h>

#import <ScreenReader/NSCopying-Protocol.h>

@class NSDictionary, NSMutableArray, NSString, SCRUIElement;

__attribute__((visibility("hidden")))
@interface SCRObserver : SCRCTargetSelector <NSCopying>
{
    BOOL _isValid;
    NSMutableArray *_firingCopies;
    unsigned int _cancelMask;
    SCRUIElement *_uiElement;
    SCRUIElement *_origUIElement;
    NSString *_name;
    NSDictionary *_userInfo;
}

@property(readonly, retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) unsigned int cancelMask; // @synthesize cancelMask=_cancelMask;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, retain, nonatomic) SCRUIElement *origUIElement; // @synthesize origUIElement=_origUIElement;
@property(readonly, retain, nonatomic) SCRUIElement *uiElement; // @synthesize uiElement=_uiElement;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (void)_enqueueFiringCopy:(id)arg1;
- (id)_dequeueFiringCopyWithUIElement:(id)arg1 originalUIElement:(id)arg2 userInfo:(id)arg3;
- (void)fireWithAXUIElement:(struct __AXUIElement *)arg1 origUIElement:(id)arg2 userInfo:(id)arg3;
- (void)fireWithUIElement:(struct __AXUIElement *)arg1 originalUIElement:(id)arg2 userInfo:(id)arg3;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 name:(id)arg3 cancelMask:(unsigned int)arg4;
- (void)invalidate;

@end

