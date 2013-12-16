//
//  PauseLayer.h
//  MoonWarriorsEx
//
//  Created by su xinde on 13-12-16.
//
//

#ifndef __MoonWarriorsEx__PauseLayer__
#define __MoonWarriorsEx__PauseLayer__

#include <iostream>
#include "cocos2d.h"
USING_NS_CC;

class PauseLayer : public CCLayerColor {
    
public:
    virtual bool init();
    virtual void  registerWithTouchDispatcher();
    
    virtual bool ccTouchBegan(CCTouch* touch, CCEvent* event);
    virtual void ccTouchMoved(CCTouch* touch, CCEvent* event);
    virtual void ccTouchEnded(CCTouch* touch, CCEvent* event);
    
    //    void doPause();
    void doResume(CCObject *pSender);
    CREATE_FUNC(PauseLayer);
};




#endif /* defined(__MoonWarriorsEx__PauseLayer__) */
