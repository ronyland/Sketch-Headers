//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSTableViewDataSource-Protocol.h"

@class NSArray, NSButton, NSString, NSTableView, NSTextField, NSWindow;

@interface MSMissingFontsDialog : NSWindowController <NSTableViewDataSource>
{
    NSWindow *panel;
    NSTableView *tableView;
    BOOL openDocumentAnyway;
    NSArray *_missingFonts;
    NSTextField *_descriptionText;
    NSButton *_cancelButton;
    NSButton *_openButton;
}

@property(retain, nonatomic) NSButton *openButton; // @synthesize openButton=_openButton;
@property(retain, nonatomic) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) NSTextField *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) NSArray *missingFonts; // @synthesize missingFonts=_missingFonts;
- (void).cxx_destruct;
- (void)dealloc;
- (void)close:(id)arg1;
- (void)openAnyway:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)runPanelWithMissingFonts:(id)arg1 savingWillChangeFonts:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

