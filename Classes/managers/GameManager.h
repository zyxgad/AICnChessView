
#ifndef __GAME_MANAGER_H__
#define __GAME_MANAGER_H__

#include "CheMacro.h"


class GameManager{
private:
    GameManager();
    ~GameManager();
    static GameManager* _instance;

public:
    static GameManager* getInstance();
    static void deleteInstatnce();

private:
    GameStatus _status;
    std::string _dirPath;

public:
    GameStatus getStatus() const { return this->_status; }
    std::string getdirPath() const { return this->_dirPath; }

    void initWithScene(cocos2d::Scene* scene);
    void goBack();
    void onLoad();
    void goHome();
    void goOffline();
    void goOnline();
    void startGame();
    void leftGame();
    void close();

};



#endif // __GAME_MANAGER_H__
