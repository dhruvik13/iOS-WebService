//
//  APILogDetailVC.h
//  iOS_APIParser
//
//  Created by Dhruvik Rao on 9/7/18.
//  Copyright © 2018 Dhruvik Rao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "APIInfoObject.h"

@interface APILogDetailVC : UITableViewController

@property (nonatomic, strong) APIInfoObject *selectedAPIForDetail;

@end
