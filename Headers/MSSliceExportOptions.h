//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSView;

@interface MSSliceExportOptions : NSViewController
{
    NSView *_optionsViewJPG;
    NSView *_optionsViewSaveForWeb;
    NSView *_optionsViewWebP;
    NSView *_optionsViewPNG;
}

+ (id)exportOptionsForRequests:(id)arg1;
@property(retain, nonatomic) NSView *optionsViewPNG; // @synthesize optionsViewPNG=_optionsViewPNG;
@property(retain, nonatomic) NSView *optionsViewWebP; // @synthesize optionsViewWebP=_optionsViewWebP;
@property(retain, nonatomic) NSView *optionsViewSaveForWeb; // @synthesize optionsViewSaveForWeb=_optionsViewSaveForWeb;
@property(retain, nonatomic) NSView *optionsViewJPG; // @synthesize optionsViewJPG=_optionsViewJPG;
- (void).cxx_destruct;
- (void)setExtensions:(id)arg1;

@end

