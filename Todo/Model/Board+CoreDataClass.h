//
//  Board+CoreDataClass.h
//  Todo
//
//  Created by Ng Hui Qin on 5/4/19.
//  Copyright © 2019 huiqinlab. All rights reserved.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Task;

NS_ASSUME_NONNULL_BEGIN

@interface Board : NSManagedObject <NSSecureCoding>

@end

NS_ASSUME_NONNULL_END

#import "Board+CoreDataProperties.h"
