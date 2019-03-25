//
//  SAExtraData.h
//  SinoAds
//
//  Created by thistl on 2019/3/15.
//  Copyright © 2019 SinoAds. All rights reserved.
//

#ifndef SAExtraData_h
#define SAExtraData_h

#import <Foundation/Foundation.h>

@interface SAExtraData : NSObject  {
    
}

@property(nonatomic, strong) NSString* type;
@property(nonatomic, assign) NSInteger amount;
@property(nonatomic, strong) NSString* data;

- (id)init;

@end

#endif /* SAExtraData_h */
