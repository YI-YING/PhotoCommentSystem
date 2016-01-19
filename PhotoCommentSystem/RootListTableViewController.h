//
//  RootListTableViewController.h
//  PhotoCommentSystem
//
//  Created by CSIE on 2015/10/8.
//  Copyright © 2015年 CSIE. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GridViewCollectionViewController.h"

@interface RootListTableViewController : UITableViewController <UITextFieldDelegate, ThemeChange>

//-------------------------------------------------------------------------------------------------------------------
@property (weak, nonatomic) IBOutlet UIBarButtonItem *uibarbuttonitemAdd;

@property (weak, nonatomic) IBOutlet UIBarButtonItem *uibarbuttonitemExplantion;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *uibarbuttonitemEdit;

//-------------------------------------------------------------------------------------------------------------------

//Theme
@property NSUInteger nsuintegerTheme;

//-------------------------------------------------------------------------------------------------------------------

- (IBAction)newAlbum:(id)sender;
- (IBAction)EditAlbum:(id)sender;

@end
