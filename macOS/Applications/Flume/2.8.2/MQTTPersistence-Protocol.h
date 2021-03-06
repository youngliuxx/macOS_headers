//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSData, NSDate, NSString;
@protocol MQTTFlow;

@protocol MQTTPersistence
@property(nonatomic) unsigned long long maxSize;
@property(nonatomic) BOOL persistent;
@property(nonatomic) unsigned long long maxMessages;
@property(nonatomic) unsigned long long maxWindowSize;
- (void)sync;
- (id <MQTTFlow>)flowforClientId:(NSString *)arg1 incomingFlag:(BOOL)arg2 messageId:(unsigned short)arg3;
- (NSArray *)allFlowsforClientId:(NSString *)arg1 incomingFlag:(BOOL)arg2;
- (void)deleteAllFlowsForClientId:(NSString *)arg1;
- (void)deleteFlow:(id <MQTTFlow>)arg1;
- (id <MQTTFlow>)storeMessageForClientId:(NSString *)arg1 topic:(NSString *)arg2 data:(NSData *)arg3 retainFlag:(BOOL)arg4 qos:(unsigned char)arg5 msgId:(unsigned short)arg6 incomingFlag:(BOOL)arg7 commandType:(unsigned char)arg8 deadline:(NSDate *)arg9;
- (unsigned long long)windowSize:(NSString *)arg1;
@end

