//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CALayer, MSImmutableDocumentData, MSRenderInstruction, NSView;
@protocol MSTiledRendererHostView;

@protocol MSTilingSystemProvider
@property(readonly) MSImmutableDocumentData *renderedDocument;
@property(nonatomic) BOOL hideOverlay;
@property(nonatomic) __weak NSView<MSTiledRendererHostView> *hostView;
@property(readonly, nonatomic) CALayer *layer;
- (BOOL)isDrawing;
- (void)endFastZooming;
- (void)beginFastZooming;
- (void)updateContentWithRenderInstruction:(MSRenderInstruction *)arg1 synchronously:(BOOL)arg2 hasUserFocus:(BOOL)arg3;
- (id)initWithCompletionHandler:(void (^)(struct CGImage *))arg1 syncFirstFrame:(BOOL)arg2;
@end

