//
//  LandingViewController.h
//  Patissier-iOS-Objective-C
//
//  Created by JordanLin on 2017/9/11.
//  Copyright © 2017年 JordanLin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FBSDKCoreKit/FBSDKCoreKit.h>
#import <FBSDKLoginKit/FBSDKLoginKit.h>
#import "TabbarController.h"
#import "AppDelegate.h"
#import "AFNetworking.h"

@interface LandingViewController : UIViewController

@property (strong, nonatomic) IBOutlet UIImageView *landingImageView;

@property (strong, nonatomic) IBOutlet UIView *GradientView;

@end
