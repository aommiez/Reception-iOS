//
//  PFReceptionApi.m
//  Reception
//
//  Created by issrapong wongyai on 9/16/2557 BE.
//  Copyright (c) 2557 platwo fusion. All rights reserved.
//

#import "PFReceptionApi.h"

@implementation PFReceptionApi

- (id) init
{
    if (self = [super init])
    {
        self.manager = [AFHTTPRequestOperationManager manager];
        self.userDefaults = [NSUserDefaults standardUserDefaults];
        self.urlStr = [[NSString alloc] init];
    }
    return self;
}

- (void)loginWithUsername:(NSString *)username password:(NSString *)password {
    
}


@end
