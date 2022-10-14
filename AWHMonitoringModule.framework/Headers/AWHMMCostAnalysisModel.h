//
//  AWHMMCostAnalysisModel.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHMMCostAnalysisModel : NSObject

@property(nonatomic,copy)NSString *addOilCapacity;
@property(nonatomic,copy)NSString *addOilFee;
@property(nonatomic,copy)NSString *carId;
@property(nonatomic,copy)NSString *dateSplit;
@property(nonatomic,copy)NSString *insureFee;
@property(nonatomic,copy)NSString *mile;
@property(nonatomic,copy)NSString *mileOil;
@property(nonatomic,copy)NSString *otherFee;
@property(nonatomic,copy)NSString *repairFee;
@property(nonatomic,copy)NSString *totalFee;
@property(nonatomic,copy)NSString *trafficFee;
@property(nonatomic,copy)NSString *yearAdtFee;

@end

NS_ASSUME_NONNULL_END
