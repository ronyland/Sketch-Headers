//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchModel/MSImmutableModelObject.h>

@class NSObject, NSString;
@protocol NSCopying;

@interface _MSImmutableOverrideValue : MSImmutableModelObject
{
    BOOL _isEditing;
    NSString *_overrideName;
    NSObject<NSCopying> *_value;
}

+ (Class)mutableClass;
@property(copy, nonatomic) NSObject<NSCopying> *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *overrideName; // @synthesize overrideName=_overrideName;
@property(nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
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

