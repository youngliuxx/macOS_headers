//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "Skype.EmoticonScrubber.h"

#import "NSScrubberDataSource-Protocol.h"
#import "NSScrubberDelegate-Protocol.h"
#import "NSScrubberFlowLayoutDelegate-Protocol.h"

@interface Skype.EmoticonScrubber (Skype) <NSScrubberDataSource, NSScrubberDelegate, NSScrubberFlowLayoutDelegate>
- (void)scrubber:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (struct CGSize)scrubber:(id)arg1 layout:(id)arg2 sizeForItemAtIndex:(long long)arg3;
- (id)scrubber:(id)arg1 viewForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsForScrubber:(id)arg1;
@end

