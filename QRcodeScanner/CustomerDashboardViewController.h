//
//  CustomerDashboardViewController.h
//  QRcodeScanner
//
//  Created by Manish Kumar on 01/04/14.
//  Copyright (c) 2014 Manish Kumar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"

@interface CustomerDashboardViewController : UIViewController<UIWebViewDelegate>
{
    UIImageView *BackgroundImage;
    UIScrollView  *Scrollview;
    UIImage *buttonImage;
    UIButton *aButton;
    UIBarButtonItem *aBarButtonItem;
    NSURLConnection *UserInfoConnection;
    NSArray *UserDetailArray;
    NSString *NameString;
    NSString *UserNameString;
    NSString *EmailString;
     AppDelegate *NewClassMoonAppDelegate;
    
    //NSURLConnection *Logout_Connection;
    
     NSString *resturentid;
    
    
    UILabel *WelComeLabel;
    UILabel *usernamelabel;
    UIButton *Checkinbutton;
    UIButton *websitebtn;
    UIButton *LogoutButton;
   
}
@property(strong,nonatomic)UIWebView *Webview;
@property(strong,nonatomic)UISegmentedControl *SegmentController;

@property(strong,nonatomic)NSString *datastring;

@end
