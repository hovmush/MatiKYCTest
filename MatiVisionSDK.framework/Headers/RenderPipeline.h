//
//  RenderPipeline.h
//  FaceDemo
//
//  Copyright © 2017 Mati. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

//#import "GPUImage.h"
@class GPUImageView;
@class GPUImageOutput;

@interface RenderPipeline : NSObject
@property(nonatomic, strong) GPUImageView *filteredVideoView;
@property(nonatomic, copy) void(^newFrameAvailableBlock)(GLubyte *grey, GLubyte* color, int width, int height);

- (void)addInput:(GPUImageOutput*)inputFilter;
- (void)setFrameSize:(CGSize)size;
- (id)initWithSize:(CGSize)size orientation:(UIInterfaceOrientation)orientation liveness:(BOOL)liveness;
- (id)initForCardDetectionWithSize:(CGSize)size orientation:(UIInterfaceOrientation)orientation;

- (void)renderLabels:(NSArray*)labelsToRender;
- (void)renderRects:(NSArray*)rectsToRender;
- (void)renderLines:(NSArray*)linesToRender;
- (void)renderPoints:(NSArray*)pointsToRender;
- (void)renderFaceRect:(CGRect)rect strength:(CGFloat)strength;

- (void)updateView; // call *after* updating rendering objects above
@end
