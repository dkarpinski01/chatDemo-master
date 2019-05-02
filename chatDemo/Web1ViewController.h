//
//  Web1ViewController.h
//  CompassExample
//
//  Created by Dennis Karpinski on 6/25/14.
//  Copyright (c) 2014 Dennis Karpinski. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Web1ViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIWebView *Web1;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *back;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *stop;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *refresh;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *forward;

@end
