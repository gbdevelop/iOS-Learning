//
//  WhereamiViewController.h
//  Whereami
//
//  Created by joeconway on 7/31/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface WhereamiViewController : UIViewController
    <CLLocationManagerDelegate>
{
    CLLocationManager *locationManager;
}

@end
