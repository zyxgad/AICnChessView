
#include "GameManager.h"


USING_NS_CC;


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
		delete _instance;
		_instance = nullptr;
	}
}

void GameManager::initWithScene(Scene* scene){
	auto director = Director::getInstance();
	director->runWithScene(scene);
	director->drawScene();
}

void GameManager::goHome(){
	log("Go home");

	auto scene = HomeScene::create();
	if(scene == nullptr){
		log("Init scene error");
		return;
	}
	this->_status = GameStatus::HOME;

	auto director = Director::getInstance();
	director->popToRootScene();
	director->pushScene((Scene*)(scene));
}

void GameManager::goOffline(){
	log("Going offline");
	this->_status = GameStatus::OFFLINE_SET;
}

void GameManager::goOnline(){
	log("Going online");
	this->_status = GameStatus::ONLINE_HOME;
}

void GameManager::startGame(){
	log("Start game");
}

void GameManager::leftGame(){
	log("Left game");
	this->close();
}

void GameManager::close(){
	Director::getInstance()->end();
}


