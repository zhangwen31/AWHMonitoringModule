//
//  AWHMMHistoryLandTableViewCell.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHMMHistoryLandTableViewCell : UITableViewCell

@property(nonatomic,strong)UILabel *timeLab;
@property(nonatomic,strong)UILabel *ipLab;
@property(nonatomic,strong)UILabel *addrLab;
@property(nonatomic,strong)UIImageView *timeImageView;
@property(nonatomic,strong)UIImageView *ipImageView;
@property(nonatomic,strong)UIImageView *addrImageView;

@end

NS_ASSUME_NONNULL_END
