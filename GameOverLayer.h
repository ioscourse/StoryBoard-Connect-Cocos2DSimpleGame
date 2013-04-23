//
//  GameOverLayer.h
//  Cocos2DSimpleGame
//
//  Created by Charles Konkol on 3/5/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#import "cocos2d.h"

@interface GameOverLayer : CCLayerColor

+(CCScene *) sceneWithWon:(BOOL)won;
- (id)initWithWon:(BOOL)won;

@end
