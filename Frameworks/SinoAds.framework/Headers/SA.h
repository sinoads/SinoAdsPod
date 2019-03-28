//
//  SA.h
//  SinoAds
//
//  Created by thistl on 2019/3/15.
//  Copyright © 2019 SinoAds. All rights reserved.
//

#ifndef SA_h
#define SA_h

#import <Foundation/Foundation.h>
#import "SAConstants.h"

@interface SA : NSObject  {
    
}

+ (SA*)shared;

- (void)setAppId:(NSString*)appId andAppSecret:(NSString*)appSecret;

- (NSString*)getAppId;

- (NSString*)getAppSecret;

- (void)setDeviceId:(NSString*)deviceId;

- (NSString*)getDeviceId;

- (void)setUserGender:(SAUserGender)gender;

- (SAUserGender)getUserGender;

- (void)setUserAge:(NSInteger)age;

- (NSInteger)getUserAge;

- (void)setIsPaidApp:(BOOL)isPaidApp;

- (BOOL)getIsPaidApp;

- (void)setEnableLog:(BOOL)enableLog;

- (BOOL)getEnableLog;

@end

#endif /* SA_h */
