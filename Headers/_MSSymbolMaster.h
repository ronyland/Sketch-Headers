//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchModel/MSArtboardGroup.h>

@class NSString;

@interface _MSSymbolMaster : MSArtboardGroup
{
    BOOL _allowsOverrides;
    BOOL _includeBackgroundColorInInstance;
    NSString *_symbolID;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void).cxx_destruct;
- (void)pluginDiffCompareChildrenAgainst:(id)arg1 treeComparison:(id)arg2;
- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
@property(retain, nonatomic) NSString *symbolID; // @synthesize symbolID=_symbolID;
@property(nonatomic) BOOL includeBackgroundColorInInstance; // @synthesize includeBackgroundColorInInstance=_includeBackgroundColorInInstance;
@property(nonatomic) BOOL allowsOverrides; // @synthesize allowsOverrides=_allowsOverrides;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

