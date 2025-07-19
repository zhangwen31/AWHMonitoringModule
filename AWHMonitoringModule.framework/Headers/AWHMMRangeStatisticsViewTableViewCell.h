//
//  AWHMMRangeStatisticsViewTableViewCell.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2025/3/8.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBNSENUM.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHMMRangeStatisticsViewTableViewCell : UITableViewCell

@property(nonatomic,strong)UILabel *titleLab;
@property(nonatomic,strong)UIImageView *titleImageView;
@property(nonatomic,strong)UIImageView *selectImageView;
@property (nonatomic, assign) AWHBPBDetailsLineType type;

@end

NS_ASSUME_NONNULL_END
