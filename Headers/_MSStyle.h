//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSModelObject.h>

@class MSGraphicsContextSettings, MSStyleBlur, MSStyleBorderOptions, MSStyleColorControls, MSTextStyle, NSArray, NSMutableArray;

@interface _MSStyle : MSModelObject
{
    unsigned long long _endMarkerType;
    long long _miterLimit;
    unsigned long long _startMarkerType;
    unsigned long long _windingRule;
    MSStyleBlur *_blur;
    MSStyleBorderOptions *_borderOptions;
    NSMutableArray *_borders;
    MSStyleColorControls *_colorControls;
    MSGraphicsContextSettings *_contextSettings;
    NSMutableArray *_fills;
    NSMutableArray *_innerShadows;
    NSMutableArray *_shadows;
    MSTextStyle *_textStyle;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void).cxx_destruct;
- (void)pluginDiffCompareChildrenAgainst:(id)arg1 treeComparison:(id)arg2;
- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)moveStyleShadowIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllStyleShadows;
- (void)removeStyleShadowsAtIndexes:(id)arg1;
- (void)removeStyleShadowAtIndex:(unsigned long long)arg1;
- (void)removeStyleShadow:(id)arg1;
- (void)insertStyleShadows:(id)arg1 afterStyleShadow:(id)arg2;
- (void)insertStyleShadow:(id)arg1 afterStyleShadow:(id)arg2;
- (void)insertStyleShadows:(id)arg1 beforeStyleShadow:(id)arg2;
- (void)insertStyleShadow:(id)arg1 beforeStyleShadow:(id)arg2;
- (void)insertStyleShadow:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addStyleShadows:(id)arg1;
- (void)addStyleShadow:(id)arg1;
- (void)moveStyleInnerShadowIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllStyleInnerShadows;
- (void)removeStyleInnerShadowsAtIndexes:(id)arg1;
- (void)removeStyleInnerShadowAtIndex:(unsigned long long)arg1;
- (void)removeStyleInnerShadow:(id)arg1;
- (void)insertStyleInnerShadows:(id)arg1 afterStyleInnerShadow:(id)arg2;
- (void)insertStyleInnerShadow:(id)arg1 afterStyleInnerShadow:(id)arg2;
- (void)insertStyleInnerShadows:(id)arg1 beforeStyleInnerShadow:(id)arg2;
- (void)insertStyleInnerShadow:(id)arg1 beforeStyleInnerShadow:(id)arg2;
- (void)insertStyleInnerShadow:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addStyleInnerShadows:(id)arg1;
- (void)addStyleInnerShadow:(id)arg1;
- (void)moveStyleFillIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllStyleFills;
- (void)removeStyleFillsAtIndexes:(id)arg1;
- (void)removeStyleFillAtIndex:(unsigned long long)arg1;
- (void)removeStyleFill:(id)arg1;
- (void)insertStyleFills:(id)arg1 afterStyleFill:(id)arg2;
- (void)insertStyleFill:(id)arg1 afterStyleFill:(id)arg2;
- (void)insertStyleFills:(id)arg1 beforeStyleFill:(id)arg2;
- (void)insertStyleFill:(id)arg1 beforeStyleFill:(id)arg2;
- (void)insertStyleFill:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addStyleFills:(id)arg1;
- (void)addStyleFill:(id)arg1;
- (void)moveStyleBorderIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllStyleBorders;
- (void)removeStyleBordersAtIndexes:(id)arg1;
- (void)removeStyleBorderAtIndex:(unsigned long long)arg1;
- (void)removeStyleBorder:(id)arg1;
- (void)insertStyleBorders:(id)arg1 afterStyleBorder:(id)arg2;
- (void)insertStyleBorder:(id)arg1 afterStyleBorder:(id)arg2;
- (void)insertStyleBorders:(id)arg1 beforeStyleBorder:(id)arg2;
- (void)insertStyleBorder:(id)arg1 beforeStyleBorder:(id)arg2;
- (void)insertStyleBorder:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addStyleBorders:(id)arg1;
- (void)addStyleBorder:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
@property(retain, nonatomic) MSTextStyle *textStyle; // @synthesize textStyle=_textStyle;
@property(retain, nonatomic) NSArray *shadows; // @synthesize shadows=_shadows;
@property(retain, nonatomic) NSArray *innerShadows; // @synthesize innerShadows=_innerShadows;
@property(retain, nonatomic) NSArray *fills; // @synthesize fills=_fills;
@property(retain, nonatomic) MSGraphicsContextSettings *contextSettings; // @synthesize contextSettings=_contextSettings;
@property(retain, nonatomic) MSStyleColorControls *colorControls; // @synthesize colorControls=_colorControls;
@property(retain, nonatomic) NSArray *borders; // @synthesize borders=_borders;
@property(retain, nonatomic) MSStyleBorderOptions *borderOptions; // @synthesize borderOptions=_borderOptions;
@property(retain, nonatomic) MSStyleBlur *blur; // @synthesize blur=_blur;
@property(nonatomic) unsigned long long windingRule; // @synthesize windingRule=_windingRule;
@property(nonatomic) unsigned long long startMarkerType; // @synthesize startMarkerType=_startMarkerType;
@property(nonatomic) long long miterLimit; // @synthesize miterLimit=_miterLimit;
@property(nonatomic) unsigned long long endMarkerType; // @synthesize endMarkerType=_endMarkerType;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

