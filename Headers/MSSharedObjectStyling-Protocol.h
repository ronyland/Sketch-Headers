//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchControllers/NSObject-Protocol.h>

@class NSColorSpace, NSImage, NSMenuItem, NSPopUpButtonCell;

@protocol MSSharedObjectStyling <NSObject>
- (void)applyStyleToMenuItem:(NSMenuItem *)arg1 withColorSpace:(NSColorSpace *)arg2;
- (void)generatePreviewImageAtSize:(struct CGSize)arg1 maximumSizeWithDecorations:(struct CGSize)arg2 backingScale:(double)arg3 colorSpace:(NSColorSpace *)arg4 completionHandler:(void (^)(NSImage *))arg5;
- (void)generatePreviewForSyncSheetWithSize:(struct CGSize)arg1 backingScale:(double)arg2 shadow:(BOOL)arg3 colorSpace:(NSColorSpace *)arg4 completionBlock:(void (^)(NSImage *))arg5;
- (NSImage *)generatePreviewForManageSheetWithBackingScale:(double)arg1 completionBlock:(void (^)(NSImage *))arg2;
- (NSImage *)generatePreviewForPopup:(NSPopUpButtonCell *)arg1 backingScale:(double)arg2 completionBlock:(void (^)(NSImage *))arg3;
- (NSImage *)generatePreviewForMenuItem:(NSMenuItem *)arg1 withColorSpace:(NSColorSpace *)arg2 backingScale:(double)arg3 completionBlock:(void (^)(NSImage *))arg4;
@end

