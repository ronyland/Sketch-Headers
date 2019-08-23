//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSNestedInspectorSection.h"

#import "MSSymbolInstanceSectionDelegate-Protocol.h"

@class MSBaseInspectorSection, MSSymbolInstanceSection, NSArray, NSCache, NSString;

@interface MSSpecialLayerViewController : MSNestedInspectorSection <MSSymbolInstanceSectionDelegate>
{
    MSBaseInspectorSection *_textSection;
    MSSymbolInstanceSection *_symbolInstanceSection;
    NSArray *_layerInspectorSections;
    NSCache *_sectionInterfaceCache;
}

+ (id)sectionOrder;
@property(retain, nonatomic) NSCache *sectionInterfaceCache; // @synthesize sectionInterfaceCache=_sectionInterfaceCache;
@property(retain, nonatomic) NSArray *layerInspectorSections; // @synthesize layerInspectorSections=_layerInspectorSections;
@property(retain, nonatomic) MSSymbolInstanceSection *symbolInstanceSection; // @synthesize symbolInstanceSection=_symbolInstanceSection;
@property(retain, nonatomic) MSBaseInspectorSection *textSection; // @synthesize textSection=_textSection;
- (void).cxx_destruct;
- (void)persistentlyCollapse:(BOOL)arg1 sectionWithIdentifier:(id)arg2 reloadTarget:(id)arg3;
- (void)sectionDidResize:(id)arg1;
- (id)userInterfaceCacheForSection:(id)arg1;
- (void)refreshIfNecessary:(id)arg1;
- (void)valuesPossiblyChanged;
- (void)changeTextLayerFont:(id)arg1;
- (id)views;
- (id)regularLayerInspectorSections;
- (id)externalLayerInspectorSections;
- (void)updateItems;
- (id)inspectorsWithProperContent;
- (id)layerOrContentsOfLayer:(id)arg1 ifKindOfClass:(Class)arg2;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

