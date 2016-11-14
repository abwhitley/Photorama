//
//  PhotoStore.h
//  Photorama
//
//  Created by Austins Work on 10/31/16.
//  Copyright © 2016 AustinsIronYard. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Photo;

@interface PhotoStore : NSObject
- (void)fetchRecentPhotosWithCompletion:(void(^)(NSArray *))completion;
- (void)fetchImageForPhoto:(Photo *)photo completion:(void(^)(UIImage *))completion;
@end
