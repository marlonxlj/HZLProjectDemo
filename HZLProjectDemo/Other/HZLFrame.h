//
//  HZLFrame.h
//  HZLProjectDemo
//
//  Created by 黄梓伦 on 9/22/16.
//  Copyright © 2016 黄梓伦. All rights reserved.
//

#ifndef HZLFrame_h
#define HZLFrame_h
#import <UIKit/UIKit.h>
typedef struct ZLFrame{
    
    CGFloat originX;
    CGFloat originY;
    CGFloat SizeHeight;
    
}HZLFrame;
HZLFrame CGHZLFrameMake(CGFloat x, CGFloat y, CGFloat height);
HZLFrame CGHZLFrameMake(CGFloat x, CGFloat y, CGFloat height)
{
    HZLFrame rect;
    rect.originX = x;
    rect.originY = y;
    rect.SizeHeight = height;
    return rect;
}


#endif /* HZLFrame_h */