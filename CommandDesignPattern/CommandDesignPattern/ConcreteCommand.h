//
//  ConcreteCommand.h
//  CommandDesignPattern
//
//  Created by Watcher on 13-12-8.
//  Copyright (c) 2013年 yanghe. All rights reserved.
//

#import "Command.h"
#import "Receiver.h"
@interface ConcreteCommand : Command
{
    Receiver *myReceiver;
}
-(ConcreteCommand*)MyInit:(Receiver*)receiver;
@end
