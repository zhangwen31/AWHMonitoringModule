//
//  AWHMMQueryBtnView.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHMMQueryBlock)(void);
@interface AWHMMQueryBtnView : UIView

/** */
@property(nonatomic,copy)AWHMMQueryBlock QueryBlock;

@end

NS_ASSUME_NONNULL_END
