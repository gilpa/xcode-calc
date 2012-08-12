//
//  Record.h
//  CountMeIn
//
//  Created by youngjun choi on 11/06/27.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Record : NSManagedObject {
@private
}
@property (nonatomic, retain) NSNumber * count;
@property (nonatomic, retain) NSDate * create;

@end
