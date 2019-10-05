//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchModel/MSModelObject.h>

@class NSArray, NSMutableArray;

@interface _MSSharedObjectContainer : MSModelObject
{
    NSMutableArray *_objects;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void).cxx_destruct;
- (void)pluginDiffCompareChildrenAgainst:(id)arg1 treeComparison:(id)arg2;
- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)moveSharedObjectIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllSharedObjects;
- (void)removeSharedObjectsAtIndexes:(id)arg1;
- (void)removeSharedObjectAtIndex:(unsigned long long)arg1;
- (void)removeSharedObject:(id)arg1;
- (void)insertSharedObjects:(id)arg1 afterSharedObject:(id)arg2;
- (void)insertSharedObject:(id)arg1 afterSharedObject:(id)arg2;
- (void)insertSharedObjects:(id)arg1 beforeSharedObject:(id)arg2;
- (void)insertSharedObject:(id)arg1 beforeSharedObject:(id)arg2;
- (void)insertSharedObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addSharedObjects:(id)arg1;
- (void)addSharedObject:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
@property(retain, nonatomic) NSArray *objects; // @synthesize objects=_objects;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

