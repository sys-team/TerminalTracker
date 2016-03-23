//
//  STTTAgentTaskComponent+CoreDataProperties.h
//  TerminalTracker
//
//  Created by Maxim Grigoriev on 23/03/16.
//  Copyright © 2016 Maxim Grigoriev. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "STTTAgentTaskComponent.h"

NS_ASSUME_NONNULL_BEGIN

@interface STTTAgentTaskComponent (CoreDataProperties)

@property (nullable, nonatomic, retain) STTTAgentTask *task;

@end

NS_ASSUME_NONNULL_END
