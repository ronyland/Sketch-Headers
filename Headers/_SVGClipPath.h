//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SVGGroupElement.h"

@class NSSet;

@interface _SVGClipPath : SVGGroupElement
{
    NSSet *_clipping;
}

+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(retain, nonatomic) NSSet *clipping; // @synthesize clipping=_clipping;
- (void).cxx_destruct;
- (void)primitiveRemoveClippingObject:(id)arg1;
- (void)primitiveAddClippingObject:(id)arg1;
- (void)removeClippingObject:(id)arg1;
- (void)addClippingObject:(id)arg1;

@end
