//
//  AWHMMNoticeCollectionViewCell.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHMMReturnUrlBlock)(NSString *str);
@interface AWHMMNoticeCollectionViewCell : UICollectionViewCell

@property(nonatomic,strong)UILabel *headTitleLab;
@property(nonatomic,strong)UILabel *dateLab;
@property(nonatomic,strong)UILabel *titleLab;
@property(nonatomic,strong)UIButton *downBtn;
@property(nonatomic,strong)UILabel *pageLab;
@property(nonatomic,strong)UILabel *downBtnLab;
/** */
@property(nonatomic,copy)AWHMMReturnUrlBlock ReturnUrlBlock;

@end

NS_ASSUME_NONNULL_END
