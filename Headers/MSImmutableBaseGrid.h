//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSImmutableBaseGrid.h>

@interface MSImmutableBaseGrid : _MSImmutableBaseGrid
{
    BOOL _forceDraw;
}

+ (BOOL)displayableAtZoom:(double)arg1;
+ (void)initialize;
@property(nonatomic) BOOL forceDraw; // @synthesize forceDraw=_forceDraw;
- (BOOL)shouldDrawAtZoom:(double)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;

@end

