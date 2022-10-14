//
//  AWHMMSideBarView.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHMMReturnTextLabelText)(NSString *textLabelText);
@interface AWHMMSideBarView : UIView
@property (nonatomic, strong)NSMutableArray *dataArray;//所有消息
@property(nonatomic,copy)AWHMMReturnTextLabelText ReturnTextLabelText;

@end

NS_ASSUME_NONNULL_END
