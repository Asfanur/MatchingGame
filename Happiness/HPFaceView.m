//
//  HPFaceView.m
//  Happiness
//
//  Created by Md.Asfanur Arafin on 14/03/2014.
//  Copyright (c) 2014 SolOrient. All rights reserved.
//

#import "HPFaceView.h"

@implementation HPFaceView

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        
        [self setup];
        
    }
    return self;
}

-(void)setup {
    self.contentMode = UIViewContentModeRedraw;
}

-(void)awakeFromNib {
    [self setup];
}


- (void)drawRect:(CGRect)rect
{
    CGContextRef context = UIGraphicsGetCurrentContext();
    CGPoint midPoint;
    midPoint.x = self.bounds.origin.x + self.bounds.size.width/2;
    midPoint.y = self.bounds.origin.y + self.bounds.size.height/2;
    
    CGFloat radious = self.bounds.size.height/10;
    CGContextSetLineWidth(context, 0.5);
    [[UIColor blueColor] setStroke];
     
    UIGraphicsPushContext(context);
    CGContextBeginPath(context);
    CGContextAddArc(context, midPoint.x, midPoint.y, radious, 0, 2*M_PI, YES);
    CGContextSetFillColorWithColor(context,
                                   [UIColor redColor].CGColor);
    CGContextFillPath(context);
    CGContextStrokePath(context);
    UIGraphicsPopContext();
    
    
}


@end
