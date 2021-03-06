//
//  PlayingCard.h
//  Matchismo
//
//  Created by Zeeshan Khaliq on 5/29/13.
//  Copyright (c) 2013 Zeeshan Khaliq. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
