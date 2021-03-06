//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/ABLinksUnlinkedRecordsCommandFactory.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface ABLinksInsertedRecordsCommandFactory : ABLinksUnlinkedRecordsCommandFactory
{
    NSArray *_insertedRecords;
}

@property(copy) NSArray *insertedRecords; // @synthesize insertedRecords=_insertedRecords;
- (id)combineInsertedAndMatchingRecords:(id)arg1;
- (id)fetchContactsWithIdentifiers:(id)arg1;
- (id)identifiersOfCollidedPeople;
- (id)fetchPeople;
- (Class)builtCommandClass;
- (void)dealloc;

@end

