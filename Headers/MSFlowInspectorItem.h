//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSInspectorItem.h"

#import "MSInspectorFlowHandlerDelegate-Protocol.h"

@class MSInspectorFlowHandler, NSButton, NSPopUpButton;

@interface MSFlowInspectorItem : MSInspectorItem <MSInspectorFlowHandlerDelegate>
{
    NSPopUpButton *_flowDestinationButton;
    NSButton *_flowAnimationInstantButton;
    NSButton *_flowAnimationSlideFromRightButton;
    NSButton *_flowAnimationSlideFromBottomButton;
    NSButton *_flowAnimationSlideFromLeftButton;
    NSButton *_flowAnimationSlideFromTopButton;
    MSInspectorFlowHandler *_flowHandler;
}

@property(nonatomic) __weak MSInspectorFlowHandler *flowHandler; // @synthesize flowHandler=_flowHandler;
@property(nonatomic) __weak NSButton *flowAnimationSlideFromTopButton; // @synthesize flowAnimationSlideFromTopButton=_flowAnimationSlideFromTopButton;
@property(nonatomic) __weak NSButton *flowAnimationSlideFromLeftButton; // @synthesize flowAnimationSlideFromLeftButton=_flowAnimationSlideFromLeftButton;
@property(nonatomic) __weak NSButton *flowAnimationSlideFromBottomButton; // @synthesize flowAnimationSlideFromBottomButton=_flowAnimationSlideFromBottomButton;
@property(nonatomic) __weak NSButton *flowAnimationSlideFromRightButton; // @synthesize flowAnimationSlideFromRightButton=_flowAnimationSlideFromRightButton;
@property(nonatomic) __weak NSButton *flowAnimationInstantButton; // @synthesize flowAnimationInstantButton=_flowAnimationInstantButton;
@property(nonatomic) __weak NSPopUpButton *flowDestinationButton; // @synthesize flowDestinationButton=_flowDestinationButton;
- (void).cxx_destruct;
- (id)layersForFlowHandler:(id)arg1;
- (id)documentForFlowHandler:(id)arg1;
- (id)flowAnimationButtons;
- (id)flowAnimationTypes;
- (void)validateFlowAnimationButtonForFlow:(id)arg1;
- (void)updateDisplayedValues;
- (void)followFlowAction:(id)arg1;
- (void)changeFlowAnimationAction:(id)arg1;
- (void)viewDidLoad;

@end

