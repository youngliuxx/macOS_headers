//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FLUTableCellView.h"

#import "NSMenuDelegate-Protocol.h"
#import "NSTextViewDelegate-Protocol.h"

@class FLUAvatarButton, FLUHoverButton, FLUImageView, FLULabel, FLUMessage, FLUMessagePreviewButton, FLUScaleToFillButton, FLUTextEntityLabel, FLUView, NSMutableArray, NSString, YRKSpinningProgressIndicator;
@protocol FLUMediaMessageTableCellViewDelegate;

@interface FLUMediaMessageTableCellView : FLUTableCellView <NSTextViewDelegate, NSMenuDelegate>
{
    BOOL _firstRow;
    BOOL _lastRow;
    BOOL _repeatMessage;
    BOOL _lastMessage;
    BOOL _hideImage;
    BOOL _hidePreview;
    FLUMessage *_message;
    id <FLUMediaMessageTableCellViewDelegate> _delegate;
    CDUnknownBlockType _refreshMessageBlock;
    FLUAvatarButton *_avatarButton;
    FLUHoverButton *_usernameButton;
    FLULabel *_replyLabel;
    FLUTextEntityLabel *_messageLabel;
    FLULabel *_seenLabel;
    FLULabel *_timestampLabel;
    FLUHoverButton *_resendButton;
    FLUImageView *_likedImageView;
    FLUHoverButton *_likeButton;
    FLULabel *_logLabel;
    NSMutableArray *_likedByUsersAvatarButtons;
    FLUAvatarButton *_sharedAvatarButton;
    FLUImageView *_sharedImageView;
    FLULabel *_sharedItemLabel;
    FLULabel *_sharedItemSublabel;
    FLUMessagePreviewButton *_sharedMediaImageButton;
    FLUView *_previewItemOverlayView;
    FLULabel *_previewItemLabel;
    FLULabel *_previewItemSublabel;
    FLUImageView *_sharedVideoImageView;
    FLUScaleToFillButton *_linkImageButton;
    YRKSpinningProgressIndicator *_progressIndicatorView;
}

