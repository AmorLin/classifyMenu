//
//  LLTableViewCell.h
//  LLClassifyMenu
//
//  Created by 汪林林 on 2018/5/14.
//  Copyright © 2018年 汪林林. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "forumModel.h"
@interface LLTableViewCell : UITableViewCell

@property (nonatomic,strong) forumModel *model;
/**
 选中圆圈
 */
@property (weak, nonatomic) IBOutlet UIImageView *selectedRadio;



/**
 上下箭头
 */
@property (weak, nonatomic) IBOutlet UIImageView *arrowsImage;
@end