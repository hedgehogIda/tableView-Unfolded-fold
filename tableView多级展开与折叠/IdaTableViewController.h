//
//  IdaTableViewController.h
//  tableView多级展开与折叠
//
//  Created by 腾实信 on 2016/11/1.
//  Copyright © 2016年 ida. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ItemData.h"
#import "IdaTableViewCell.h"
@interface IdaTableViewController : UITableViewController
@property(nonatomic,strong)ItemData *itemData;
@end
