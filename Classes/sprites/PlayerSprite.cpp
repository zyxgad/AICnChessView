/*
 *  
 *
 *  PlayerSprite.cpp in AICnChess
 *  create on 2021/3/9
 *
 */

#import "PlayerSprite.h"

USING_NS_CC;


PlayerSprite::PlayerSprite()
:_player(nullptr)
{
}

PlayerSprite::~PlayerSprite(){
    if(this->_player){
        this->_player->release();
    }
}

bool PlayerSprite::init(){
    do{
        CC_BREAK_IF(!Sprite::init());
    }while(0);
    return false;
}

void PlayerSprite::update(float dt){
    //
}

void PlayerSprite::setPlayer(Player* player){
    if(player != this->_player){
        if(this->_player){
            this->_player->release();
        }
        this->_player = player;
        if(this->_player){
            this->_player->retain();
        }
    }
}

