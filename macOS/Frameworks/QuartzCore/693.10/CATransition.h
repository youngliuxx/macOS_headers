//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CAAnimation.h>

@class NSDictionary, NSString;

@interface CATransition : CAAnimation
{
}

+ (id)CA_attributes;
@property(retain) id filter;
@property float endProgress;
@property float startProgress;
@property(copy) NSString *subtype;
@property(copy) NSString *type;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (struct Animation *)_copyRenderAnimationForLayer:(id)arg1;
- (BOOL)_setCARenderAnimation:(struct Animation *)arg1 layer:(id)arg2;
@property unsigned int transitionFlags;
@property(copy) NSDictionary *options;

@end

