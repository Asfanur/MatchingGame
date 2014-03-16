// HPAbstractScene.h
// 
// Copyright (c) 2014 Md.Asfanur Arafin
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>

@class AbstructEntity;

@interface HPAbstractScene : NSObject
@property (strong,nonatomic) NSString *name;
//update all elements on the scene
-(void) updateSceneWithDelta:(double)delta;
//renders curent scene
-(void) render;
//handel events
-(void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event view:(UIView *)aView;
-(void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event view:(UIView *)aView;
-(void)touchesCancelled:(NSSet *)touches withEvent:(UIEvent *)event view:(UIView *)aView;
-(void)touchesMoved:(NSSet *)touches withEvent:(UIEvent *)event view:(UIView *)aView;
//allows logic to add elements to the scene
-(void) addEntity:(AbstructEntity *)entity;
-(void) removeEntity:(AbstructEntity *)entity;


@end
