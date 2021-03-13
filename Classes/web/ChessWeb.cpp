/*
 *  
 *
 *  ChessWeb.cpp in AICnChess
 *  create on 2021/3/11
 *
 */

#import "ChessWeb.h"

ChessWeb* ChessWeb::_instance = nullptr;

ChessWeb::ChessWeb()
{
}

ChessWeb::~ChessWeb()
{
}


ChessWeb* ChessWeb::getInstance(){
    if(!_instance){
        _instance = new ChessWeb();
    }
    return _instance;
}

void ChessWeb::deleteInstance(){
    if(_instance){
        delete _instance;
        _instance = nullptr;
    }
}


bool ChessWeb::loginUser(std::string name, std::string pwd){
    return false;
}

bool ChessWeb::logoutUser(std::string name){
    return true;
}

