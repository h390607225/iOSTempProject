//
//  AppDelegate.h
//  DevOCToolsProject
//
//  Created by ljq on 2019/7/24.
//  Copyright © 2019 ljq. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

