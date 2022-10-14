//
//  AWHMMInformationTableViewCell.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHMMInformationTableViewCell : UITableViewCell

@property(nonatomic,strong)UIImageView *msgimageView;
@property(nonatomic,strong)UILabel *titleLab;
@property(nonatomic,strong)UILabel *detailLab;
@property(nonatomic,strong)UILabel *msgLab;

@end

NS_ASSUME_NONNULL_END
