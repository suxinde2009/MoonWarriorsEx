//
//  StartMenu.h
//  MoonWarriorsEx
//
//  Created by su xinde on 13-12-16.
//
//

#ifndef __MoonWarriorsEx__StartMenu__
#define __MoonWarriorsEx__StartMenu__

#include <iostream>
#include "cocos2d.h"
#include "Ship.h"
#include "UnitSprite.h"


class StartMenu : public cocos2d::CCLayer
{
private:
    CCSprite *m_ship;
    CCSize winSize;
public:
    // Method 'init' in cocos2d-x returns bool, instead of 'id' in cocos2d-iphone (an object pointer)
    virtual bool init();
    
    // there's no 'id' in cpp, so we recommend to return the class instance pointer
    static cocos2d::CCScene* scene();
    
    // a selector callback
    void menuCallback(CCObject* pSender);
    
    // button effect
    void onButtonEffect();
    
    // flare effct
    void flareEffect(CCNode *node);
    
    // draw ship
    virtual void update(float dt);
    
    //    virtual void keyBackClicked();
    
    // new game
    void newGame();
    
    // preprocessor macro for "static create()" constructor ( node() deprecated )
    CREATE_FUNC(StartMenu);
};



#endif /* defined(__MoonWarriorsEx__StartMenu__) */
