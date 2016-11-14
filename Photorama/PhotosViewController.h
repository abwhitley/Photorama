//
//  ViewController.h
//  Photorama
//
//  Created by Austins Work on 10/31/16.
//  Copyright © 2016 AustinsIronYard. All rights reserved.
//

#import <UIKit/UIKit.h>
@class PhotoStore;

@interface PhotosViewController : UIViewController <UICollectionViewDelegate>
@property (nonatomic) PhotoStore *photoStore;

@end

