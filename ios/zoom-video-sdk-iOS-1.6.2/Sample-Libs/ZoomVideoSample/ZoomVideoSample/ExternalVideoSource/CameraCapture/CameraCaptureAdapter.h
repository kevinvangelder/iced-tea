
#import <ZoomVideoSDK/ZoomVideoSDK.h>
#import <AVFoundation/AVFoundation.h>
#import <AssetsLibrary/AssetsLibrary.h>

@interface CameraCaptureAdapter : NSObject <ZoomVideoSDKVideoSource, AVCaptureVideoDataOutputSampleBufferDelegate>

@end

