//
//  Effect.h
//  MoonWarriorsEx
//
//  Created by su xinde on 13-12-16.
//
//

#ifndef __MoonWarriorsEx__Effect__
#define __MoonWarriorsEx__Effect__

#include <iostream>
#include "cocos2d.h"
USING_NS_CC;

class Effect : public cocos2d::CCNode
{
    
private:
    CCSprite *m_sprite;
    
public:
    Effect(void);
    ~Effect(void);
    
    // flare effect
    void flareEffect(CCNode* parent, CCCallFunc* callback);
    void explode(CCNode *parent, CCPoint pos);
    void spark(CCPoint pos, CCNode *parent, float scale, float duration);
    
    void killSprite(CCNode *pSender);
    
    
    
    static void sharedExplosion();
    static Effect* create();
    
};

#endif /* defined(__MoonWarriorsEx__Effect__) */
