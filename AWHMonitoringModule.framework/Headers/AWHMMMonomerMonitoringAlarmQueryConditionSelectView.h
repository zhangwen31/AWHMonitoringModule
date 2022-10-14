//
//  AWHMMMonomerMonitoringAlarmQueryConditionSelectView.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHMMShowAlarmTypeBlock)(void);
typedef void(^AWHMMHiddenViewBlock)(void);
typedef void(^AWHMMQueryBtnBlock)(void);

@interface AWHMMMonomerMonitoringAlarmQueryConditionSelectView : UIView<UITableViewDelegate,UITableViewDataSource>
@property(nonatomic,strong)UITableView *tableView;
@property(nonatomic,strong)NSArray *titleArr;
@property(nonatomic,strong)NSArray *detailArr;
@property(nonatomic,strong)NSArray *detailLabArr;
@property(nonatomic,copy)NSString *speedStr;
@property(nonatomic,copy)NSString *timeStr;
@property(nonatomic,copy)AWHMMShowAlarmTypeBlock ShowAlarmTypeBlock;
@property(nonatomic,copy)AWHMMQueryBtnBlock QueryBtnBlock;
@property(nonatomic,copy)AWHMMHiddenViewBlock HiddenViewBlock;

@end

NS_ASSUME_NONNULL_END
