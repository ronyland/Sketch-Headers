//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class MSDocument;

@interface _TtC6Sketch29MSComponentsPopoverController : NSViewController
{
    // Error parsing type: , name: document
    // Error parsing type: , name: componentsPane.storage
    // Error parsing type: , name: currentPopover
    // Error parsing type: , name: pickHandler
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)refreshIfNecessary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)pickTextStyleWithRelativeToView:(id)arg1 preselectingTextStyle:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pickLayerStyleWithRelativeToView:(id)arg1 preselectingLayerStyle:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pickSymbolMasterWithRelativeToView:(id)arg1 preselectingSymbol:(id)arg2 enableHideSymbolItem:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithDocument:(id)arg1;
@property(nonatomic, readonly) MSDocument *document; // @synthesize document;

@end