+ (id)logLabelAttributes;
+ (id)timestampLabelAttributes;
+ (id)seenLabelAttributes;
+ (id)replyLabelAttributes:(BOOL)arg1;
+ (id)sharedLinkSublabelAttributes:(BOOL)arg1;
+ (id)sharedLinkLabelAttributes:(BOOL)arg1;
+ (id)previewItemSublabelAttributes:(BOOL)arg1;
+ (id)previewItemLabelAttributes:(BOOL)arg1;
+ (id)sharedItemSublabelAttributes:(BOOL)arg1;
+ (id)sharedItemLabelAttributes:(BOOL)arg1;
+ (id)usernameAttributes;
+ (id)emojiMessageAttributes;
+ (id)messageAttributes:(BOOL)arg1 adjustToUserPreference:(BOOL)arg2;
+ (double)messageHeightForMessage:(id)arg1 withWidth:(double)arg2;
+ (double)viewHeightForMessage:(id)arg1 withWidth:(double)arg2 repeatMessage:(BOOL)arg3 firstRow:(BOOL)arg4 lastRow:(BOOL)arg5;
@property(retain, nonatomic) YRKSpinningProgressIndicator *progressIndicatorView; // @synthesize progressIndicatorView=_progressIndicatorView;
@property(retain, nonatomic) FLUScaleToFillButton *linkImageButton; // @synthesize linkImageButton=_linkImageButton;
@property(retain, nonatomic) FLUImageView *sharedVideoImageView; // @synthesize sharedVideoImageView=_sharedVideoImageView;
@property(retain, nonatomic) FLULabel *previewItemSublabel; // @synthesize previewItemSublabel=_previewItemSublabel;
@property(retain, nonatomic) FLULabel *previewItemLabel; // @synthesize previewItemLabel=_previewItemLabel;
@property(retain, nonatomic) FLUView *previewItemOverlayView; // @synthesize previewItemOverlayView=_previewItemOverlayView;
@property(retain, nonatomic) FLUMessagePreviewButton *sharedMediaImageButton; // @synthesize sharedMediaImageButton=_sharedMediaImageButton;
@property(retain, nonatomic) FLULabel *sharedItemSublabel; // @synthesize sharedItemSublabel=_sharedItemSublabel;
@property(retain, nonatomic) FLULabel *sharedItemLabel; // @synthesize sharedItemLabel=_sharedItemLabel;
@property(retain, nonatomic) FLUImageView *sharedImageView; // @synthesize sharedImageView=_sharedImageView;
@property(retain, nonatomic) FLUAvatarButton *sharedAvatarButton; // @synthesize sharedAvatarButton=_sharedAvatarButton;
@property(retain, nonatomic) NSMutableArray *likedByUsersAvatarButtons; // @synthesize likedByUsersAvatarButtons=_likedByUsersAvatarButtons;
@property(retain, nonatomic) FLULabel *logLabel; // @synthesize logLabel=_logLabel;
@property(retain, nonatomic) FLUHoverButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) FLUImageView *likedImageView; // @synthesize likedImageView=_likedImageView;
@property(retain, nonatomic) FLUHoverButton *resendButton; // @synthesize resendButton=_resendButton;
@property(retain, nonatomic) FLULabel *timestampLabel; // @synthesize timestampLabel=_timestampLabel;
@property(retain, nonatomic) FLULabel *seenLabel; // @synthesize seenLabel=_seenLabel;
@property(retain, nonatomic) FLUTextEntityLabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) FLULabel *replyLabel; // @synthesize replyLabel=_replyLabel;
@property(retain, nonatomic) FLUHoverButton *usernameButton; // @synthesize usernameButton=_usernameButton;
@property(retain, nonatomic) FLUAvatarButton *avatarButton; // @synthesize avatarButton=_avatarButton;
@property(copy, nonatomic) CDUnknownBlockType refreshMessageBlock; // @synthesize refreshMessageBlock=_refreshMessageBlock;
@property(nonatomic) BOOL hidePreview; // @synthesize hidePreview=_hidePreview;
@property(nonatomic) BOOL hideImage; // @synthesize hideImage=_hideImage;
@property(nonatomic) BOOL lastMessage; // @synthesize lastMessage=_lastMessage;
@property(nonatomic) BOOL repeatMessage; // @synthesize repeatMessage=_repeatMessage;
@property(nonatomic) BOOL lastRow; // @synthesize lastRow=_lastRow;
@property(nonatomic) BOOL firstRow; // @synthesize firstRow=_firstRow;
@property(nonatomic) __weak id <FLUMediaMessageTableCellViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FLUMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)refreshView;
- (void)drawRect:(struct CGRect)arg1;
- (void)didPressResendMessageMenuItem:(id)arg1;
- (void)didPressDeleteMessageMenuItem:(id)arg1;
- (void)didPressUnlikeMessageMenuItem:(id)arg1;
- (void)didPressLikeMessageMenuItem:(id)arg1;
- (void)didPressDownloadMenuItem:(id)arg1;
- (void)didPressReportMenuItem:(id)arg1;
- (void)didPressResendButton:(id)arg1;
- (void)didPressLinkImageButton:(id)arg1;
- (void)didPressLikeButton:(id)arg1;
- (void)didPressAvatarButton:(id)arg1;
- (void)didPressSharedAvatarButton:(id)arg1;
- (void)didPressViewSharedUserButton:(id)arg1;
- (void)didPressViewSharedLocationButton:(id)arg1;
- (void)didPressViewSharedHashtagButton:(id)arg1;
- (void)didPressViewSharedMediaButton:(id)arg1;
- (void)didPressImageButton:(id)arg1;
- (void)didPressOpenTranslationProviderURL:(id)arg1;
- (void)didPressTranslateTextMenuItem:(id)arg1;
- (void)didPressCopyTextMenuItem:(id)arg1;
- (void)updateFrames;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGRect)sharedMediaButtonFrame;
- (void)updatePreviewImage:(BOOL)arg1;
- (void)updatePreviewLabels;
- (void)setMessage:(id)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)copy:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)didChangeDesignModeOption:(id)arg1;
- (void)setupAccessibility;
- (void)prepareForReuse;
- (void)dealloc;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

