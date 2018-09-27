/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSSACInfoMonitor : CSEventMonitor <SACInfoDelegate> {
    SACInfo * _currentSACInfo;
    SACInfoListener * _infoListener;
    bool  _isDeviceRoleStereo;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (void)handleSACInfo:(id)arg1;
- (id)init;
- (bool)isDeviceRoleStereo;

@end