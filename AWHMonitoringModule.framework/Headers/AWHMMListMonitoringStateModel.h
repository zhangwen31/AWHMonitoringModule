//
//  AWHMMListMonitoringStateModel.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHMMIsShowCellBlock)(BOOL isShow,id indexPath);

@interface AWHMMListMonitoringStateModel : NSObject

/** */
@property(nonatomic,copy)AWHMMIsShowCellBlock IsShowCellBlock;
-(id)initWithArray:(NSArray *)array indexPath:(NSIndexPath *)indexPath isShowCellBlock:(AWHMMIsShowCellBlock)showCellBlock;

@end

NS_ASSUME_NONNULL_END
