//
//  About.h
//  MoonWarriorsEx
//
//  Created by su xinde on 13-12-16.
//
//

#ifndef __MoonWarriorsEx__About__
#define __MoonWarriorsEx__About__

#include <iostream>
#include "cocos2d.h"
USING_NS_CC;

class About : public CCLayer {

public:
    static CCScene* scene();
    virtual bool init();
    void goBack();
    CREATE_FUNC(About);
};


#endif /* defined(__MoonWarriorsEx__About__) */
