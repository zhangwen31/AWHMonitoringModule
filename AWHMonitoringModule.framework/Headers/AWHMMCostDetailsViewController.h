//
//  AWHMMCostDetailsViewController.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHMMCostDetailsViewController : AWHBBBaseViewController

@property(nonatomic,strong)NSMutableArray *titleLabArray;
@property(nonatomic,copy)NSString *carId;
@property(nonatomic,copy)NSString *driverName;
@property(nonatomic,copy)NSString *feeType;
@property(nonatomic,copy) NSString *startTimeStr;
@property(nonatomic,copy) NSString *endTimeStr;

@end

NS_ASSUME_NONNULL_END
