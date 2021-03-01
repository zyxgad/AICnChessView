
#ifndef __PLAYER_H__
#define __PLAYER_H__

#include "cocos2d.h"

class Player :public cocos2d::Sprite{
public:
	Player();
	virtual ~Player();

	virtual bool init();
	virtual void update(float dt);

	CREATE_FUNC(Player);
private:
	string _name;
};


#endif // __PLAYER_H__