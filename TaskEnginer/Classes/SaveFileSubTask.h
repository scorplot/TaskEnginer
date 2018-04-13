//
//  SaveFileTaskItem.h
//  Pods-TaskEnginer_Example
//
//  Created by Aruisi on 2017/8/5.
//  Copyright © 2017年 Scorplot. All rights reserved.
//

#import "SubTask.h"

@interface SaveFileSubTask : SubTask
-(instancetype)initWithName:(NSString*)filePath value:(id)value;

#pragma mark sub class need to override
-(NSData*)serialization:(id)value;
@end
