//
//  Web2ViewController.m
//  CompassExample
//
//  Created by Dennis Karpinski on 6/26/14.
//  Copyright (c) 2014 Dennis Karpinski. All rights reserved.
//

#import "Web2ViewController.h"

@interface Web2ViewController ()
{
}
    
    @end

@implementation Web2ViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [[UIApplication sharedApplication] openURL:[NSURL URLWithString:@"http://www.animalplanet.com/tv-shows/finding-bigfoot/finding-bigfoot-map.htm"]];
    
    [super viewDidLoad];
    // Do any additional setup after loading the view.

    //NSString *fullURL = @"http://www.animalplanet.com/tv-shows/finding-bigfoot/finding-bigfoot-map.htm";
    //NSURL *url = [NSURL URLWithString:fullURL];
    //NSURLRequest *requestObj = [NSURLRequest requestWithURL:url];
    //[_Web2 loadRequest:requestObj];

}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
