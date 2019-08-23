//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Chocolat/CHSheetController.h>

@class NSButton, NSPopUpButton, NSTextField;

@interface MSCreateSymbolNamingSheet : CHSheetController
{
    NSButton *_moveSymbolToPageCheckbox;
    NSButton *_confirmButton;
    NSTextField *_symbolNameField;
    NSTextField *_symbolPageField;
    NSTextField *_symbolLayoutExplanationField;
    NSPopUpButton *_symbolLayoutPopUpButton;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSPopUpButton *symbolLayoutPopUpButton; // @synthesize symbolLayoutPopUpButton=_symbolLayoutPopUpButton;
@property(retain, nonatomic) NSTextField *symbolLayoutExplanationField; // @synthesize symbolLayoutExplanationField=_symbolLayoutExplanationField;
@property(retain, nonatomic) NSTextField *symbolPageField; // @synthesize symbolPageField=_symbolPageField;
@property(retain, nonatomic) NSTextField *symbolNameField; // @synthesize symbolNameField=_symbolNameField;
@property(retain, nonatomic) NSButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) NSButton *moveSymbolToPageCheckbox; // @synthesize moveSymbolToPageCheckbox=_moveSymbolToPageCheckbox;
- (void).cxx_destruct;
- (void)validateConfirmButton;
- (void)controlTextDidChange:(id)arg1;
- (void)setShouldShowMoveCheckbox:(BOOL)arg1;
- (void)setSuggestedName:(id)arg1;
- (void)setSymbolPageName:(id)arg1;
- (void)confirm:(id)arg1;
- (void)awakeFromNib;

@end

