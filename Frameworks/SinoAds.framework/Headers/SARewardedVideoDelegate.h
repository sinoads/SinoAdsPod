//
//  SARewardedVideoDelegate.h
//  SinoAds
//
//  Created by thistl on 2019/3/15.
//  Copyright © 2019 SinoAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SAExtraData.h"

NS_ASSUME_NONNULL_BEGIN

@class SARewardedVideo;

@protocol SARewardedVideoDelegate <NSObject>

@optional

- (void)rewardedVideo:(SARewardedVideo * _Nonnull)rewardedVideo finishWithExtraData:(SAExtraData * _Nullable)extraData;
- (void)rewardedVideo:(SARewardedVideo * _Nonnull)rewardedVideo finishWithError:(NSError * _Nonnull)error;
- (void)rewardedVideoServerRewardDidSucceed:(SARewardedVideo * _Nonnull)rewardedVideo withVerify:(BOOL)verify;
- (void)rewardedVideoServerRewardDidFail:(SARewardedVideo * _Nonnull)rewardedVideo;

- (void)rewardedVideoDidLoad:(SARewardedVideo * _Nonnull)rewardedVideo;
- (void)rewardedVideo:(SARewardedVideo * _Nonnull)rewardedVideo didFailToLoadWithError:(NSError * _Nonnull)error;

- (void)rewardedVideoWillPresentScreen:(SARewardedVideo * _Nonnull)rewardedVideo;
- (void)rewardedVideoDidPresentScreen:(SARewardedVideo * _Nonnull)rewardedVideo;
- (void)rewardedVideoWillDismissScreen:(SARewardedVideo * _Nonnull)rewardedVideo;
- (void)rewardedVideoDidDismissScreen:(SARewardedVideo * _Nonnull)rewardedVideo;
- (void)rewardedVideoDidClick:(SARewardedVideo * _Nonnull)rewardedVideo;

@end

NS_ASSUME_NONNULL_END
