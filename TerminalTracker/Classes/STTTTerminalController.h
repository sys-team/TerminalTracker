//
//  STTTTerminalController.h
//  TerminalTracker
//
//  Created by Maxim Grigoriev on 6/28/13.
//  Copyright (c) 2013 Maxim Grigoriev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <STManagedTracker/STSession.h>
#import "STTTAgentTerminal.h"

@interface STTTTerminalController : NSObject <UITableViewDataSource>

@property (nonatomic, strong) STSession *session;
@property (nonatomic, strong) NSFetchedResultsController *resultsController;
@property (nonatomic, weak) UITableView *tableView;

- (void)performFetch;
- (void)calculateDistance;

@end
