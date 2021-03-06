//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "PrintingManager.h"

@class NSMutableArray;

@interface PrintingManagerForPrinting : PrintingManager
{
    NSMutableArray *_arraysOfConversationMembersToGenerateHTMLFor;
    unsigned long long _numberOfConversationsNotYetLoaded;
}

@property(nonatomic) unsigned long long numberOfConversationsNotYetLoaded; // @synthesize numberOfConversationsNotYetLoaded=_numberOfConversationsNotYetLoaded;
@property(retain, nonatomic) NSMutableArray *arraysOfConversationMembersToGenerateHTMLFor; // @synthesize arraysOfConversationMembersToGenerateHTMLFor=_arraysOfConversationMembersToGenerateHTMLFor;
- (void).cxx_destruct;
- (void)_printIfAllNecessaryConversationMembersHaveBeenLoaded;
- (void)dispatch;
- (id)progressMessage;
- (void)dealloc;

@end

