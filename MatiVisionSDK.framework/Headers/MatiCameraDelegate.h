//
//  MatiCameraDelegate
//  FaceRecogApp
//
//  Created by Tom Welsh on 3/29/17.
//  Copyright © 2017 TomWelsh. All rights reserved.
//

#ifndef MatiCameraDelegate_h
#define MatiCameraDelegate_h
#import "RecognitionResults.h"

@protocol MatiCameraDelegate <NSObject>

/** @brief Called during training or testing per frame with recognition results
 */
- (void)recognitionResultsReady:(RecognitionResults*)result;

@optional

- (BOOL)recordsVideo;

/** @brief If training was initiated and completed this method is called to pass back training results
 */
- (void)didCompleteTrainingResults:(NSArray<RecognitionResults*>*)trainingResults;

/** @brief Request to label the face if recognized
 */
- (MatchResults*)labelForResult:(RecognitionResults*)result;
@end

#endif /* Header_h */
