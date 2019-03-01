//
//  ShareCheckinViewController.h
//  QRcodeScanner
//
//  Created by Manish Kumar on 02/04/14.
//  Copyright (c) 2014 Manish Kumar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>


@interface ShareCheckinViewController : UIViewController<MKMapViewDelegate>
{
    UIButton *locationIndicatorButton;
    UIImageView *locationIndicatorArrow;
    UIButton *Sharebutton;
}
- (void) updateLocationIndicator;
@property (nonatomic, retain) MKMapView *mapView;
@property (nonatomic, retain) UIButton *locationIndicatorButton;
@property (nonatomic, retain) UIImageView *locationIndicatorArrow;
@end
