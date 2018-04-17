//
//  MFMati.h
//  MatiKYCSDK
//
//  Created by Musho Hovhannisyan on 4/16/18.
//  Copyright © 2018 Inomma. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MFMatiKYCDelegate

- (void)mfMatiKYCLoginSuccess;
- (void)mfMatiKYCLoginFailed;

@end

@interface MFMatiKYC : NSObject

@property (weak, nonatomic) id <MFMatiKYCDelegate> delegate;

+ (void)registerWithToken:(NSString *)token;
+ (instancetype)instance;

@end
