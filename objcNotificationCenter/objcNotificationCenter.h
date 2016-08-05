//
//  objcNotificationCenter.h
//  objcNotificationCenter
//
//  Created by FTET on 16/8/5.
//  Copyright © 2016年 vilyever. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for objcNotificationCenter.
FOUNDATION_EXPORT double objcNotificationCenterVersionNumber;

//! Project version string for objcNotificationCenter.
FOUNDATION_EXPORT const unsigned char objcNotificationCenterVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <objcNotificationCenter/PublicHeader.h>

#import <objcNotificationCenter/VDNotificationElement.h>
#import <objcNotificationCenter/NSObject+VDNotification.h>


#if !VDNotificationDefaultCenter
#define VDNotificationDefaultCenter \
[NSNotificationCenter defaultCenter]
#endif
