//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "MSInspectorValueAdaptorDelegate-Protocol.h"
#import "MSUpDownTextFieldDelegate-Protocol.h"

@class MSDocument, MSLayerArray, NSArrayController, NSMapTable, NSString;
@protocol MSInspectorItemDelegate;

@interface MSInspectorItem : NSViewController <MSInspectorValueAdaptorDelegate, MSUpDownTextFieldDelegate>
{
    id <MSInspectorItemDelegate> _delegate;
    MSLayerArray *_layers;
    NSArrayController *_layersController;
    NSMapTable *_managedControls;
}

+ (BOOL)adjustLayerHierarchyAfterEditingLayers:(id)arg1;
+ (BOOL)canHandleLayer:(id)arg1;
+ (BOOL)canHandleSomeLayersOfSelection:(id)arg1;
+ (id)filterSelection:(id)arg1;
+ (id)itemForSection:(id)arg1;
@property(retain, nonatomic) NSMapTable *managedControls; // @synthesize managedControls=_managedControls;
@property(retain, nonatomic) NSArrayController *layersController; // @synthesize layersController=_layersController;
@property(retain, nonatomic) MSLayerArray *layers; // @synthesize layers=_layers;
@property(nonatomic) __weak id <MSInspectorItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)cachedUserInterfaceElementForKey:(id)arg1;
- (void)cacheUserInterfaceElement:(id)arg1 withKey:(id)arg2;
- (void)manageTextField:(id)arg1 adaptor:(id)arg2 identifier:(id)arg3 inlineToolTip:(id)arg4 touchBarItems:(id)arg5 bindingOptions:(id)arg6;
- (void)manageTextField:(id)arg1 adaptor:(id)arg2 identifier:(id)arg3 inlineToolTip:(id)arg4 touchBarItems:(id)arg5;
@property(readonly, nonatomic) MSDocument *document;
- (void)sectionWithIdentifierWillCollapse:(id)arg1;
- (void)updateDisplayedValues;
- (void)selectionDidChangeTo:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)reuseCachedPreviewImageForComponent:(id)arg1 cachingKey:(id)arg2 size:(struct CGSize)arg3 maximumSizeWithDecorations:(struct CGSize)arg4 scale:(double)arg5 orMakeAsynchronouslyUsing:(CDUnknownBlockType)arg6;
- (void)inspectorValueAdaptorDidChangeValue:(id)arg1;
- (void)refreshAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

