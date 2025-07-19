//
//  AWHMMDataSafetyListModel.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2025/4/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHMMDataSafetyListModel : NSObject

/// 车辆ID
@property (nonatomic, strong) NSString *carId;
/// 车牌号码
@property (nonatomic, strong) NSString *plate;
/// 今日安全报警数
@property (nonatomic, strong) NSString *alarmNums;

@end

NS_ASSUME_NONNULL_END
