//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSOverrideRepresentationBase.h>

@class MSAvailableOverride, MSImmutableSymbolMaster, NSAffineTransform, NSString;

@interface MSOverrideRepresentation : MSOverrideRepresentationBase
{
    NSAffineTransform *_transformForConvertingToInstance;
    const struct CGPath *_pathInInstance;
    MSAvailableOverride *_availableOverride;
    MSOverrideRepresentationBase *_parent;
    MSOverrideRepresentation *_previousSibling;
    long long _layerListExpandedType;
}

@property(nonatomic) long long layerListExpandedType; // @synthesize layerListExpandedType=_layerListExpandedType;
@property(nonatomic) __weak MSOverrideRepresentation *previousSibling; // @synthesize previousSibling=_previousSibling;
@property(readonly, nonatomic) __weak MSOverrideRepresentationBase *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) MSAvailableOverride *availableOverride; // @synthesize availableOverride=_availableOverride;
- (void).cxx_destruct;
- (BOOL)isOpen;
@property(readonly, nonatomic) BOOL isSelected;
@property(readonly, nonatomic) NSString *selectionID;
- (void)updateExpandedStateAfterSelection;
- (void)updateAfterSelectingChild;
- (id)description;
@property(nonatomic) const struct CGPath *pathInInstance; // @synthesize pathInInstance=_pathInInstance;
- (id)transformForConvertingToInstance;
- (void)calculateTransformAndPath;
@property(readonly, nonatomic) MSImmutableSymbolMaster *modifiedParentMaster;
- (id)modifiedMasterForInstanceInMaster:(id)arg1;
@property(readonly, nonatomic) BOOL isEditable;
- (void)syncChildrenWithOverridesIfNeeded;
- (void)dealloc;
- (id)initWithParent:(id)arg1;
- (id)selectionHitTest:(struct CGPoint)arg1 options:(unsigned long long)arg2;
- (id)copyAffectedLayerForPasteboard;

@end

