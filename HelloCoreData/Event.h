//
//  Event.h
//  HelloCoreData
//
//  Created by Thaddeus Ternes on 3/1/12.
//  Copyright (c) 2012 Bluetoo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Event : NSManagedObject

@property (nonatomic, retain) NSString * jibberish;
@property (nonatomic, retain) NSDate * timeStamp;

@end
