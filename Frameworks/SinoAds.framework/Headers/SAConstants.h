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
    SAErrorCodeNoAdError = 0,
    SAErrorCodeNetError = 1,
    SAErrorCodeParseError = 2,
    SAErrorCodeParamEroor = 3,
    SAErrorCodeTimeout = 4,
    SAErrorCodeSuccess = 5,
    SAErrorCodeNoAd = 6,
    SAErrorCodeContentType = 7,
    SAErrorCodeRequestPBError = 8,
    SAErrorCodeAppEmpty = 9,
    SAErrorCodeWapEmpty = 10,
    SAErrorCodeAdUnitEmpty = 11,
    SAErrorCodeAdUnitSizeEmpty = 12,
    SAErrorCodeAdUnitIdError = 13,
    SAErrorCodeAdCountError = 14,
    SAErrorCodeSysError = 15,
    SAErrorCodeSizeError = 16,
    SAErrorCodeUnionAdSiteIdError = 17,
    SAErrorCodeUnionRequestInvalidError = 18,
    SAErrorCodeUnionAppSiteRelError = 19,
    SAErrorCodeBundleNameError = 20,
};

typedef NS_ENUM(NSInteger, SAHttpError) {
    SAHttpErrorCodeRequestError = -1,
    SAHttpErrorCodeDataLengthError = -2,
    SAHttpErrorCodeUnexpectedError = -3,
    SAHttpErrorCodeDataEmptyError = -4,
    SAHttpErrorCodeDecodeError = -5,
    SAHttpErrorCodeDecryptError = -6,
    SAHttpErrorCodeServerConfigError = 1001,
    SAHttpErrorCodeServerDecodeError = 1002,
    SAHttpErrorCodeRequestDataEmptyError = 1003,
    SAHttpErrorCodeWrongAppIdError = 1004,
    SAHttpErrorCodeServerExceptionError = 9001,
};

#endif /* SAConstants_h */
