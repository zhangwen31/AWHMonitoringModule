//
//  AWHMMMaintenanceCostsTableViewCell.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHMMMaintenanceCostsTableViewCell : UITableViewCell

@property(nonatomic,strong)UILabel *titleLab;
@property(nonatomic,strong)UITextField *detailTextField;
@property(nonatomic,strong)UIButton *stateBtn;
@property(nonatomic,assign)NSUInteger maxLength;
@property(nonatomic,strong)UIView *line;
@property(nonatomic,strong)UIView *line2;
@property (nonatomic, assign) BOOL isHiddenLine;

@end

NS_ASSUME_NONNULL_END
