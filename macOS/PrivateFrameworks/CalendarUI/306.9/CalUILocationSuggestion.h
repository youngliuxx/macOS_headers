//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CalUILocation, NSString;

@interface CalUILocationSuggestion : NSObject
{
    BOOL _isGroup;
    CalUILocation *_location;
    NSString *_groupTitle;
}

@property BOOL isGroup; // @synthesize isGroup=_isGroup;
@property(retain) NSString *groupTitle; // @synthesize groupTitle=_groupTitle;
@property(retain) CalUILocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)description;
- (id)displayString;

@end

