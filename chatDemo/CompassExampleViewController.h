//
//  CompassExampleViewController.h
//  CompassExample
//
//  Created by Dennis Karpinski on 6/18/14.
//  Copyright (c) 2014 Dennis Karpinski. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <QuartzCore/QuartzCore.h>
#import <AVFoundation/AVFoundation.h>
#import <AssetsLibrary/AssetsLibrary.h>
#import <MediaPlayer/MediaPlayer.h>
#import <MobileCoreServices/MobileCoreServices.h>
#import <MapKit/MapKit.h>
#import <MessageUI/MessageUI.h>
#import <MapKit/MKAnnotation.h>

CLLocationManager *locationManager; <CLLocationManagerDelegate>


@interface CompassExampleViewController :UIViewController
<AVAudioRecorderDelegate,UIImagePickerControllerDelegate,MKMapViewDelegate,MFMailComposeViewControllerDelegate,CLLocationManagerDelegate>

- (IBAction)changeState:(id)sender;

- (IBAction)postToTwitter:(id)sender;
- (IBAction)postToFacebook:(id)sender;
- (IBAction)CaptureScreen:(id)sender;
@property (retain, nonatomic) IBOutlet MKMapView *mapView;

@property (weak, nonatomic) IBOutlet UILabel *latitudeLabel;
@property (weak, nonatomic) IBOutlet UILabel *longitudeLabel;
@property (weak, nonatomic) IBOutlet UILabel *addressLabel;
- (IBAction)getCurrentLocation:(id)sender;


- (IBAction)changeMapType:(id)sender;
- (IBAction)zoomIn:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *submitProof;

- (IBAction)showEmail:(id)sender;


@property (nonatomic) int flashlightState;

@property (strong, nonatomic) NSURL *videoURL;
@property (strong, nonatomic) MPMoviePlayerController *videoController;

@property (strong, atomic) ALAssetsLibrary* library;
@property (weak, nonatomic) IBOutlet UIButton *recordPauseButton;
@property (weak, nonatomic) IBOutlet UIButton *stopButton;
@property (weak, nonatomic) IBOutlet UIButton *playButton;
- (IBAction)recordPauseTapped:(id)sender;
- (IBAction)stopTapped:(id)sender;
- (IBAction)playTapped:(id)sender;
- (IBAction)takePhoto:(id)sender;
- (IBAction)captureVideo:(id)sender;




@property (nonatomic,retain) CLLocationManager *locationManager;
@property (strong, nonatomic) IBOutlet UIImageView *compass;

#define IS_OS_8_OR_LATER ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)

@end

