//
//  NotificationViewController.h
//  QRcodeScanner
//
//  Created by Manish Kumar on 03/05/14.
//  Copyright (c) 2014 Manish Kumar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NotificationViewController : UIViewController<UITextFieldDelegate>
{
    UIImageView *BackgroundImage;
    UIScrollView  *Scrollview;
    
    UILabel *Coupon_Issue_Date,*discountlabel,*tax,*mealcost;
    UITextField *mealcostTF,*DiscountTF,*TotalTF;
    UIButton *Sendnotification;

}

@end
