//
//  DetailViewController.h
//  TinyWebo
//
//  Created by fengchao on 16/1/15.
//  Copyright © 2016年 fengchao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

