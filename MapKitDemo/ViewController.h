//
//  ViewController.h
//  MapKitDemo
//
//  Created by TheAppGuruz-iOS-103 on 09/03/15.
//  Copyright (c) 2015 TheAppGururz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>

@interface ViewController : UIViewController <CLLocationManagerDelegate>
{
    CLLocationManager *objLocationManager;
    double latitude_UserLocation, longitude_UserLocation;
}

@property (weak, nonatomic) IBOutlet MKMapView *objMapView;
@property (weak, nonatomic) IBOutlet UIButton *btnStandard;
@property (weak, nonatomic) IBOutlet UIButton *btnSatellite;
@property (weak, nonatomic) IBOutlet UIButton *btnHybrid;

@end

