//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSOutlineView, NSStackView;

@interface _TtC6Sketch36DocumentsWindowSourcesViewController : NSViewController
{
    // Error parsing type: , name: outlineView
    // Error parsing type: , name: widgetsStackView
    // Error parsing type: , name: delegate
    // Error parsing type: , name: sections
    // Error parsing type: , name: user
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)contentViewDidChangeBounds:(id)arg1;
- (void)openExistingDocument:(id)arg1;
- (void)openWidget:(id)arg1;
- (void)sourceDidChange:(id)arg1;
- (void)cloudUserDidChange:(id)arg1;
- (void)currentAPISessionDidChange:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic, retain) NSStackView *widgetsStackView; // @synthesize widgetsStackView;
@property(nonatomic, retain) NSOutlineView *outlineView; // @synthesize outlineView;

@end

