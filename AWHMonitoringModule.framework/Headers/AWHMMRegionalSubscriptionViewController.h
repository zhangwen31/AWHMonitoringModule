//
//  AWHMMRegionalSubscriptionViewController.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2025/3/8.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHMMRegionalSubscriptionViewController : AWHBBBaseViewController

@property (nonatomic,strong)NSMutableSet *selectSet;
@property(nonatomic,strong)NSMutableArray *dataArray;
@property (nonatomic,strong)NSMutableSet *pointsSelectSet;
@property(nonatomic,strong)NSMutableArray *pointsDataArray;

@end

NS_ASSUME_NONNULL_END
