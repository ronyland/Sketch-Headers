//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchModel/MSImmutableForeignObject.h>

@class MSImmutableSymbolMaster;

@interface _MSImmutableForeignSymbol : MSImmutableForeignObject
{
    MSImmutableSymbolMaster *_originalMaster;
    MSImmutableSymbolMaster *_symbolMaster;
}

+ (Class)mutableClass;
@property(retain, nonatomic) MSImmutableSymbolMaster *symbolMaster; // @synthesize symbolMaster=_symbolMaster;
@property(retain, nonatomic) MSImmutableSymbolMaster *originalMaster; // @synthesize originalMaster=_originalMaster;
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

