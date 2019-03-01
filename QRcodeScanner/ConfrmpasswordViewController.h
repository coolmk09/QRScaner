//
//  ConfrmpasswordViewController.h
//  QRcodeScanner
//
//  Created by Manish Kumar on 03/05/14.
//  Copyright (c) 2014 Manish Kumar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ConfrmpasswordViewController : UIViewController<UITextFieldDelegate>
{
    UIImageView *BackgroundImage;
    UIScrollView *ScrollView;
    
    UILabel *messagealertlabel;
    UILabel *UsernameLabel;
    UILabel *Verificationlabel;
    UILabel *Star;
    UILabel *Star1;
     UITextField *VerifyCodeTF;
    UITextField *UsernameTF;
    UIButton *Submittbutton;
    
}

@end
