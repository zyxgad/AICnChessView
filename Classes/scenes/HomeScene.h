
#ifndef __HOME_SCENE_H__
#define __HOME_SCENE_H__

#include "CheMacro.h"

class HomeScene : public cocos2d::Scene{
public:
    HomeScene();
    virtual ~HomeScene();

    virtual bool init();
    virtual void update(float dt);

    CREATE_FUNC(HomeScene)

};


#endif // __HOME_SCENE_H__
