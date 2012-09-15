//
//  AFDFinalCopyControllerMasterViewController.h
//  CoreDataMultiPlatformAppAFDBetaCodes
//
//  Created by Robert DeNicola on 9/15/12.
//  Copyright (c) 2012 Robert DeNicola. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AFDFinalCopyControllerDetailViewController;

#import <CoreData/CoreData.h>

@interface AFDFinalCopyControllerMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) AFDFinalCopyControllerDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
