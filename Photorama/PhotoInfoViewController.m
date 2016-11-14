//
//  PhotoInfoViewController.m
//  Photorama
//
//  Created by Austins Work on 11/14/16.
//  Copyright © 2016 AustinsIronYard. All rights reserved.
//

#import "PhotoInfoViewController.h"
#import "Photo.h"
#import "PhotoStore.h"

@interface PhotoInfoViewController ()
@property(nonatomic) IBOutlet UIImageView *imageView;
@end

@implementation PhotoInfoViewController

- (void)setPhoto:(Photo *)photo {
    _photo = photo;
    self.navigationItem.title = self.photo.title;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    [self.photoStore fetchImageForPhoto:self.photo
                             completion:^(UIImage *image) {
                                 [[NSOperationQueue mainQueue] addOperationWithBlock:^{
                                     self.imageView.image = image;
                                 }];
                             }];
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
