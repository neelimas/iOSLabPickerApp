//
//  PAViewController.h
//  PickerApp
//
//  Created by user on 11/13/13.
//  Copyright (c) 2013 Classroom. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PAViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate>
@property (weak, nonatomic) IBOutlet UITextField *usdTextField;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;
@property (weak, nonatomic) IBOutlet UIPickerView *pickerView;
@property (strong, nonatomic) NSArray *exchangeRates;
@end
