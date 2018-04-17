//
//  MFMati.h
//  MatiKYCSDK
//
//  Created by Musho Hovhannisyan on 4/16/18.
//  Copyright © 2018 Inomma. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MFMatiDelegate

- (void)mfMatiKYCLoginSuccess;
- (void)mfMatiKYCLoginFailed;

@end

@interface MFMati : NSObject

@property (weak, nonatomic) id <MFMatiDelegate> delegate;

+ (void)registerWithToken:(NSString *)token;
+ (instancetype)instance;

@end
