//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCharacterSet;

@interface HelpTokenizer : NSObject
{
    NSCharacterSet *whitespaceCharSet;
}

+ (id)sdmLocalizationForLanguage:(id)arg1;
+ (int)countOfGramsInTokenString:(id)arg1;
+ (int)countOfGramsInTokenString:(id)arg1 usingSeparator:(id)arg2;
+ (id)tokenizerForLanguage:(id)arg1;
- (BOOL)isValidSuggestionTokenString:(id)arg1;
- (id)nGramTokenCountFromString:(id)arg1 options:(id)arg2;
- (id)nGramsFromTokenizedString:(id)arg1;
- (id)stringFromTokenizedString:(id)arg1;
- (id)tokenizedStringFromString:(id)arg1;
- (id)tokenCountFromString:(id)arg1 options:(id)arg2;
- (void)dealloc;
- (id)initWithKnownPhraseArray:(id)arg1 language:(id)arg2;

@end

