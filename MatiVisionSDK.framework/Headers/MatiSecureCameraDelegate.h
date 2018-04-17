//
//  MatiSecureCameraDelegate
//  FaceRecogApp
//
//  Created by Tom Welsh on 3/29/17.
//  Copyright © 2017 TomWelsh. All rights reserved.
//

#ifndef MatiSecureCameraDelegate_h
#define MatiSecureCameraDelegate_h
#import "RecognitionResults.h"

@protocol MatiSecureCameraDelegate <NSObject>

/** @brief Called during training or testing per frame with recognition results
 */
- (void)testingBundleReady:(NSString*)base64Bundle;
- (void)trainingDescriptionReady:(NSString*)base64String;
- (void)cameraSuccessAnimationCompleted;
- (void)facePoseChanged:(BOOL)isFacePositionRight;
/** @brief Respond with YES if video should be recorded */
- (NSString*)base64TrainingDescription;
- (NSString*)serverKey;
- (NSString*)clientKey;
- (NSString*)registrationNonce;
- (NSString*)randomNonce;

/** @brief Respond with YES if video should be recorded */
- (BOOL)recordsVideo;

@optional

/** @brief Receive an update of the training amount completed
 @param progress - progress completed in [0,1] range
 */
- (void)didTrainUserFaceWithProgress:(CGFloat)progress;

/** @brief If recordsVideo is enabled and when the video is written
 @param path - path to saved video in app's Documents Directory
 */
- (void)savedVideoWithSuccess:(BOOL)success path:(NSString*)path;
- (void)savedImageData:(NSData *)imageData;

@end

#endif /* Header_h */
