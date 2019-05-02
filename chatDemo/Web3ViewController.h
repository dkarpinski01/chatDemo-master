//
//  Web3ViewController.h
//  CompassExample
//
//  Created by Dennis Karpinski on 6/26/14.
//  Copyright (c) 2014 Dennis Karpinski. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Web3ViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIWebView *Web3;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *back3;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *stop3;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *refresh3;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *forward3;
@end
