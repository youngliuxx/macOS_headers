//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class EWSFreeBusyView, EWSResponseMessageType, NSString;

@interface EWSFreeBusyResponseType : NSObject <XSDefinitionProvider>
{
    EWSResponseMessageType *_ResponseMessage;
    EWSFreeBusyView *_FreeBusyView;
}

+ (id)definition;
@property(retain, nonatomic) EWSFreeBusyView *FreeBusyView; // @synthesize FreeBusyView=_FreeBusyView;
@property(retain, nonatomic) EWSResponseMessageType *ResponseMessage; // @synthesize ResponseMessage=_ResponseMessage;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

