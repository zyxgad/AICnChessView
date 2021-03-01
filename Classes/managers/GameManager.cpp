
#include "GameManager.h"

USING_NS_CC;


GameManager* GameManager::_instance = nullptr;

GameManager::GameManager()
:_status(GameStatus::NONE)
,_scene(nullptr)
,_board(nullptr)
{
}
GameManager::~GameManager(){
	this->_scene = nullptr;
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

void GameManager::initWithScene(*cocos2d::Scene scene){
	this->_scene = scene;
	
}

void GameManager::goHome(){
	this->_status = GameStatus::HOME;
}

void GameManager::playOffline(){
	//
}

void GameManager::playOnline(){
	//
}

void GameManager::startGame(){
	auto board = PieceBoard::create();
	board->setName("board");
	board->setTag()
	_scene->addChild(board);
}

void GameManager::leftGame(){
	//
}

void GameManager::close(){
	Director::getInstance()->end();
}


