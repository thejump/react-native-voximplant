//
//  VoxImplantModule.h
//  VoxImplantModule
//
//  Copyright (c) 2011-2015 Zingaya. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import <React/RCTBridgeModule.h>
#import "VoxImplant.h"

@interface VoxImplantModule : NSObject <RCTBridgeModule, VoxImplantDelegate>

- (id)init;

@end
