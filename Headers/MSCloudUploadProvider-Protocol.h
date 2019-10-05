//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchControllers/NSObject-Protocol.h>

@class NSProgress, SCKOrganization, SCKProject, SCKShare;
@protocol MSCloudUploadProviderDelegate;

@protocol MSCloudUploadProvider <NSObject>
@property(readonly, nonatomic) NSProgress *progress;
@property(readonly, nonatomic) BOOL finalized;
@property(readonly, nonatomic) BOOL cancelled;
@property(readonly, nonatomic) SCKProject *project;
@property(readonly, nonatomic) SCKOrganization *organization;
@property(readonly, nonatomic) SCKShare *newShare;
@property(readonly, nonatomic) SCKShare *previousShare;
@property(readonly, nonatomic) SCKShare *existingShare;
@property(nonatomic) __weak id <MSCloudUploadProviderDelegate> delegate;
- (void)cancel;
- (void)startUpload;
@end

