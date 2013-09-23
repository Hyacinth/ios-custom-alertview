//
//  CustomIOS7AlertView.h
//  CustomIOS7AlertView
//
//  Created by Richard on 20/09/2013.
//  Copyright (c) 2013 Wimagguc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomIOS7AlertView : UIView

@property (nonatomic, retain) UIView *parentView;    // The parent view this 'dialog' is attached to
@property (nonatomic, retain) UIView *dialogView;    // Dialog's container view
@property (nonatomic, retain) UIView *containerView; // Container within the dialog (place your ui elements here)
@property (nonatomic, retain) UIView *buttonView;    // Buttons on the bottom of the dialog

@property (nonatomic, assign) id delegate;
@property (nonatomic, retain) NSMutableArray *buttonTitles;

- (id)initWithParentView: (UIView *)_parentView;
- (void)show;
- (void)close;
- (void)setButtonTitles: (NSMutableArray *)buttonTitles;

- (IBAction)customIOS7dialogButtonTouchUpInside:(id)sender;

@end