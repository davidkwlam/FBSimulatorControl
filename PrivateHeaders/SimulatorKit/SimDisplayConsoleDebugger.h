//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb 20 2016 22:04:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SimulatorKit/SimDeviceIOPortConsumer-Protocol.h>
#import <SimulatorKit/SimDisplayDamageRectangleDelegate-Protocol.h>
#import <SimulatorKit/SimDisplayIOSurfaceRenderableDelegate-Protocol.h>
#import <SimulatorKit/SimDisplayRotationAngleDelegate-Protocol.h>

@class NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface SimDisplayConsoleDebugger : NSObject <SimDeviceIOPortConsumer, SimDisplayDamageRectangleDelegate, SimDisplayIOSurfaceRenderableDelegate, SimDisplayRotationAngleDelegate>
{
    CDUnknownBlockType _debugLoggingBlock;
    NSUUID *_consumerUUID;
    NSString *_consumerIdentifier;
    NSObject<OS_dispatch_queue> *_consoleQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *consoleQueue;
@property (nonatomic, copy) NSString *consumerIdentifier;
@property (retain, nonatomic) NSUUID *consumerUUID;
@property (nonatomic, assign) CDUnknownBlockType debugLoggingBlock;
- (void).cxx_destruct;
- (void)didReceiveDamageRect:(struct CGRect)arg1;
- (void)didChangeIOSurface:(id)arg1;
- (void)didChangeDisplayAngle:(double)arg1;
- (id)initWithDebugLoggingBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property (atomic, copy, readonly) NSString *debugDescription;
@property (atomic, copy, readonly) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

@end
