//
//  AWHMMOperationCarView.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHMMOperationCarBlock)(NSString *titleLabText);
typedef void(^AWHMMRemoveBlock)(void);

@interface AWHMMOperationCarView : UIView

@property(nonatomic,copy)AWHMMOperationCarBlock OperationCarBlock;
@property(nonatomic,copy)AWHMMRemoveBlock RemoveBlock;
@property(nonatomic,assign)BOOL isHiddenSingle;
@property(nonatomic,strong)UILabel *placeLabel;

@end

NS_ASSUME_NONNULL_END
