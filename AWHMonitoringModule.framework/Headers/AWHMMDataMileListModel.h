//
//  AWHMMDataMileListModel.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2025/4/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHMMDataMileListModel : NSObject

/// 车辆ID
@property (nonatomic, strong) NSString *carId;
/// 车牌号码
@property (nonatomic, strong) NSString *plate;
/// 行驶里程
@property (nonatomic, strong) NSString *mile;

@end

NS_ASSUME_NONNULL_END
