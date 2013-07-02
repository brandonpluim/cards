//
//  CardStack.h
//  cards
//
//  Created by derrick on 7/1/13.
//  Copyright (c) 2013 derrh. All rights reserved.
//

#import "CardCollection.h"

@class Card;
@interface CardStack : CardCollection
+ (instancetype)shuffledDeck;

@property (nonatomic) BOOL isDrawPile;
@end
