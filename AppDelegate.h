//
//  AppDelegate.h
//  Zadanie1Dawid
//
//  Created by student on 06/11/2023.
//  Copyright © 2023 PB. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

