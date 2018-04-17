//
//  Decryptor.h
//  MatiVisionSDK
//
//  Created by Musho Hovhannisyan on 9/7/17.
//  Copyright © 2017 Matilock. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Decryptor : NSObject

+ (void)getClientKeysWithCompletion:(void (^)(NSString *publicKey, NSString *secretKey))completion;
+ (NSString *)decryptWithMessage:(NSString *)message nonce:(NSString *)nonce clientSecretKey:(NSString *)clientKey serverPublicKey:(NSString *)serverKey;
+ (float)runIntegrationTest:(NSString *)trainDesc testBundle:(NSString *)testBundle nonce:(NSString *)nonce nonceReg:(NSString *)nonceReg clientPublicKey:(NSString *)clientPublicKey serverSecretKey:(NSString *)serverSecretKey isAuthentic:(BOOL)isAuthentic;

@end
