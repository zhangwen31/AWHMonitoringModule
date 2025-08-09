//
//  AWHMMNoticeView.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHMMReturnUrlBlock)(NSString *urlStr);
@interface AWHMMNoticeView : UIView<UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
@property(nonatomic,strong)NSMutableArray *dataArray;
@property (nonatomic, strong)UICollectionView *collectionView;
@property(nonatomic,strong)NSMutableSet *readSet;
@property(nonatomic,assign)NSInteger selectIndex;
@property(nonatomic,copy)AWHMMReturnUrlBlock ReturnUrlBlock;

@end

NS_ASSUME_NONNULL_END
