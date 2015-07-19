//
//  LogicServer.h
//  logical_controller
//
//  Created by lionxing on 18/7/15.
//  Copyright © 2015年 lionxing. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "predefine.h"

@interface Server_Class : NSObject
-(instancetype)initServerOnMainThread:(BOOL)abool;
-(instancetype)initServerWithName:(NSString*)threadName onMainthread:(BOOL)abool;
@end
