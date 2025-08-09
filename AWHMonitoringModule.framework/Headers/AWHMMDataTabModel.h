//
//  AWHMMDataTabModel.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2025/4/20.
//

#import <Foundation/Foundation.h>
#import "AWHMMDataAlarmListModel.h"
#import "AWHMMDataSafetyListModel.h"
#import "AWHMMDataMileListModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface AWHMMDataTabModel : NSObject
/// 车队ID
@property (nonatomic, strong) NSString *teamId;
/// 车队名称
@property (nonatomic, strong) NSString *teamName;
/// 车辆总数
@property (nonatomic, strong) NSString *carNums;
/// 在线车辆数
@property (nonatomic, strong) NSString *onlineNums;
/// 离线车辆数
@property (nonatomic, strong) NSString *offlineNums;
/// 报警车辆数
@property (nonatomic, strong) NSString *alarmCount;
/// 总里程
@property (nonatomic, strong) NSString *mileCount;
/// 欠费车辆总数
@property (nonatomic, strong) NSString *arrearsNums;
/// 今日里程
@property (nonatomic, strong) NSArray<AWHMMDataMileListModel *> *mileList;
/// 今日报警
@property (nonatomic, strong) NSArray<AWHMMDataAlarmListModel *> *alarmList;
/// 今日安全报警
@property (nonatomic, strong) NSArray<AWHMMDataSafetyListModel *> *safetyList;

@end

NS_ASSUME_NONNULL_END
