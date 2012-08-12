//
//  CountMeInAppDelegate.h
//  CountMeIn
//
//  Created by acs on 10/5/08.
//  Copyright ACS Technologies 2008. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/NSObject.h>


@class MainViewController;

@interface CountMeInAppDelegate : NSObject <UIApplicationDelegate> {
    
    NSManagedObjectModel *managedObjectModel;
    NSManagedObjectContext *managedObjectContext;	    
    NSPersistentStoreCoordinator *persistentStoreCoordinator;
    
    UIWindow *window;
	
	MainViewController *mainViewController;
	UINavigationController *navigationViewController;
}

- (IBAction)saveAction:sender;

@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@property (nonatomic, readonly) NSString *applicationDocumentsDirectory;

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) MainViewController *mainViewController;
@property (nonatomic, retain) UINavigationController *navigationViewController;

@end

