//
//  AWHMMDataTabCell.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2025/4/20.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHMMDataTabCell : UITableViewCell

/// 排名
@property (nonatomic, strong) UILabel *rankingLabel;
/// 车牌号码
@property (nonatomic, strong) UILabel *carPlateLabel;
/// 今日里程 数据
@property (nonatomic, strong) UILabel *dataLabel;

@property (nonatomic, assign) BOOL isHiddenLine;

@end

NS_ASSUME_NONNULL_END
