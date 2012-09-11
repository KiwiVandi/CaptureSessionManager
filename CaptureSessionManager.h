//
//  CaptureSessionManager.h
//  Dirtgirlworld
//
//  Created by Dave van Dugteren on 3/07/12.
//  Copyright (c) 2012 Whybin \ TBWA \ Tequila. All rights reserved.
//

#import <CoreMedia/CoreMedia.h>
#import <AVFoundation/AVFoundation.h>

#define kImageCapturedSuccessfully @"imageCapturedSuccessfully"

#define M_PI   3.14159265358979323846264338327950288   /* pi */
#define DEGREES_TO_RADIANS(angle) (angle / 180.0 * M_PI)

@interface CaptureSessionManager : NSObject
{
    AVCaptureDeviceInput *backFacingCameraDeviceInput;
    AVCaptureDeviceInput *frontFacingCameraDeviceInput;
    
    BOOL isUsingFrontCamera;
}

@property (retain) AVCaptureConnection *videoConnection;

@property (retain) AVCaptureStillImageOutput *stillImageOutput;
@property (atomic, retain) UIImage *stillImage;

- (void)addStillImageOutput;
- (void)captureStillImage;

//@property (retain) AVCapture
@property (retain, atomic) AVCaptureVideoPreviewLayer *previewLayer;
@property (retain, atomic) AVCaptureSession *captureSession;

- (void)addVideoPreviewLayer;
- (void)addVideoInput;

//Tentative Code
#pragma Returns NO if not possible. Shouldnt rely on this for a check though.
- (BOOL) addFrontVideoInput;
- (BOOL) addBackVideoInput;

@end
