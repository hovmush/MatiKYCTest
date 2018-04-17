//
//  MatiVideoWriter.h
//  MatiVisionSDK
//
//  Created by Tom Welsh on 4/17/17.
//  Copyright © 2017 Matilock. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MatiVideoWriter : NSObject

/** @brief writes to documents directory
 */
- (BOOL)startWritingToName:(NSString*)path withSize:(CGSize)size rate:(CGFloat)fps;
- (void)writeFrame:(UIImage*)image;
- (void)finishWritingWithCompletion:(void (^)(BOOL success, NSString *path, NSError *error))handler;
- (BOOL)isRecording;
@end
