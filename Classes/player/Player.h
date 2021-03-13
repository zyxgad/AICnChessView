
#ifndef __PLAYER_H__
#define __PLAYER_H__

#include "CheMacro.h"

class Player : public cocos2d::Ref{
public:
    Player();
    ~Player();

public:
    static Player* create(){
        Player* player = new (std::nothrow) Player();
        if (!player){
            return nullptr;
        }
        return player;
    }


protected:
    std::string _name;
    std::string _head;
    LoginType _login_type;

public:
    bool loginWithOffline(std::string name);
    bool loginWithOnline(std::string name, std::string pwd);
    bool loginWithRobot();
    void logout();

};


#endif // __PLAYER_H__
