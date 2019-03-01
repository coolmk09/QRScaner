//
//  OwnerViewController.h
//  QRcodeScanner
//
//  Created by Manish Kumar on 03/06/14.
//  Copyright (c) 2014 Manish Kumar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OwnerViewController : UIViewController<UITextFieldDelegate>
{
    UIAlertView *OwnerAlertView;
    UIImageView *BackgroundImage;
    UIScrollView *Scrollview;
    UITextField *ownerEmailTF;
    UIButton *SubmittButton;
    NSURLConnection *PaypalEmailConnection;
    UIButton *logoutButton;
    NSURLConnection *Logout_Connection;
}

@end
