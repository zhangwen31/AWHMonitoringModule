//
//  AWHMMListMonitoringFirstTableViewCell.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHMMListMonitoringBlock)(AWHBBCarModel *model);
@interface AWHMMListMonitoringFirstTableViewCell : UITableViewCell
@property(nonatomic,strong, readonly)UIImageView *plateImageView;
@property(nonatomic,strong, readonly)UIView *numview;
@property(nonatomic,strong, readonly)UIImageView *pimageView;
@property(nonatomic,strong, readonly)UILabel *plateLab;
@property(nonatomic,strong, readonly)AWHBRExpand40Button *button;
@property(nonatomic,strong, readonly)AWHBRExpand40Button *button2;
@property(nonatomic,strong)AWHBBCarModel *model;
@property(nonatomic,copy)AWHMMListMonitoringBlock ListMonitoringBlock;
@property(nonatomic,copy)AWHMMListMonitoringBlock singleVehicleTrackingBlock;
+ (CGFloat)tableView:(UITableView*)tableView rowHeightForIndexPath:(NSIndexPath *)indexPath;

@end

NS_ASSUME_NONNULL_END
