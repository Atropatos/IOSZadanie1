//
//  ViewController.h
//  Zadanie1Dawid
//
//  Created by student on 06/11/2023.
//  Copyright © 2023 PB. All rights reserved.
//



#import <UIKit/UIKit.h>


@interface ViewController : UIViewController
-(IBAction)enter;

@property (nonatomic, weak) IBOutlet UILabel *messageLabel;
@property (nonatomic, weak) IBOutlet UITextField *inputField;

@end

