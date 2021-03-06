//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDKeyValueProxyVending-Protocol.h"
#import "TSUDateTimeFormatInspectorPropertyVendor-Protocol.h"
#import "TSUDurationFormatInspectorPropertyVendor-Protocol.h"

@class NSArray, NSNumber, NSSet, NSString, TSTCellRegion, TSTCellSelectionProperties, TSTCellUIDList, TSTTableEditor, TSUColor, TSUWidthLimitedQueue;
@protocol OS_dispatch_queue, TSTMacCellFillStandIn;

@interface TSTCellInspectorPropertyVendor : NSObject <TSUDateTimeFormatInspectorPropertyVendor, TSUDurationFormatInspectorPropertyVendor, TSDKeyValueProxyVending>
{
    BOOL mSelectionIsInfos;
    int mWorkingCellFormatType;
    double mGiveUpOnMixedStateAfter;
    NSArray *mPreviousModelChanges;
    BOOL mEditingConditionalStyles;
    TSUWidthLimitedQueue *mReadQueue;
    NSObject<OS_dispatch_queue> *mWriteQueue;
    BOOL mUpdatedSinceModelChange;
    BOOL mIgnoringChanges;
    TSTTableEditor *mTableEditor;
    TSTCellSelectionProperties *mCachedPropertiesForSelection;
    TSTCellSelectionProperties *mBaseCellProperties;
    TSTCellRegion *mSelectedCellRegion;
    NSSet *mSelectedInfos;
    TSTCellUIDList *mEmptyCellUIDListForPopups;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(nonatomic) BOOL ignoringChanges; // @synthesize ignoringChanges=mIgnoringChanges;
@property(retain, nonatomic) TSTCellUIDList *emptyCellUIDListForPopups; // @synthesize emptyCellUIDListForPopups=mEmptyCellUIDListForPopups;
@property(nonatomic) BOOL updatedSinceModelChange; // @synthesize updatedSinceModelChange=mUpdatedSinceModelChange;
@property(retain, nonatomic) NSSet *selectedInfos; // @synthesize selectedInfos=mSelectedInfos;
@property(retain, nonatomic) TSTCellRegion *selectedCellRegion; // @synthesize selectedCellRegion=mSelectedCellRegion;
@property(retain, nonatomic) TSTCellSelectionProperties *baseCellProperties; // @synthesize baseCellProperties=mBaseCellProperties;
@property(retain, nonatomic) TSTCellSelectionProperties *cachedPropertiesForSelection; // @synthesize cachedPropertiesForSelection=mCachedPropertiesForSelection;
@property(nonatomic) TSTTableEditor *tableEditor; // @synthesize tableEditor=mTableEditor;
- (id)_isSingleCellWideOrHighSelectionGivenByTable:(id)arg1 cellRegion:(id)arg2;
- (id)conditionalStyleRuleCount;
- (id)conditionalStyleSet;
- (id)customFormatSampleValueObject;
- (id)customFormatSamplePreviewString;
@property(readonly, nonatomic) NSSet *selectedDurationStyles;
@property(readonly, nonatomic) NSNumber *durationStyle;
@property(readonly, nonatomic) NSNumber *durationUnitLargest;
@property(readonly, nonatomic) NSNumber *durationUnitSmallest;
@property(readonly, nonatomic) NSNumber *durationUnitsAutomatic;
@property(readonly, nonatomic) NSNumber *popupMenusMixed;
- (id)popupInitialValue;
- (id)popupMenuChoices;
@property(readonly, nonatomic) NSSet *selectedTimeFormats;
@property(readonly, nonatomic) NSSet *selectedDateFormats;
@property(readonly, nonatomic) NSString *timeFormat;
@property(readonly, nonatomic) NSString *dateFormat;
- (double)controlIncValidationValue;
- (double)controlMaxValidationValue;
- (double)controlMinValidationValue;
- (id)controlIncrement;
- (id)controlMaximum;
- (id)controlMinimum;
- (id)selectedControlFormatTypes;
@property(readonly, nonatomic) NSNumber *controlFormatType;
- (id)paragraphBorderType;
- (id)paragraphRuleOffset;
- (id)paragraphStroke;
- (id)paragraphFill;
- (id)textBackground;
- (id)decimalTab;
- (id)tabs;
- (id)defaultTabStops;
- (id)writingDirection;
- (id)lineSpacing;
- (id)tracking;
- (id)rightIndent;
- (id)leftIndent;
- (id)firstLineIndent;
- (id)baselineShift;
- (id)spaceAfter;
- (id)spaceBefore;
- (id)padding;
- (id)valueForUndefinedKey:(id)arg1;
- (id)paragraphStyles;
- (id)alignment;
- (id)verticalAlignment;
- (id)textWrapped;
@property(readonly, nonatomic) NSSet *selectedFills;
- (id)fill;
- (id)singleCellHigh;
- (id)singleCellWide;
- (id)cellBorderInfo;
- (id)outlineLevel;
- (id)textShadow;
- (id)outline;
- (id)strikethrough;
- (id)underline;
- (id)hyphenate;
- (id)ligatures;
- (id)superscript;
- (BOOL)isStrikethru;
- (BOOL)isUnderline;
- (BOOL)isItalic;
- (BOOL)isBold;
- (id)emphasisMarks;
- (id)fontColor;
- (id)isNamedPointSize;
- (id)fontSize;
- (id)fontFamilies;
- (id)fonts;
- (id)numeralSystemTwosComplementEnabled;
- (id)numeralSystemUseTwosComplement;
- (id)numeralSystemUseMinusSign;
- (id)numeralSystemBasePlaces;
- (id)numeralSystemBase;
- (id)effectiveCurrencyDecimalPlacesValue;
- (id)currencyDecimalPlacesValue;
- (id)currencyDecimalPlacesString;
- (id)effectiveDecimalPlacesValue;
- (id)decimalPlacesValue;
- (id)decimalPlacesString;
- (id)selectedFractionAccuracies;
- (id)fractionAccuracy;
- (id)currencyThousandsSeparator;
- (id)thousandsSeparator;
- (id)selectedCurrencyNegativeStyles;
- (id)selectedNegativeStyles;
- (id)currencyNegativeStyleEnabled;
- (id)currencyNegativeStyle;
- (id)negativeStyle;
- (id)accountingStyle;
@property(readonly, nonatomic) NSSet *selectedCurrencyCodes;
- (id)currencyCode;
- (id)defaultCurrencyCode;
@property(readonly, nonatomic) NSNumber *unmixedImplicitFormatType;
- (id)selectedFormatTypesRespectingWorkingCellFormatType;
- (id)selectedFormatTypes;
@property(readonly, nonatomic) NSNumber *formatType;
- (BOOL)p_workingCellFormatTypeIsValid;
- (void)setWorkingCellFormatTypeInvalid;
- (void)setWorkingCellFormatType:(int)arg1;
- (id)multipleTablesSelected;
@property(readonly, nonatomic) BOOL timedOutComputingMixedState;
- (id)newProxyWithEditor:(id)arg1 documentRoot:(id)arg2;
- (void)p_cachePropertiesForTableSelectionIfNecessary;
- (void)p_cachePropertiesForInfoSelectionIfNecessary;
- (double)p_calculateMixedStateTimeoutForDynamicSelection:(BOOL)arg1;
- (void)p_cachePropertiesForSelectionIfNecessary;
- (BOOL)p_cachePropertiesForSelectionOnTable:(id)arg1;
- (BOOL)p_cacheBaseCellPropertiesForSelectionOnTable:(id)arg1 forceBaseCell:(BOOL)arg2;
- (void)invalidateForModelChange:(id)arg1;
@property(readonly, nonatomic) NSObject<TSTMacCellFillStandIn> *cachedCellFillStandIn;
@property(readonly, nonatomic) TSUColor *cachedFontColor;
@property(readonly, nonatomic) double cachedFontSize;
- (void)dealloc;
- (id)init;

@end

