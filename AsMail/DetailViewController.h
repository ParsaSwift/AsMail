//
//  DetailViewController.h
//  AsMail
//
//  Created by MParsa Rezavandi on 11/18/16.
//  Copyright © 2016 Aseman Group Limited. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

