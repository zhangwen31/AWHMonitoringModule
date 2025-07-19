//
//  AWHMMMonomerMonitoringAlarmQueryConditionSelectHeadView.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHMMBtnClickBlock)(void);

@interface AWHMMMonomerMonitoringAlarmQueryConditionSelectHeadView : UIView

@property(nonatomic,strong)UIButton *button;
@property(nonatomic,copy)AWHMMBtnClickBlock BtnClickBlock;

@end

NS_ASSUME_NONNULL_END
