//
//  UserDescTableViewCell.h
//  KanZhiHu
//
//  Created by 朱安智 on 16/8/2.
//  Copyright © 2016年 朱安智. All rights reserved.
//

#import <UIKit/UIKit.h>

@class UserModel;

@interface UserDescTableViewCell : UITableViewCell
- (void)configureCellWithEntity:(UserModel *)entity;
@end
