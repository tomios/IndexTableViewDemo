//
//  RootViewController.h
//  IndexTableViewDemo
//
//  Created by Tom.Zhai on 13-12-4.
//  Copyright (c) 2013年 Tomsky Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) UITableView  *myTable;
@property (strong, nonatomic) NSDictionary *dic;
@property (strong, nonatomic) NSArray      *keyArray;

@end
