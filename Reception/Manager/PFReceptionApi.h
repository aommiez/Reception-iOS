//
//  PFReceptionApi.h
//  Reception
//
//  Created by issrapong wongyai on 9/16/2557 BE.
//  Copyright (c) 2557 platwo fusion. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFNetworking.h"

#pragma mark - Delegate

@protocol PFReceptionApiDelegate <NSObject>


@end


@interface PFReceptionApi : NSObject

#pragma mark - Property
@property (assign, nonatomic) id delegate;
@property AFHTTPRequestOperationManager *manager;
@property NSUserDefaults *userDefaults;
@property NSString *urlStr;

- (void)loginWithUsername:(NSString *)username password:(NSString *)password;

@end
