//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchModel/MSDocumentWriter.h>

#import <SketchRendering/MSDocumentTextPreviews-Protocol.h>

@class NSString;

@interface MSDocumentWriter (TextPreviews) <MSDocumentTextPreviews>
- (id)createPreviewMetadataForTextLayers:(id)arg1 document:(id)arg2;
- (id)createPreviewPDFDataForTextLayers:(id)arg1 document:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

