//
//  FlickrAPI.h
//  Photorama
//
//  Created by Austins Work on 10/31/16.
//  Copyright © 2016 AustinsIronYard. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FlickrAPI : NSObject
+ (NSURL *)recentPhotosURL;
+ (NSArray *)photosFromJSONData:(NSData *)jsonData;
@end
