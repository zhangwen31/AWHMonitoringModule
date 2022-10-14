//
//  AWHMMListFunctionView.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHMMReturnListFunctionCellName)(NSString *name);

@interface AWHMMListFunctionView : UIView

@property(nonatomic,copy)AWHMMReturnListFunctionCellName ReturnListFunctionCellName;
//是否隐藏时间选择
@property(nonatomic,assign) BOOL isHiddenTime;

@end

NS_ASSUME_NONNULL_END
