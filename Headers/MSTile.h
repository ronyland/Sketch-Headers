//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSMetalTexture;

@interface MSTile : NSObject
{
    MSMetalTexture *_texture;
    CDStruct_ffe6b7c1 _point;
    CDStruct_bf95b13b _rectWithImageFragment;
}

@property(readonly, nonatomic) CDStruct_bf95b13b rectWithImageFragment; // @synthesize rectWithImageFragment=_rectWithImageFragment;
@property(nonatomic) CDStruct_ffe6b7c1 point; // @synthesize point=_point;
@property(retain, nonatomic) MSMetalTexture *texture; // @synthesize texture=_texture;
- (void).cxx_destruct;
- (void)replaceRegion:(CDStruct_bf95b13b)arg1 withBytes:(const void *)arg2 bytesPerRow:(unsigned long long)arg3;
- (id)initWithRenderer:(id)arg1 point:(CDStruct_ffe6b7c1)arg2;

@end

