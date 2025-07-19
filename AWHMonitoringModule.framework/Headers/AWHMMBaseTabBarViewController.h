//
//  AWHMMBaseTabBarViewController.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <AWHBPublicBusiness/AWHBPBSingleCarSelectionViewController.h>
#import <AWHBPublicBusiness/AWHBPBMonomerMonitoringHeadView.h>
#import <AWHBPublicBusiness/AWHBPBBaseTabBarViewController.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHMMBaseTabBarViewController : AWHBPBBaseTabBarViewController

//是否不能编辑 选择车辆和搜索车辆 isNoEnabled BOOL类型
- (void)setCurrentIsNoEnabled:(NSNumber *)isNoEnabled;
//设置当前是否是车辆登录 isCarLogin BOOL类型
- (void)setCurrentIsCarLogin:(NSNumber *)isCarLogin;

@property(nonatomic, copy)void (^automaticallyRefreshData)(void);

@property(nonatomic, assign)AWHBBBusinessLoginModeType type;

@end

NS_ASSUME_NONNULL_END
