//
//  ServerScriptManager.h
//  logical_controller
//
//  Created by lionxing on 19/7/15.
//  Copyright © 2015年 lionxing. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "predefine.h"

@interface Server_Script_Manager_Class : NSObject
+(instancetype)launchVMWithURL:(NSURL*)url;
@end
