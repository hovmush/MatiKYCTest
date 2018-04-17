//
//  MatiVisionModel.h
//  MatiVisionSDK
//
//  Created by Tom Welsh on 4/7/17.
//  Copyright © 2017 Matilock. All rights reserved.
//

#import <Foundation/Foundation.h>
@class RecognitionWrapper;
@class SecureRecognition;

@interface MatiVisionModel : NSObject
- (id)initSecure:(BOOL)useEncryption;

@property(nonatomic, strong) RecognitionWrapper *recognitionWrapper;
@property(nonatomic, strong) SecureRecognition *secure;
/** @brief The threshold for recognition set for the current network
 */
@property(nonatomic, assign) float threshold;
@end
