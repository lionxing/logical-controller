//
//  LogicMessage.m
//  logical_controller
//
//  Created by lionxing on 18/7/15.
//  Copyright © 2015年 lionxing. All rights reserved.
//

#import "LogicMessage.h"

@interface Message_Class ()
+(instancetype)shareInstance;
@end

@implementation Message_Class

+(void)load
{
    
}

-(instancetype)init
{
    self = [super init];
    if (self) {
        
    }
    return self;
}

-(void)dealloc
{

}

+(instancetype)shareInstance
{
    static Message_Class *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[Message_Class alloc] init];
    });
    return instance;
}

+(BOOL)registerServer:(NSString*)serverName withTarget:(id)target
{
    return NO;
}

+(BOOL)registerServer:(NSString *)serverName
{
    return NO;
}

+(void)unregisterServer:(NSString*)serverName
{

}

+(BOOL)sendMessage:(NSDictionary*)message
{
    return NO;
}


@end
