//
//  AWHMMMinimalistMonitoringTableViewCell.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHMMMinimalistMonitoringTableViewCell : UITableViewCell

/** */
@property (nonatomic, strong, readonly) UIView *showContentView;
@property(nonatomic,strong)UIImageView *PZimageView;
@property(nonatomic,strong)UILabel *plateLab;
@property(nonatomic,strong)UILabel *timeLab;
@property(nonatomic,strong)UILabel *stateLab;

@end

NS_ASSUME_NONNULL_END
