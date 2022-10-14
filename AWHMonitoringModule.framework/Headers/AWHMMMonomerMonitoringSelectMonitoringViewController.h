//
//  AWHMMMonomerMonitoringSelectMonitoringViewController.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHMMReturnSelectAlarmTypeBlock)(NSSet *selectSet,NSArray *allAlarmArray);

@interface AWHMMMonomerMonitoringSelectMonitoringViewController : AWHBBBaseViewController

@property(nonatomic,copy)AWHMMReturnSelectAlarmTypeBlock ReturnSelectAlarmTypeBlock;
@property (nonatomic,strong)NSMutableSet *selectSet;
@property (nonatomic, strong) NSString *requestInterface;
@property (nonatomic, strong) NSString *type;

@end

NS_ASSUME_NONNULL_END
