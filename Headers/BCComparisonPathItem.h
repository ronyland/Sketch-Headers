//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BCFoundation/BCComparisonItem.h>

@class NSString;

@interface BCComparisonPathItem : BCComparisonItem
{
    NSString *_objectName;
}

+ (id)pathItemWithParent:(id)arg1 forObject:(id)arg2 named:(id)arg3;
@property(retain, nonatomic) NSString *objectName; // @synthesize objectName=_objectName;
- (void).cxx_destruct;
- (id)fullPath;

@end

