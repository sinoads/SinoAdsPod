//
//  SAConstants.h
//  SinoAds
//
//  Created by thistl on 2019/3/21.
//  Copyright © 2019 SinoAds. All rights reserved.
//

#ifndef SAConstants_h
#define SAConstants_h

typedef NS_ENUM(NSInteger, SAUserGender) {
    SAUserGenderNone,
    SAUserGenderUnknown,
    SAUserGenderMan,
    SAUserGenderWoman
};

typedef NS_ENUM(NSInteger, SAError) {
    SAErrorCodeNoAdError,
    SAErrorCodeNetError,
    SAErrorCodeParseError,
    SAErrorCodeParamEroor,
    SAErrorCodeTimeout,
    SAErrorCodeSuccess,
    SAErrorCodeNoAd,
    SAErrorCodeContentType,
    SAErrorCodeRequestPBError,
    SAErrorCodeAppEmpty,
    SAErrorCodeWapEMpty,
    SAErrorCodeAdSlotEmpty,
    SAErrorCodeAdSlotSizeEmpty,
    SAErrorCodeAdSlotIdError,
    SAErrorCodeAdCountError,
    SAErrorCodeSysError,
    SAErrorCodeSizeError,
    SAErrorCodeUnionAdSiteIdError,
    SAErrorCodeUnionRequestInvalidError,
    SAErrorCodeUnionAppSiteRelError,
    SAErrorCodeBundleNameError,
};

#endif /* SAConstants_h */
