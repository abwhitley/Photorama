//
//  PhotoInfoViewController.h
//  Photorama
//
//  Created by Austins Work on 11/14/16.
//  Copyright © 2016 AustinsIronYard. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Photo;
@class PhotoStore;

@interface PhotoInfoViewController : UIViewController
@property(nonatomic) Photo *photo;
@property(nonatomic) PhotoStore *photoStore;
@end
