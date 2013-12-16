//
//  UnitSprite.h
//  MoonWarriorsEx
//
//  Created by su xinde on 13-12-16.
//
//

#ifndef __MoonWarriorsEx__UnitSprite__
#define __MoonWarriorsEx__UnitSprite__

#include <iostream>
#include "cocos2d.h"
USING_NS_CC;


class CostomeKeyPadDelegae : public CCKeypadDelegate , public CCNode{
    
public:
    virtual void keyBackClicked();
};


class UnitSprite : public CCSprite{
    
public:
    UnitSprite();
    ~UnitSprite();
    virtual void destroy() = 0;
    virtual void hurt() = 0 ;
    virtual CCRect collideRect() = 0;
    virtual bool isActive() = 0;
};

#endif /* defined(__MoonWarriorsEx__UnitSprite__) */
