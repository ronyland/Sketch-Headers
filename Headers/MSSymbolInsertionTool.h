//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSPage, MSSymbolMasterReference, NSBezierPath;

@interface MSSymbolInsertionTool : NSObject
{
    // Error parsing type: , name: masterReference
    // Error parsing type: , name: page
    // Error parsing type: , name: size
    // Error parsing type: , name: location
    // Error parsing type: , name: zoomScale
    // Error parsing type: , name: visibleRect
    // Error parsing type: , name: alignmentSettings
    // Error parsing type: , name: snappingEnabled
    // Error parsing type: , name: snappingResult
    // Error parsing type: , name: meshSnapMask
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSBezierPath *snapGuidesPath;
@property(nonatomic) BOOL snappingEnabled; // @synthesize snappingEnabled;
@property(nonatomic) unsigned long long snapMask;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect;
@property(nonatomic) double zoomScale; // @synthesize zoomScale;
- (void)updateWithPoint:(struct CGPoint)arg1;
- (struct CGPoint)locationIn:(id)arg1;
@property(nonatomic, readonly) struct CGSize size; // @synthesize size;
@property(nonatomic, readonly) MSPage *page; // @synthesize page;
@property(nonatomic, readonly) MSSymbolMasterReference *masterReference; // @synthesize masterReference;
- (id)initWithMasterReference:(id)arg1 page:(id)arg2;

@end
