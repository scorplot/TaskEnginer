#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "JointTaskItem.h"
#import "JointSubTask.h"
#import "JointTaskManager.h"
#import "Task.h"
#import "SubTask.h"

FOUNDATION_EXPORT double TaskEnginerVersionNumber;
FOUNDATION_EXPORT const unsigned char TaskEnginerVersionString[];

