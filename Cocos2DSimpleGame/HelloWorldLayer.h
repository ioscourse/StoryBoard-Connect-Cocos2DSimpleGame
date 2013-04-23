//
//  HelloWorldLayer.h
//  Cocos2DSimpleGame
//
//  Created by Charles Konkol on 3/5/13.
//  Copyright __MyCompanyName__ 2013. All rights reserved.
//


#import <GameKit/GameKit.h>
#import "GameOverLayer.h"
// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"
int _monstersDestroyed;
// HelloWorldLayer
@interface HelloWorldLayer :  CCLayerColor <GKAchievementViewControllerDelegate, GKLeaderboardViewControllerDelegate>
{
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
