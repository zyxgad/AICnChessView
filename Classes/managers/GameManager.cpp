
#include "GameManager.h"
#include "scenes/HomeScene.h"
#include "scenes/LoadingScene.h"
#include "scenes/OfflineScene.h"

USING_NS_CC;

static void appendLoaders(){
    appendTextureLoader("images/backgrounds/chessbg1.jpg");
    appendTextureLoader("images/backgrounds/chessbg2.jpg");
//    appendTextureLoader("images/buttons/close_disabled.png");
//    appendTextureLoader("images/buttons/close_normal.png");
//    appendTextureLoader("images/buttons/close_selected.png");
//    appendTextureLoader("images/buttons/offline_disabled.png");
//    appendTextureLoader("images/buttons/offline_normal.png");
//    appendTextureLoader("images/buttons/offline_selected.png");
    appendFrameLoader("images/buttons/buttons.png", "images/buttons/buttons.plist");
    appendFrameLoader("images/pieces/pieces.png", "images/pieces/pieces.plist");
}

GameManager* GameManager::_instance = nullptr;

GameManager::GameManager()
:_status(GameStatus::NONE)
{
}

GameManager::~GameManager(){
}

GameManager* GameManager::getInstance(){
    if(_instance == nullptr){
        _instance = new GameManager();
    }
    return _instance;
}

void GameManager::deleteInstatnce(){
    if(_instance != nullptr){
        _instance->close();
        delete _instance;
        _instance = nullptr;
    }
}

void GameManager::initWithScene(Scene* scene){
    auto director = Director::getInstance();
    director->runWithScene(scene);
    director->drawScene();
}

void GameManager::goBack(){
    Director::getInstance()->popScene();
}

void GameManager::onLoad(){
    CCLOGINFO("On load");

    appendLoaders();

    auto scene = LoadingScene::create();
    if(scene == nullptr){
        CCLOGWARN("Init scene error");
        return;
    }

    auto director = Director::getInstance();
    director->pushScene((Scene*)(scene));

    this->_status = GameStatus::LOADING;
}

void GameManager::goHome(){
    CCLOGINFO("Go home");

    auto scene = HomeScene::create();
    if(scene == nullptr){
        CCLOGWARN("Init scene error");
        return;
    }

    auto director = Director::getInstance();
    director->pushScene((Scene*)(scene));

    this->_status = GameStatus::HOME;
}

void GameManager::goOffline(){
    CCLOGINFO("Going offline");
    auto scene = OfflineScene::create();
    if(scene == nullptr){
        CCLOGWARN("Init scene error");
        return;
    }

    auto director = Director::getInstance();
    director->pushScene((Scene*)(scene));

    this->_status = GameStatus::OFFLINE_SET;
}

void GameManager::goOnline(){
    CCLOGINFO("Going online");
    this->_status = GameStatus::ONLINE_HOME;
}

void GameManager::startGame(){
    CCLOGINFO("Start game");
}

void GameManager::leftGame(){
    CCLOGINFO("Left game");
}

void GameManager::close(){
    CCLOGINFO("Close game");
    Director::getInstance()->end();
#if (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}

