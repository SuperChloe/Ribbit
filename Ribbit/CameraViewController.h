//
//  CameraViewController.h
//  Ribbit
//
//  Created by Chloe on 2015-12-22.
//  Copyright © 2015 Chloe Horgan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CameraViewController : UITableViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (strong, nonatomic) UIImagePickerController *imagePicker;

@end
