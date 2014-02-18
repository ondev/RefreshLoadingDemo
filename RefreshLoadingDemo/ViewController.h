//
//  ViewController.h
//  LoadMoreFooterDemo
//
//  Created by Haven on 17/2/14.
//  Copyright (c) 2014 LF. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LoadMoreTableFooterView.h"
#import "EGORefreshTableHeaderView.h"

@interface ViewController : UIViewController<LoadMoreTableFooterDelegate,EGORefreshTableHeaderDelegate, UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) LoadMoreTableFooterView *loadMoreFooterView;
@property (nonatomic, strong) EGORefreshTableHeaderView *refreshHeaderView;
@property (nonatomic) BOOL reloading;

- (void)reloadTableViewDataSource;
- (void)doneLoadingTableViewData;
@end
