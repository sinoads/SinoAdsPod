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

static const NSString* version = @"0.0.1";

@interface SA : NSObject  {
    
}

+ (SA*)shared;

- (void)setAppId:(NSString*)appId;

- (void)setDeviceId:(NSString*)deviceId;

- (NSString*)getDeviceId;

- (void)setUserGender:(SAUserGender)gender;

- (SAUserGender)getUserGender;

- (void)setUserAge:(NSInteger)age;

- (NSInteger)getUserAge;

- (void)setUserKeywords:(NSString*)keywords;

- (NSString*)getUserKeywords;

- (void)setUserExtraData:(NSString*)data;

- (NSString*)getUserExtraData;

- (void)setIsPaidApp:(BOOL)isPaidApp;

- (BOOL)getIsPaidApp;

- (void)setEnableLog:(BOOL)enableLog;

- (BOOL)getEnableLog;

@end

#endif /* SA_h */
