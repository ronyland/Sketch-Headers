//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchRendering/MSOverlayBitmapItem.h>

@interface MSOverlayRectangularBitmapItem : MSOverlayBitmapItem
{
    BOOL _hollow;
    struct CGSize _size;
    struct CGAffineTransform _transform;
}

@property(readonly, nonatomic, getter=isHollow) BOOL hollow; // @synthesize hollow=_hollow;
@property(readonly, nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (id)initWithImageID:(id)arg1 position:(struct CGPoint)arg2 size:(struct CGSize)arg3 transform:(struct CGAffineTransform)arg4 hollow:(BOOL)arg5;

@end

