//
//  SendbillViewController.h
//  QRcodeScanner
//
//  Created by Manish Kumar on 03/05/14.
//  Copyright (c) 2014 Manish Kumar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SendbillViewController : UIViewController<UITextFieldDelegate>
{
    UIImageView *BackgroundImage;
    UIScrollView  *Scrollview;
    UIButton *Sendbillbutton;
    
    UILabel *mealnamelabel,*discountlabel,*totallabel;
    UITextField *meannameTF,*DiscountTF,*TotalTF;
}

@end
