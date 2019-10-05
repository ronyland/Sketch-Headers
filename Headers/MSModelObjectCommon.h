//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchModel/MSModelObjectCommon-Protocol.h>

@class MSModelObjectCache, NSArray, NSString;

@interface MSModelObjectCommon : NSObject <MSModelObjectCommon>
{
    NSString *_objectID;
    MSModelObjectCache *_cache;
}

+ (unsigned long long)traits;
+ (BOOL)persistsObjectID;
+ (id)generateObjectID;
+ (id)defaultName;
- (void).cxx_destruct;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
- (unsigned long long)traits;
- (id)primitiveObjectID;
@property(copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
- (id)recursivelyGenerateObjectID;
- (id)generateObjectID;
- (void)enumerateDescendants:(CDUnknownBlockType)arg1 withAncestors:(id)arg2;
- (void)enumerateDescendants:(CDUnknownBlockType)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (void)setNilValueForKey:(id)arg1;
- (id)defaultName;
- (void)objectDidInit;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (void)performInitEmptyObject;
- (id)initWithMinimalSetup;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)init;
@property(readonly, nonatomic) NSArray *overridePointAttributeNamesForOverridePropertyMigration;
- (BOOL)isContainedByInstanceOfForeignSymbol:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)treeAsDictionary;
- (id)simpleTreeStructure;
- (id)treeStructure;
- (void)appendTreeStructureToString:(id)arg1 withIndent:(unsigned long long)arg2;
- (void)appendSimpleStructureToString:(id)arg1 withIndent:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

