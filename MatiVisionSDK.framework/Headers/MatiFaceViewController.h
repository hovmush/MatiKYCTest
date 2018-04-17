//
//  MatiFaceViewController.h
//  MatiSDK_iOS
//
//  Created by Tom Welsh on 4/5/17.
//  Copyright © 2017 Matilock. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MatiCameraVC.h"
@class MatiVisionModel;

/** UIViewController subclass. Call the methods to start training or recognition
 */
@interface MatiFaceViewController : MatiCameraVC
/** @brief Start a training session. The delegate (MatiCameraDelegate) will be called with didCompleteTrainingResults when done
 */
- (void)startTraining;

/** @brief Pause a training session. The delegate (MatiCameraDelegate) will no be called with progress updates
 */
- (void)pauseTraining;

/** @brief Resume a training session.
 */
- (void)resumeTraining;

/** @brief Cancel a training session (no more forward prop)
 */
- (void)cancelTraining;

/** @brief Start recognizing frames. The delegate (MatiCameraDelegate) will be called with detectedWithResult each frame
 */
- (void)startRecognition;

/** @brief Stop processing frames
 */
- (void)stopRecognition;

/** @brief Start continuous liveness
 */
- (void) recognitionFailed;

- (void) recognitionSuccess;

@property(nonatomic, strong) MatiVisionModel *model;
@end
