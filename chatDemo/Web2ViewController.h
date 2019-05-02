//
//  Web2ViewController.h
//  CompassExample
//
//  Created by Dennis Karpinski on 6/26/14.
//  Copyright (c) 2014 Dennis Karpinski. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Web2ViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIWebView *Web2;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *back2;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *stop2;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *refresh2;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *forward2;
@end
