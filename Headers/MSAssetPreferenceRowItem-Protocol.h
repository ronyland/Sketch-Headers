//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MSAssetLibrary, NSString, NSTableRowView, NSTableView;

@protocol MSAssetPreferenceRowItem
@property(readonly, nonatomic) double preferredViewHeight;
@property(readonly, nonatomic) MSAssetLibrary *library;
@property(readonly, nonatomic) NSString *viewIdentifier;
@property(readonly, nonatomic) NSString *name;
- (NSTableRowView *)tableRowViewForTableView:(NSTableView *)arg1;
@end

