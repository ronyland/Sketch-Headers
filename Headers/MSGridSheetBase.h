//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Chocolat/CHSheetController.h>

#import "NSWindowDelegate-Protocol.h"

@class MSBaseGrid, MSColorWell, MSImmutableBaseGrid, NSColor, NSMapTable, NSString;

@interface MSGridSheetBase : CHSheetController <NSWindowDelegate>
{
    NSMapTable *_originalSettings;
    MSBaseGrid *_templateObject;
    MSImmutableBaseGrid *_templateImmutable;
    MSColorWell *_darkColorButton;
    MSColorWell *_lightColorButton;
}

@property(retain, nonatomic) MSColorWell *lightColorButton; // @synthesize lightColorButton=_lightColorButton;
@property(retain, nonatomic) MSColorWell *darkColorButton; // @synthesize darkColorButton=_darkColorButton;
@property(retain, nonatomic) MSImmutableBaseGrid *templateImmutable; // @synthesize templateImmutable=_templateImmutable;
@property(copy, nonatomic) MSBaseGrid *templateObject; // @synthesize templateObject=_templateObject;
@property(retain, nonatomic) NSMapTable *originalSettings; // @synthesize originalSettings=_originalSettings;
- (void).cxx_destruct;
- (void)saveCurrentSettingsAsDefault;
- (void)lightColorUpdated:(id)arg1;
- (void)darkColorUpdated:(id)arg1;
- (void)prepareColorPickers;
@property(nonatomic) __weak NSColor *lightColor;
@property(nonatomic) __weak NSColor *darkColor;
- (void)confirm:(id)arg1;
- (void)cancel:(id)arg1;
- (void)turnOffForcedDrawing;
- (void)gridChanged:(id)arg1;
- (void)refreshCanvas:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)refreshView;
- (id)buildApplicableRootLayerList;
- (void)awakeFromNib;
- (void)applyTemplateObjectToLayer:(id)arg1;
@property(nonatomic) BOOL shouldSaveDefaults;
- (void)applyObject:(id)arg1 toLayer:(id)arg2;
- (id)defaultObject;
- (id)document;
- (id)baseObjectForRootLayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

