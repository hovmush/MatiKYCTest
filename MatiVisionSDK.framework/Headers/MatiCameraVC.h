//
//  MatiCameraVC.h
//  FaceRecogApp
//
//  Created by Tom Welsh on 3/29/17.
//  Copyright © 2017 TomWelsh. All rights reserved.
//

#import <UIKit/UIKit.h>

// forward declarations
@protocol MatiCameraDelegate;
@protocol MatiSecureCameraDelegate;
@class RenderPipeline;
@class GPUImageVideoCamera;

@interface MatiCameraVC : UIViewController

@property(nonatomic, weak) id<MatiCameraDelegate>cameraDelegate;
@property(nonatomic, weak) id<MatiSecureCameraDelegate>secureDelegate;
@property(nonatomic, strong) UIView *cameraView;
@property(nonatomic, strong) RenderPipeline *renderPipeline;
@property(nonatomic, strong) GPUImageVideoCamera *videoCamera;
@property(nonatomic, strong) NSString *videoPath;
@property(nonatomic, assign) int liveness;

- (CGSize)cameraFrameSize;
- (void)flipCamera;
- (void)processColorImage:(GLubyte*)color greyImage:(GLubyte*)grey width:(int)width height:(int)height;

// For recording video
- (void)startRecordingVideoWithName:(NSString*)name;
- (void)pauseRecording;
- (void)resumeRecording;
- (void)stopRecording;

@end
