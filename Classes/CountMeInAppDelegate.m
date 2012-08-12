//
//  CountMeInAppDelegate.m
//  CountMeIn
//
//  Created by acs on 10/5/08.
//  Copyright ACS Technologies 2008. All rights reserved.
//

#import "CountMeInAppDelegate.h"
#import "RootViewController.h"

@implementation CountMeInAppDelegate


@synthesize window;
@synthesize rootViewController;


- (void)applicationDidFinishLaunching:(UIApplication *)application {
	
	[window addSubview:[rootViewController view]];
	[window makeKeyAndVisible];
}


- (void)dealloc {
	[rootViewController release];
	[window release];
	[super dealloc];
}

@end

@interface SQLForCoreDataAppDelegate : NSObject <UIApplicationDelegate> {
    
    NSManagedObjectModel *managedObjectModel;
    NSManagedObjectContext *managedObjectContext;	    
    NSPersistentStoreCoordinator *persistentStoreCoordinator;
    
    UIWindow *window;
	
	RootViewController *rootViewController;
	UINavigationController *navigationViewController;
}

- (IBAction)saveAction:sender;

@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@property (nonatomic, readonly) NSString *applicationDocumentsDirectory;

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) RootViewController *rootViewController;
@property (nonatomic, retain) UINavigationController *navigationViewController;


@end
