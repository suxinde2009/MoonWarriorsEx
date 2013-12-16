//
//  Options.h
//  MoonWarriorsEx
//
//  Created by su xinde on 13-12-16.
//
//

#ifndef __MoonWarriorsEx__Options__
#define __MoonWarriorsEx__Options__

#include <iostream>
#include "cocos2d.h"
USING_NS_CC;

class Options : public CCLayer {
    
public:
    static CCScene* scene();
    void setOptions();
    void goBack(CCObject *pSender);
    virtual bool init();
    CREATE_FUNC(Options);
    
};


#endif /* defined(__MoonWarriorsEx__Options__) */
