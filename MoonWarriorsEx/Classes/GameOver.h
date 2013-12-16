//
//  GameOver.h
//  MoonWarriorsEx
//
//  Created by su xinde on 13-12-16.
//
//

#ifndef __MoonWarriorsEx__GameOver__
#define __MoonWarriorsEx__GameOver__

#include <iostream>
#include "cocos2d.h"

USING_NS_CC;

class GameOver : public CCLayer {
    
public:
    
    virtual bool init();
    static CCScene * scene();
    void playAgain();
    CREATE_FUNC(GameOver);
};

#endif /* defined(__MoonWarriorsEx__GameOver__) */
