/*
 *  
 *
 *  PlayerSprite.h in AICnChess
 *  create on 2021/3/9
 *
 */

#ifndef PlayerSprite_h__
#define PlayerSprite_h__

#include "CheMacro.h"

#include "player/Player.h"

class PlayerSprite : public cocos2d::Sprite{
public:
	PlayerSprite();
	~PlayerSprite();

    virtual bool init();
    virtual void update(float dt);

    CREATE_FUNC(PlayerSprite)

private:
    Player* _player;

public:
    void getPlayer() const { return this->_player; };
    void setPlayer(Player* player);

};



#endif // PlayerSprite_h__
