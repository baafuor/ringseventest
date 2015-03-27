//
//  UserTableViewCell.h
//  ringsevencomptest
//
//  Created by Baafuor Kwarteng on 3/26/15.
//  Copyright (c) 2015 Baafuor Kwarteng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UserTableViewCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UIImageView *mainProfilePic;
@property (strong, nonatomic) IBOutlet UILabel *firstNameLabel;
@property (strong, nonatomic) IBOutlet UILabel *lastNameLabel;
@property (strong, nonatomic) IBOutlet UILabel *statusLabel;

-(void)cellProperties:(NSString *)username withObject:(NSDictionary *)object;

@end
