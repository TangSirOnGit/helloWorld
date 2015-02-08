//
//  ViewController.h
//  HelloWorld
//
//  Created by laiming on 15/2/5.
//  Copyright (c) 2015年 laiming. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (copy, nonatomic) NSString *userName;
- (IBAction)changeGreeting:(id)sender;
@end

