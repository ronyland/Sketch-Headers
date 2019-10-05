//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class MSFontList, NSArray, NSSearchField, NSString, NSTableView;

@interface MSFontFamilyPickerViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource>
{
    BOOL _ignoreSelectionNotifications;
    CDUnknownBlockType _completionBlock;
    MSFontList *_fontList;
    NSArray *_currentFonts;
    NSTableView *_tableView;
    NSSearchField *_searchField;
}

@property(nonatomic) __weak NSSearchField *searchField; // @synthesize searchField=_searchField;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *currentFonts; // @synthesize currentFonts=_currentFonts;
@property(retain, nonatomic) MSFontList *fontList; // @synthesize fontList=_fontList;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)doubleClickTableView:(id)arg1;
- (void)scrollTableToSelectedFont;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

