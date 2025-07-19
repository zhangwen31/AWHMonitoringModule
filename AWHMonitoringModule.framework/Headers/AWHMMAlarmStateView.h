//
//  AWHMMAlarmStateView.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHMMButtonBlock)(NSString *string);

@interface AWHMMAlarmStateView : UIView

@property(nonatomic,strong)UIButton *button1;
@property(nonatomic,strong)UIButton *button2;
@property(nonatomic,strong)UIView *seletLine;
@property(nonatomic,copy)AWHMMButtonBlock buttonBlock;


@end

NS_ASSUME_NONNULL_END
