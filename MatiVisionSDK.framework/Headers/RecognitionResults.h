//
//  RecognitionResults.h
//  FaceRecogApp
//
//  Created by Tom Welsh on 3/29/17.
//  Copyright © 2017 TomWelsh. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 The results of processing a single frame
 */
@interface RecognitionResults :NSObject

/** @brief label for face */
@property (nonatomic,strong) NSString *label;

/** @brief sample number */
@property (nonatomic,strong) NSNumber *sampleNumber;

/** @brief Face landmark points (NSValue: CGPoint) */
@property (nonatomic,strong) NSMutableArray<NSValue*> *landmarks;

/** @brief The face description vector (NSValue: float) */
@property (nonatomic,strong) NSMutableArray<NSValue*> *descriptionVector;

/** @brief Rectangle around the face */
@property (nonatomic,strong) NSValue* faceRect;

/** @brief Elapsed time to process for recognition */
@property (nonatomic, strong) NSNumber *recognitionTime;

/** @brief Method to return label for sample
 */
- (NSString*)descriptiveLabel;

@end


typedef NS_ENUM (NSUInteger, MatchType) {
    MatchTypeNone,
    MatchTypeSucceeded,
    MatchTypeFailed,
    MatchTypePartial
};

@interface MatchResults :NSObject
@property (nonatomic, strong) NSString *label;
@property (nonatomic, assign) MatchType type;
@property (nonatomic, assign) float distance;
@end
