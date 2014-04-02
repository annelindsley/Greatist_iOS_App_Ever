//
//  User+Methods.h
//  Greatist Message Publisher
//
//  Created by Ezekiel Abuhoff on 4/2/14.
//  Copyright (c) 2014 Ezekiel Abuhoff. All rights reserved.
//

#import "User.h"

@interface User (Methods)

+ (instancetype) userWithName: (NSString *)name
                     uniqueID: (NSString *)uniqueID
                    inContext: (NSManagedObjectContext *)context;

@end