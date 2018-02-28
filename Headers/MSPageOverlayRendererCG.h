//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSPageOverlayRenderer.h"

@class MSArtboardShadow, NSFont, NSString;

@interface MSPageOverlayRendererCG : NSObject <MSPageOverlayRenderer>
{
    NSFont *_titleFont;
    MSArtboardShadow *_normalShadow;
    MSArtboardShadow *_selectedShadow;
    struct CGColor *_activeTitleColor;
    struct CGColor *_symbolTitleColor;
    struct CGColor *_pixelLineColor;
    struct CGColor *_sliceColor;
}

@property(nonatomic) struct CGColor *sliceColor; // @synthesize sliceColor=_sliceColor;
@property(nonatomic) struct CGColor *pixelLineColor; // @synthesize pixelLineColor=_pixelLineColor;
@property(nonatomic) struct CGColor *symbolTitleColor; // @synthesize symbolTitleColor=_symbolTitleColor;
@property(nonatomic) struct CGColor *activeTitleColor; // @synthesize activeTitleColor=_activeTitleColor;
@property(retain, nonatomic) MSArtboardShadow *selectedShadow; // @synthesize selectedShadow=_selectedShadow;
@property(retain, nonatomic) MSArtboardShadow *normalShadow; // @synthesize normalShadow=_normalShadow;
@property(readonly, nonatomic) NSFont *titleFont; // @synthesize titleFont=_titleFont;
- (void).cxx_destruct;
- (BOOL)shouldDrawFlowsForSelectedLayers:(id)arg1 options:(unsigned long long)arg2 context:(id)arg3;
- (void)renderOverlayForPage:(id)arg1 selectedLayers:(id)arg2 selectedArtboard:(id)arg3 options:(unsigned long long)arg4 rect:(struct CGRect)arg5 context:(id)arg6;
- (void)renderBackgroundForPage:(id)arg1 rect:(struct CGRect)arg2 origin:(struct CGPoint)arg3 zoom:(double)arg4 context:(struct CGContext *)arg5;
- (unsigned long long)drawFlowForLayer:(id)arg1 inRect:(struct CGRect)arg2 isSelected:(BOOL)arg3 ancestors:(id)arg4 artboardDict:(id)arg5 options:(unsigned long long)arg6 mayDrawHotspotBounds:(BOOL)arg7 history:(unsigned long long)arg8 context:(id)arg9;
- (unsigned long long)recursivelyDrawFlowsForLayer:(id)arg1 inRect:(struct CGRect)arg2 ancestors:(id)arg3 allArtboards:(id)arg4 selectedLayerIDs:(id)arg5 options:(unsigned long long)arg6 mayDrawHotspotBounds:(BOOL)arg7 history:(unsigned long long)arg8 context:(id)arg9;
- (void)drawFlowsForPage:(id)arg1 selectedLayers:(id)arg2 inRect:(struct CGRect)arg3 options:(unsigned long long)arg4 context:(id)arg5;
- (void)drawTitlesForArtboards:(id)arg1 rect:(struct CGRect)arg2 context:(id)arg3;
- (void)drawGridForGroup:(id)arg1 rect:(struct CGRect)arg2 context:(id)arg3;
- (void)drawPixelLinesInRect:(struct CGRect)arg1 context:(id)arg2;
- (void)drawSliceOutline:(id)arg1 zoom:(double)arg2 ancestors:(id)arg3 context:(struct CGContext *)arg4;
- (void)drawSlicesOutlineForGroup:(id)arg1 selectedLayers:(id)arg2 inRect:(struct CGRect)arg3 zoom:(double)arg4 ancestors:(id)arg5 options:(unsigned long long)arg6 context:(struct CGContext *)arg7;
- (void)drawSlicesOutlineForGroup:(id)arg1 selectedLayers:(id)arg2 inRect:(struct CGRect)arg3 options:(unsigned long long)arg4 context:(id)arg5;
- (void)dealloc;
- (id)initWithTitleFont:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

