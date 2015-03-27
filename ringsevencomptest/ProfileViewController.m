//
//  ProfileViewController.m
//  ringsevencomptest
//
//  Created by Baafuor Kwarteng on 3/26/15.
//  Copyright (c) 2015 Baafuor Kwarteng. All rights reserved.
//

#import "ProfileViewController.h"

@implementation ProfileViewController

- (void)viewDidLoad{
    NSURL *url = [NSURL URLWithString:@"http://private-5bdb3-friendmock.apiary-mock.com/friends/id"];
    NSURLRequest *request = [NSURLRequest requestWithURL:url];
    [NSURLConnection sendAsynchronousRequest:request
                                       queue:[NSOperationQueue mainQueue]
                           completionHandler:^(NSURLResponse *response,
                                               NSData *data, NSError *connectionError)
     {
         if (data.length > 0 && connectionError == nil)
         {
             NSDictionary *profileDictionary = [NSJSONSerialization JSONObjectWithData:data
                                                                               options:0
                                                                                 error:NULL];
             
             self.firstNameLabel.text = profileDictionary[@"first_name"];
             self.lastNameLabel.text = profileDictionary[@"last_name"];
             NSString *ImageURL = profileDictionary[@"img"];
             NSData *imageData = [NSData dataWithContentsOfURL:[NSURL URLWithString:ImageURL]];
             self.mainProfilePic.image = [UIImage imageWithData:imageData];
             self.phoneNumLabel.text = profileDictionary[@"phone"];
             self.addressLabel.text = profileDictionary[@"address_1"];
             self.cityLabel.text = profileDictionary[@"city"];
             self.stateLabel.text = profileDictionary[@"state"];
             self.zipCodeLabel.text = profileDictionary[@"zipcode"];
             self.bioLabel.text = profileDictionary[@"bio"];
             
             
             
         }
     }];
    
}



@end
