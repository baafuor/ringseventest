//
//  ProfileViewController.h
//  ringsevencomptest
//
//  Created by Baafuor Kwarteng on 3/26/15.
//  Copyright (c) 2015 Baafuor Kwarteng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ProfileViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIImageView *mainProfilePic;
@property (strong, nonatomic) IBOutlet UILabel *firstNameLabel;
@property (strong, nonatomic) IBOutlet UILabel *lastNameLabel;
@property (strong, nonatomic) IBOutlet UILabel *phoneNumLabel;
@property (strong, nonatomic) IBOutlet UILabel *addressLabel;
@property (strong, nonatomic) IBOutlet UILabel *cityLabel;
@property (strong, nonatomic) IBOutlet UILabel *stateLabel;
@property (strong, nonatomic) IBOutlet UILabel *zipCodeLabel;
@property (strong, nonatomic) IBOutlet UILabel *bioLabel;
@property (strong, nonatomic) IBOutlet UILabel *availabeLabel;

@end
