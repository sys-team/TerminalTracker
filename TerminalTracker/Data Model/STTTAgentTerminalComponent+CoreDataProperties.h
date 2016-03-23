//
//  STTTAgentTerminalComponent+CoreDataProperties.h
//  TerminalTracker
//
//  Created by Maxim Grigoriev on 23/03/16.
//  Copyright © 2016 Maxim Grigoriev. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "STTTAgentTerminalComponent.h"

NS_ASSUME_NONNULL_BEGIN

@interface STTTAgentTerminalComponent (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *isdeleted;
@property (nullable, nonatomic, retain) NSNumber *isBroken;
@property (nullable, nonatomic, retain) STTTAgentComponent *component;
@property (nullable, nonatomic, retain) STTTAgentTerminal *terminal;

@end

NS_ASSUME_NONNULL_END
