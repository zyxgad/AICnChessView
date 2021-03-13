/*
 *  
 *
 *  ChessWeb.h in AICnChess
 *  create on 2021/3/11
 *
 */

#ifndef ChessWeb_h__
#define ChessWeb_h__

#include "CheMacro.h"

class ChessWeb{
private:
	ChessWeb();
	~ChessWeb();

    static ChessWeb* _instance;
public:
    static ChessWeb* getInstance();
    static void deleteInstance();

private:
    chekey_t _connectKey;

public:
    bool loginUser(std::string name, std::string pwd);
    bool logoutUser(std::string name);

};



#endif // ChessWeb_h__
