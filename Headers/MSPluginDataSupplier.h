//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchControllers/MSDataSupplier.h>

@class NSString;

@interface MSPluginDataSupplier : MSDataSupplier
{
    BOOL _registered;
    NSString *_pluginIdentifier;
    NSString *_commandIdentifier;
    NSString *_dynamicDataKey;
}

+ (id)identifierWithPluginIdentifier:(id)arg1 commandIdentifier:(id)arg2 dynamicDataKey:(id)arg3;
@property(nonatomic) BOOL registered; // @synthesize registered=_registered;
@property(readonly, nonatomic) NSString *dynamicDataKey; // @synthesize dynamicDataKey=_dynamicDataKey;
@property(readonly, nonatomic) NSString *commandIdentifier; // @synthesize commandIdentifier=_commandIdentifier;
@property(readonly, nonatomic) NSString *pluginIdentifier; // @synthesize pluginIdentifier=_pluginIdentifier;
- (void).cxx_destruct;
- (id)splitString;
- (id)displayName;
@property(readonly, nonatomic) NSString *subgroupName;
- (BOOL)valid;
- (id)imageFileURLForDataItem:(id)arg1;
- (void)generateDataForObjects:(id)arg1 dataSupplierManager:(id)arg2 dataApplier:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPluginIdentifier:(id)arg1 commandIdentifier:(id)arg2 dataName:(id)arg3 dataTypeStringRepresentation:(id)arg4 dynamicDataKey:(id)arg5;
- (id)initWithCoder:(id)arg1;

@end

