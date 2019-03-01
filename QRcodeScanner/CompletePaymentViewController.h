//
//  CompletePaymentViewController.h
//  QRcodeScanner
//
//  Created by Manish Kumar on 07/03/14.
//  Copyright (c) 2014 Manish Kumar. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface CompletePaymentViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>
{
    UILabel *PaymentUIlabel;
    NSArray *array;
    UIScrollView *Scrollview;
    UIButton *selectButton;
    UIButton *selectAllButton;
    UIButton *RightsideButton;
    UIImageView *backgroundImage;
    UITableView *Table;
    UIButton *backbutton;
    UIButton *PayButton;
    UIImageView *mainBackgroundImage;
}

@end
