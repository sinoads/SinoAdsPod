//
//  SARewardedVideo.h
//  SinoAds
//
//  Created by thistl on 2019/3/15.
//  Copyright © 2019 SinoAds. All rights reserved.
//

#ifndef SARewardedVideo_h
#define SARewardedVideo_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SARewardedVideoDelegate.h"
#import "SAExtraData.h"

@interface SARewardedVideo : NSObject {
    
}

- (id)initWithUnitId:(NSString*)unitId andExtraData:(SAExtraData*)extraData;

- (NSString*)getUnitId;

- (void)setExtraData:(SAExtraData*)extraData;

- (SAExtraData*)getExtraData;

- (NSString*)getSdkName;

- (void)setDelegate:(id<SARewardedVideoDelegate> _Nullable)delegate;

- (void)load;

- (BOOL)isReady:(BOOL)checkVideoState;

- (void)presentFromRootViewController:(UIViewController*)rootViewController;

@end

#endif /* SARewardedVideo_h */
