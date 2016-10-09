//
//  WDScannerMaskView.h
//  WDMovie
//
//  Created by WindyZhang on 16/10/9.
//  Copyright © 2016年 feeyo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WDScannerMaskView : UIView

// 使用裁切区域实例化遮罩视图
//
// @param frame    视图区域
// @param cropRect 裁切区域
//
// @return 遮罩视图
+ (instancetype)maskViewWithFrame:(CGRect)frame cropRect:(CGRect)cropRect;

// 裁切区域
@property (nonatomic) CGRect cropRect;

@end
