//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSMetalRenderer, MSMetalTexture, NSFont, NSMutableDictionary;

@interface MSArtboardTitleRenderer : NSObject
{
    MSMetalRenderer *_renderer;
    MSMetalTexture *_texture;
    double _backingScaleFactor;
    struct CGContext *_context;
    void *_textureBytes;
    NSMutableDictionary *_titleMap;
    NSFont *_titleFont;
}

@property(readonly, nonatomic) NSFont *titleFont; // @synthesize titleFont=_titleFont;
@property(readonly, nonatomic) NSMutableDictionary *titleMap; // @synthesize titleMap=_titleMap;
@property(nonatomic) void *textureBytes; // @synthesize textureBytes=_textureBytes;
@property(nonatomic) struct CGContext *context; // @synthesize context=_context;
@property(nonatomic) double backingScaleFactor; // @synthesize backingScaleFactor=_backingScaleFactor;
@property(retain, nonatomic) MSMetalTexture *texture; // @synthesize texture=_texture;
@property(readonly, nonatomic) __weak MSMetalRenderer *renderer; // @synthesize renderer=_renderer;
- (void).cxx_destruct;
- (void)drawTitlesForArtboards:(id)arg1 titleColor:(struct CGColor *)arg2 symbolTitleColor:(struct CGColor *)arg3 zoom:(double)arg4 backingScaleFactor:(double)arg5 baseOrigin:(struct CGPoint)arg6;
- (BOOL)ms_needsToRecreateTitlesForArtboards:(id)arg1 zoom:(double)arg2 backingScaleFactor:(double)arg3;
- (void)ms_drawTitles:(id)arg1 zoom:(double)arg2 backingScaleFactor:(double)arg3 baseOrigin:(struct CGPoint)arg4;
- (id)ms_findExistingItemForArtboard:(id)arg1 zoom:(double)arg2 backingScaleFactor:(double)arg3;
- (void)ms_drawTitlesToTexture:(id)arg1 backingScaleFactor:(double)arg2;
- (void)ms_recreateTextureForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)ms_createTextureForArtboards:(id)arg1 zoom:(double)arg2 backingScaleFactor:(double)arg3 titleColor:(id)arg4 symbolTitleColor:(id)arg5;
- (void)ms_insertTitleItem:(id)arg1 name:(id)arg2;
- (id)ms_collectArtboardsForTitleRendering:(id)arg1 zoom:(double)arg2 backingScaleFactor:(double)arg3;
- (void)ms_uploadTextureData;
- (void)dealloc;
- (id)initWithGPURenderer:(id)arg1;

@end

