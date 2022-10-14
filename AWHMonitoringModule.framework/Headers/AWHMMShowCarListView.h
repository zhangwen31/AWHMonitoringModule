//
//  AWHMMShowCarListView.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>
#import <AWHBoneRuntime/AWHBRTableViewDataSource.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHMMReturnCarModelBlock)(AWHBBCarModel *carModel);
@interface AWHMMShowCarListView : UIView
/** */
@property(nonatomic,strong)UIView *contentView;
@property(nonatomic,strong)NSMutableArray *dataArray;
@property (nonatomic,strong)UITableView *tableView;
@property(nonatomic, strong) AWHBRTableViewDataSource* dateSource;/**< dataSource */
/** */
@property(nonatomic,copy)AWHMMReturnCarModelBlock ReturnCarModelBlock;
@property(nonatomic,copy)void (^closeClick)(void);

@end

NS_ASSUME_NONNULL_END
