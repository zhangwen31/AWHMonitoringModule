//
//  AWHMMInformationViewController.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHMMInformationViewController : AWHBBBaseViewController

@property(nonatomic,strong)NSMutableArray *dataArray;
@property(nonatomic,strong)NSMutableArray *unReadArray;
@property(nonatomic,strong)NSMutableArray *readArray;

@end

NS_ASSUME_NONNULL_END
