//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSButton, NSStackView, NSView, _TtC12ControlStrip18ControlStripButton, _TtC12ControlStrip24ControlStripBackdropView;

@interface ControlStrip.ControlStripFull : NSViewController
{
    // Error parsing type: , name: closeView
    // Error parsing type: , name: closeButton
    // Error parsing type: , name: backdropView
    // Error parsing type: , name: buttonStack
    // Error parsing type: , name: configuration
}

+ (BOOL)slowMotion;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, readonly) _TtC12ControlStrip18ControlStripButton *muteButton;
- (void)sizeToFit;
- (void)reloadDefaults;
- (void)dismiss:(id)arg1;
- (void)setupFull;
- (void)awakeFromNib;
@property(nonatomic, retain) NSStackView *buttonStack; // @synthesize buttonStack;
@property(nonatomic, retain) _TtC12ControlStrip24ControlStripBackdropView *backdropView; // @synthesize backdropView;
@property(nonatomic, retain) NSButton *closeButton; // @synthesize closeButton;
@property(nonatomic, retain) NSView *closeView; // @synthesize closeView;

@end

