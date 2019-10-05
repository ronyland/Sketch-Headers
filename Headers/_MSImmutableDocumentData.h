//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchModel/MSImmutableModelObject.h>

@class MSImmutableAssetCollection, MSImmutableSharedStyleContainer, MSImmutableSharedTextStyleContainer, MSImmutableSymbolContainer, NSArray, NSDictionary;

@interface _MSImmutableDocumentData : MSImmutableModelObject
{
    unsigned long long _colorSpace;
    unsigned long long _currentPageIndex;
    NSDictionary *_userInfo;
    MSImmutableAssetCollection *_assets;
    NSArray *_foreignLayerStyles;
    NSArray *_foreignSymbols;
    NSArray *_foreignTextStyles;
    MSImmutableSharedStyleContainer *_layerStyles;
    MSImmutableSymbolContainer *_layerSymbols;
    MSImmutableSharedTextStyleContainer *_layerTextStyles;
    NSArray *_pages;
}

+ (Class)mutableClass;
@property(retain, nonatomic) NSArray *pages; // @synthesize pages=_pages;
@property(retain, nonatomic) MSImmutableSharedTextStyleContainer *layerTextStyles; // @synthesize layerTextStyles=_layerTextStyles;
@property(retain, nonatomic) MSImmutableSymbolContainer *layerSymbols; // @synthesize layerSymbols=_layerSymbols;
@property(retain, nonatomic) MSImmutableSharedStyleContainer *layerStyles; // @synthesize layerStyles=_layerStyles;
@property(retain, nonatomic) NSArray *foreignTextStyles; // @synthesize foreignTextStyles=_foreignTextStyles;
@property(retain, nonatomic) NSArray *foreignSymbols; // @synthesize foreignSymbols=_foreignSymbols;
@property(retain, nonatomic) NSArray *foreignLayerStyles; // @synthesize foreignLayerStyles=_foreignLayerStyles;
@property(retain, nonatomic) MSImmutableAssetCollection *assets; // @synthesize assets=_assets;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(nonatomic) unsigned long long colorSpace; // @synthesize colorSpace=_colorSpace;
- (void).cxx_destruct;
- (id)pluginDiffPropertiesNotMatching:(id)arg1 treeComparison:(id)arg2;
- (id)keysDifferingFromObject:(id)arg1;
- (BOOL)isEqualForDiffToObject:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)decodePropertiesWithUnarchiver:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;

@end

