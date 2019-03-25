//
//  SAInterstitialDelegate.h
//  SinoAds
//
//  Created by thistl on 2019/3/15.
//  Copyright © 2019 SinoAds. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class SAInterstitial;

@protocol SAInterstitialDelegate <NSObject>

@optional

- (void)interstitialDidLoad:(SAInterstitial * _Nonnull)interstitial;
- (void)interstitialVideoDidLoad:(SAInterstitial * _Nonnull)interstitial;
- (void)interstitial:(SAInterstitial * _Nonnull)interstitial didFailToLoadWithError:(NSError * _Nonnull)error;

- (void)interstitialWillPresentScreen:(SAInterstitial * _Nonnull)interstitial;
- (void)interstitialDidPresentScreen:(SAInterstitial * _Nonnull)interstitial;
- (void)interstitial:(SAInterstitial * _Nonnull)interstitial didFailToPresentScreenWithError:(NSError * _Nonnull)error;
- (void)interstitialDidPlayFinish:(SAInterstitial * _Nonnull)interstitial;
- (void)interstitialWillDismissScreen:(SAInterstitial * _Nonnull)interstitial;
- (void)interstitialDidDismissScreen:(SAInterstitial * _Nonnull)interstitial;
- (void)interstitialDidClick:(SAInterstitial * _Nonnull)interstitial;
- (void)interstitialDidClickSkip:(SAInterstitial * _Nonnull)interstitial;

@end

NS_ASSUME_NONNULL_END
