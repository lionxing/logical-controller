//
//  LogicMessage.h
//  logical_controller
//
//  Created by lionxing on 18/7/15.
//  Copyright © 2015年 lionxing. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "predefine.h"

@interface Message_Class : NSObject
+(BOOL)registerServer:(NSString*)serverName withTarget:(id)target;
+(BOOL)registerServer:(NSString *)serverName;
+(void)unregisterServer:(NSString*)serverName;
+(BOOL)sendMessage:(NSDictionary*)message;
@end
