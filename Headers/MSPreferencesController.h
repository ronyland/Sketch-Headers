//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSToolbarDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class MSPreferencePane, NSArray, NSCache, NSDictionary, NSString, NSToolbar;

@interface MSPreferencesController : NSWindowController <NSToolbarDelegate, NSWindowDelegate>
{
    MSPreferencePane *_currentPreferencePane;
    NSArray *_toolbarItemIdentifiers;
    NSDictionary *_preferencePaneClasses;
    NSCache *_preferencePanes;
    NSToolbar *_toolbar;
}

+ (id)sharedController;
@property(nonatomic) __weak NSToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) NSCache *preferencePanes; // @synthesize preferencePanes=_preferencePanes;
@property(copy, nonatomic) NSDictionary *preferencePaneClasses; // @synthesize preferencePaneClasses=_preferencePaneClasses;
@property(copy, nonatomic) NSArray *toolbarItemIdentifiers; // @synthesize toolbarItemIdentifiers=_toolbarItemIdentifiers;
@property(retain, nonatomic) MSPreferencePane *currentPreferencePane; // @synthesize currentPreferencePane=_currentPreferencePane;
- (void).cxx_destruct;
- (void)windowWillClose:(id)arg1;
- (void)dismissAnyAlertSheet;
- (BOOL)validateToolbarItem:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)toolbarSelectableItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
@property(nonatomic) unsigned long long selectedTabIndex;
- (void)updateWindowFrame;
- (id)existingPaneWithIdentifier:(id)arg1;
- (id)switchToPaneWithIdentifier:(id)arg1;
- (void)switchPanes:(id)arg1;
- (void)adjustColorsAction:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

