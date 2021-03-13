
#include "Player.h"
#include "utils/CheUtils.h"
#include "web/ChessWeb.h"

USING_NS_CC;


Player::Player()
:_name("")
,_head("")
,_login_type(LoginType::UNKNOW)
{
}

Player::~Player(){
    this->logout();
}

bool Player::loginWithOffline(std::string name){
    if(!CheUtils::checkStdStr(name)){
        return false;
    }
    this->_name = name;
    this->_login_type = LoginType::OFFLINE;
    return true;
}

bool Player::loginWithOnline(std::string name, std::string pwd){
    if(!CheUtils::checkStdStr(name)){
        return false;
    }
    if(!CheUtils::checkStdStr(pwd)){
        return false;
    }
    if(!ChessWeb::getInstance()->loginUser(name, pwd)){
        return false;
    }
    this->_name = name;
    this->_head = "";
    this->_login_type = LoginType::ONLINE;
    return true;
}

bool Player::loginWithRobot(){
    this->_name = "[ROBOT]";
    this->_login_type = LoginType::ROBOT;
    return true;
}


void Player::logout(){
    if(this->_login_type == LoginType::ONLINE){
        ChessWeb::getInstance()->logoutUser(this->_name);
    }
    this->_name = "";
    this->_head = "";
    this->_login_type = LoginType::UNKNOW;
}
