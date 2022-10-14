//
//  AWHMMExitView.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHMMExitBtnBlock)(NSString *string);

@interface AWHMMExitView : UIView

@property(nonatomic,copy)AWHMMExitBtnBlock ExitBtnBlock;

@end

NS_ASSUME_NONNULL_END
