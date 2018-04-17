//
//  CardCameraViewController.h
//  MatiVisionSDK
//
//  Created by Musho Hovhannisyan on 3/21/18.
//  Copyright © 2018 Matilock. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MatiVisionModel;

@protocol CardCameraViewControllerDelegate

- (void)cardDetectionCompleted:(UIImage *)image;

@end

@interface CardCameraViewController : UIViewController

@property (weak, nonatomic) id <CardCameraViewControllerDelegate> delegate;

@property (nonatomic, assign) NSInteger cardDetectionCount;
@property (nonatomic, strong) MatiVisionModel *model;
@property (nonatomic, strong) NSString *testVideoUrl;

@property (nonatomic, assign) BOOL isBackSide;

@end
