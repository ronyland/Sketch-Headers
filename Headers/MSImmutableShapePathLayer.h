//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableShapePathLayer.h"

@class MSImmutableStyle;

@interface MSImmutableShapePathLayer : _MSImmutableShapePathLayer
{
    BOOL _isEditing;
}

+ (unsigned long long)traitsForPropertyName:(id)arg1;
+ (id)defaultName;
+ (unsigned long long)traits;
@property(readonly, nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
- (void)encodePropertiesWithCoder:(id)arg1;
@property(readonly, nonatomic) BOOL isRectangle;
@property(readonly, nonatomic) BOOL isPolyline;
@property(readonly, nonatomic) BOOL isPolygon;
@property(readonly, nonatomic) unsigned long long numberOfCurvePoints;
@property(readonly, nonatomic) MSImmutableStyle *usedStyle;
- (BOOL)isLayerExportable;
- (id)bezierPathWithoutTransformsInRect:(struct CGRect)arg1;
- (id)bezierPathInRect:(struct CGRect)arg1;
- (id)pathInRect:(struct CGRect)arg1;
- (void)refreshPreviewImagesWithDocumentData:(id)arg1 cache:(id)arg2;
- (BOOL)previewImagesRequireRefreshWithDocumentData:(id)arg1 cache:(id)arg2;
- (void)migratePropertiesFromV99OrEarlierWithUnarchiver:(id)arg1;
- (struct CGRect)relativeRectWithExporter:(id)arg1;
- (void)simplifyPathElement:(id)arg1 exporter:(id)arg2 inset:(double)arg3;

@end

