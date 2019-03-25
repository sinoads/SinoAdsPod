//
//  SAInterstitial.h
//  SinoAds
//
//  Created by thistl on 2019/3/15.
//  Copyright © 2019 SinoAds. All rights reserved.
//

#ifndef SAInterstitial_h
#define SAInterstitial_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SAInterstitialDelegate.h"

@interface SAInterstitial : NSObject {
    
}

- (id)initWithUnitId:(NSString*)unitId;

- (NSString*)getUnitId;

- (NSString*)getSdkName;

- (void)setDelegate:(id<SAInterstitialDelegate> _Nullable)delegate;

- (void)load;

- (BOOL)isReady;

- (void)presentFromRootViewController:(UIViewController*)rootViewController;

@end

#endif /* SAInterstitial_h */
