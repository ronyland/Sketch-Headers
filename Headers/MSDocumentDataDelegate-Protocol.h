//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSDocumentData, MSLayer, MSModelObject, MSTreeDiff, NSMutableSet, NSObject, NSString;
@protocol MSHoverableItem;

@protocol MSDocumentDataDelegate <NSObject>
- (void)hoveredItemDidChange:(NSObject<MSHoverableItem> *)arg1;
- (BOOL)validateSelectionOfLayer:(MSLayer *)arg1 proposedIDsOfLayersToSelect:(NSMutableSet *)arg2;
- (struct CGRect)visibleCanvasRectForDocumentData:(MSDocumentData *)arg1;
- (void)refreshOverlay;
- (id)documentData:(MSDocumentData *)arg1 metadataForKey:(NSString *)arg2 object:(MSModelObject *)arg3;
- (void)documentData:(MSDocumentData *)arg1 storeMetadata:(id)arg2 forKey:(NSString *)arg3 object:(MSModelObject *)arg4;
- (void)documentData:(MSDocumentData *)arg1 didChange:(MSTreeDiff *)arg2;
- (void)temporarilyHideDocumentDataSelection:(MSDocumentData *)arg1;
@end

