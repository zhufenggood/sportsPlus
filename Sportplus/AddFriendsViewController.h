//
//  AddFriendsViewController.h
//  Sportplus
//
//  Created by Forever.H on 14/12/21.
//  Copyright (c) 2014年 JiaZai. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddFriendsViewController : UIViewController<UITableViewDelegate,UITableViewDataSource,UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UIImageView *searchImg;
@property (weak, nonatomic) IBOutlet UITextField *searchTextField;
@property (weak, nonatomic) IBOutlet UITableView *searchFriendTableView;


@end
