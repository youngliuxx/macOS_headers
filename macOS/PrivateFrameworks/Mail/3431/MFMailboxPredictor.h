//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MFMailboxPredictor : NSObject
{
}

+ (id)_validMailboxIDsForMailboxIDs:(id)arg1 counts:(id)arg2;
+ (id)_mailboxIDsForSenders:(id)arg1 inMailboxes:(id)arg2 excludingMailboxes:(id)arg3 since:(id)arg4;
+ (id)_mailboxIDsForRecipients:(id)arg1 inMailboxes:(id)arg2 excludingMailboxes:(id)arg3 since:(id)arg4;
+ (id)_mailboxIDsForConversationIDs:(id)arg1 inMailboxes:(id)arg2 excludingMailboxes:(id)arg3 since:(id)arg4;
+ (id)_predictedMailboxForConversationIDs:(id)arg1 recipients:(id)arg2 senders:(id)arg3 since:(id)arg4 excludingMailboxes:(id)arg5;
+ (id)predictedMailboxForMessages:(id)arg1;
+ (id)_log;

@end

