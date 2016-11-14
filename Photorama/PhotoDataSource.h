//
//  PhotoDataSource.h
//  Photorama
//
//  Created by Austins Work on 11/14/16.
//  Copyright © 2016 AustinsIronYard. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PhotoDataSource : NSObject <UICollectionViewDataSource>

@property(nonatomic, copy) NSArray *photos;
- (instancetype)initWithPhotos:(NSArray *)photos NS_DESIGNATED_INITIALIZER;

@end
