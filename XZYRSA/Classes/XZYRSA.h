//
//  XZYRSA.h
//  XZYRSA
//
//  Created by 徐自由 on 2017/12/26.
//  Copyright © 2017年 徐自由. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XZYRSA : NSObject

+ (NSString *)encryptString:(NSString *)str publicKey:(NSString *)pubKey;

+ (NSData *)encryptData:(NSData *)data publicKey:(NSString *)pubKey;

+ (NSString *)encryptString:(NSString *)str privateKey:(NSString *)privKey;
+ (NSString *)decryptString:(NSString *)str publicKey:(NSString *)pubKey;

+ (NSData *)decryptData:(NSData *)data publicKey:(NSString *)pubKey;

+ (NSString *)decryptString:(NSString *)str privateKey:(NSString *)privKey;

+ (NSData *)decryptData:(NSData *)data privateKey:(NSString *)privKey;

@end
