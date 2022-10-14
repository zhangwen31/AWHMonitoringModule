//
//  AWHMMAboutUsModel.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHMMAboutUsModel : NSObject

@property(nonatomic,copy)NSString *date;
@property(nonatomic,copy)NSString *version;
@property(nonatomic,copy)NSString *cnName;
@property(nonatomic,copy)NSString *linkman;
@property(nonatomic,copy)NSString *phone;
@property(nonatomic,copy)NSString *email;
@property(nonatomic,copy)NSString *addr;
@property(nonatomic,copy)NSString *cmpUrl;
@property(nonatomic,copy)NSString *platformUrl;

@end

NS_ASSUME_NONNULL_END
