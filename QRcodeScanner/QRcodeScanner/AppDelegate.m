//
//  AppDelegate.m
//  QRcodeScanner
//
//  Created by Manish Kumar on 07/03/14.
//  Copyright (c) 2014 Manish Kumar. All rights reserved.
//

#import "AppDelegate.h"
#import "LoginViewController.h"

@implementation AppDelegate
@synthesize navigationController;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    
     //[PayPalMobile initializeWithClientIdsForEnvironments:@{PayPalEnvironmentProduction : @"AXAGGxCaG-jhN9lX6GPIJLhrQ80JJSKtRKcMaT48d09S6avoV5lfAwbXcnN3"}];
    LoginViewController *Regestration=[[LoginViewController alloc]initWithNibName:@"LoginViewController" bundle:Nil];
    navigationController=[[UINavigationController alloc]initWithRootViewController:Regestration];
    [self.navigationController.navigationBar setBackgroundImage:[UIImage imageNamed:@"Untitled-5.png"] forBarMetrics:UIBarMetricsDefault];
     self.window.rootViewController=navigationController;
    navigationController.navigationBar.tintColor = [UIColor whiteColor];
    // Override point for customization after application launch.
    self.window.backgroundColor = [UIColor whiteColor];
    
    [self.window makeKeyAndVisible];
    return YES;
}

- (void)application:(UIApplication*)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData*)deviceToken
{
    NSString* apnsDeviceToken = [[deviceToken description] stringByTrimmingCharactersInSet:[NSCharacterSet characterSetWithCharactersInString:@"<>"]];
    apnsDeviceToken  = [apnsDeviceToken stringByReplacingOccurrencesOfString:@" " withString:@""];
    
    NSLog(@"My token is: %@", apnsDeviceToken);
    // [[[UIAlertView alloc]initWithTitle:nil message:apnsDeviceToken delegate:nil cancelButtonTitle:@"Ol" otherButtonTitles:nil, nil]show];
}

- (void)application:(UIApplication*)application didFailToRegisterForRemoteNotificationsWithError:(NSError*)error
{
	NSLog(@"Failed to get token, error: %@", error);
}

- (void)applicationWillResignActive:(UIApplication *)application
{
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later. 
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}

@end
