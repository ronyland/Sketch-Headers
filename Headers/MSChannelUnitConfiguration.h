//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MSChannelUnitConfiguration : NSObject
{
    NSString *_groupId;
    long long _priority;
    unsigned long long _batchSizeLimit;
    unsigned long long _pendingBatchesLimit;
    unsigned long long _flushInterval;
}

@property(readonly, nonatomic) unsigned long long flushInterval; // @synthesize flushInterval=_flushInterval;
@property(readonly, nonatomic) unsigned long long pendingBatchesLimit; // @synthesize pendingBatchesLimit=_pendingBatchesLimit;
@property(readonly, nonatomic) unsigned long long batchSizeLimit; // @synthesize batchSizeLimit=_batchSizeLimit;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;
- (id)initDefaultConfigurationWithGroupId:(id)arg1;
- (id)initDefaultConfigurationWithGroupId:(id)arg1 flushInterval:(unsigned long long)arg2;
- (id)initWithGroupId:(id)arg1 priority:(long long)arg2 flushInterval:(unsigned long long)arg3 batchSizeLimit:(unsigned long long)arg4 pendingBatchesLimit:(unsigned long long)arg5;

@end
