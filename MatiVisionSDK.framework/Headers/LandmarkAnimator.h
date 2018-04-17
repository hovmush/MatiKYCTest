//
//  LandmarkAnimator.h
//  Copyright © 2017 Mati. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 A class for determining the opacity of the animations. First updateAnimation then get opacities
 @code
 [animator updateAnimation:0.0];
 NSArray *points = animator.pointOpacity // get point opacities
 NSArray *points = animator.lineOpacity // get line opacities
 */
@interface LandmarkAnimator : NSObject
/**
 Update the animation for a single frame
 @param animationPercent time paramter [0,1]
 */
- (void)updateAnimation:(float)animationPercent failLoadPercent:(float)failPercent;
/**
 Reset the animation back to 0
 */
- (void)reset;

/**
 Landmark indicies to display (subset of the full 68)
 */
@property(nonatomic,strong) NSMutableArray<NSNumber*> *landmarkIndices;
@property(nonatomic,strong) NSMutableDictionary *landmarkLines;
/**
 Opacities generated by class
 */
@property(nonatomic,strong) NSArray<NSNumber*>  *pointOpacity;

/**
 Opacities generated by class
 */
@property(nonatomic,strong) NSArray<NSNumber*>  *lineOpacity;

@property(nonatomic, strong) UIColor *trainColor;
@property(nonatomic, strong) UIColor *matchColor;
@property(nonatomic, strong) UIColor *unknownColor;

- (void)shuffle;

@end