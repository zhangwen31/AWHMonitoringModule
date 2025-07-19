//
//  AWHMMRangeStatisticsView.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2025/3/8.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHMMRangeStatisticsView : UIView

@property(nonatomic,strong, readonly)NSMutableArray *regionsDataArray;
@property(nonatomic,strong, readonly)NSMutableArray *alarmIdArray;

@property (nonatomic, weak) UINavigationController *navigationController;

-(void)refreshData;

@end

NS_ASSUME_NONNULL_END
