//
//  BTMasterViewController.h
//  HelloCoreData
//
//  Created by Thaddeus Ternes on 2/29/12.
//  Copyright (c) 2012 Bluetoo. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BTDetailViewController;

#import <CoreData/CoreData.h>

@interface BTMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) BTDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
