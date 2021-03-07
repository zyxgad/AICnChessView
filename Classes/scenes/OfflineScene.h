/*
 * 
 * OfflineScene.h
 * AICnChess
 * create on 2021/3/7
 */

#ifndef OfflineScene_H__
#define OfflineScene_H__

#include "CheMacro.h"

class OfflineScene: public cocos2d::Scene{
public:
	OfflineScene();
	~OfflineScene();
    
    virtual bool init();
    virtual void update(float dt);


};



#endif // OfflineScene_H__
