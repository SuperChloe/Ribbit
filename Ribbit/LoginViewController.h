//
//  LoginViewController.h
//  Ribbit
//
//  Created by Chloe on 2015-12-18.
//  Copyright © 2015 Chloe Horgan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;

- (IBAction)login:(id)sender;

@end
