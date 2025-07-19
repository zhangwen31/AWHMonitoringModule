//
//  AWHMMMonomerMonitoringSafetyTypeView.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHMMReturnSelectAlarmTypeBlock)(NSSet * _Nullable selectSet,NSArray * _Nonnull allAlarmArray);
@interface AWHMMMonomerMonitoringSafetyTypeView : UIView

@property(nonatomic,copy)AWHMMReturnSelectAlarmTypeBlock ReturnSelectAlarmTypeBlock;

@end

NS_ASSUME_NONNULL_END
