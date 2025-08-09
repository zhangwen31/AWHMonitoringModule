//
//  AWHMMListViewController.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHMMListViewController : AWHBBBaseViewController

/** */
@property(nonatomic,strong)NSMutableArray *dataArray;
@property(nonatomic,strong)NSMutableArray *selectArray;
@property(nonatomic,strong)UITableView *tableView;
@property(nonatomic,strong,readonly) UISearchBar *searchBar;
//是否是离线
@property(nonatomic,assign)BOOL isOffline;
- (void)seachDataWithSearchText:(NSString *)searchText;

@end

NS_ASSUME_NONNULL_END
