//
//  AFDFinalCopyControllerAppDelegate.h
//  CoreDataMultiPlatformAppAFDBetaCodes
//
//  Created by Robert DeNicola on 9/15/12.
//  Copyright (c) 2012 Robert DeNicola. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AFDFinalCopyControllerAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
