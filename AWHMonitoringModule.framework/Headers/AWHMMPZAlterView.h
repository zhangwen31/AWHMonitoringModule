//
//  AWHMMPZAlterView.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

//取消按钮点击事件
typedef void(^AWHMMCancelBlock)(void);
//确定按钮点击事件
typedef void(^AWHMMSureBlock)(void);

@interface AWHMMPZAlterView : UIView

@property(nonatomic,strong)UILabel *titleLb;
@property(nonatomic,strong)UILabel *contentLb;
@property(nonatomic,strong)UIButton *cancelBt;
@property(nonatomic,strong)UIButton *sureBt;
@property(nonatomic,strong)UIView *buttonView ;
@property(nonatomic,copy)AWHMMCancelBlock cancel_block;
@property(nonatomic,copy)AWHMMSureBlock sure_block;
+(instancetype)alterViewWithFram:(CGRect)frame Title:(NSString *)title content:(UIView *)content cancel:(NSString *)cancel sure:(NSString *)sure cancelBtClcik:(AWHMMCancelBlock)cancelBlock sureBtClcik:(AWHMMSureBlock)sureBlock;

@end

NS_ASSUME_NONNULL_END
