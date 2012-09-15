//
//  AFDFinalCopyControllerDetailViewController.h
//  CoreDataMultiPlatformAppAFDBetaCodes
//
//  Created by Robert DeNicola on 9/15/12.
//  Copyright (c) 2012 Robert DeNicola. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AFDFinalCopyControllerDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
