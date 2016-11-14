//
//  PhotoCollectionViewCell.h
//  Photorama
//
//  Created by Austins Work on 11/14/16.
//  Copyright © 2016 AustinsIronYard. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PhotoCollectionViewCell : UICollectionViewCell

@property(nonatomic) IBOutlet UIImageView *imageView;
@property(nonatomic) IBOutlet UIActivityIndicatorView *spinner;

- (void)updateWithImage:(UIImage *)image;

@end
