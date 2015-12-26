//
//  InboxViewController.h
//  Ribbit
//
//  Created by Chloe on 2015-12-17.
//  Copyright © 2015 Chloe Horgan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface InboxViewController : UITableViewController

@property (strong, nonatomic) NSArray *messages;
@property (strong, nonatomic) PFObject *selectedMessage;

- (IBAction)logout:(id)sender;

@end
