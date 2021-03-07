
#include "Player.h"

USING_NS_CC;

Player::Player()
:_name("")
{
}

Player::~Player(){
}

bool Player::init(){
    if(!(Sprite::init())){
        return false;
    }
    return true;
}
void Player::update(float dt){
    //
}

