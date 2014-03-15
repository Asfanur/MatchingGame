//
//  HPViewController.m
//  Happiness
//
//  Created by Md.Asfanur Arafin on 14/03/2014.
//  Copyright (c) 2014 SolOrient. All rights reserved.
//

#import "HPViewController.h"
#import "HPFaceView.h"

@interface HPViewController ()
@property (nonatomic,weak) HPFaceView *faceView;

@end

@implementation HPViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    [self.faceView setNeedsDisplay];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
